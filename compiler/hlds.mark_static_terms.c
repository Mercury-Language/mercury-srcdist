/*
** Automatically generated from `mark_static_terms.m'
** by the Mercury compiler,
** version rotd-2015-03-16
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 134 "hlds.mark_static_terms.c"
static const MR_FA_TypeInfo_Struct1 hlds__mark_static_terms__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 137 "hlds.mark_static_terms.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__mark_static_terms__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 140 "hlds.mark_static_terms.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__mark_static_terms__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 143 "hlds.mark_static_terms.c"
static const MR_FA_TypeInfo_Struct1 hlds__mark_static_terms__set_tree234__ti_set_tree234_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 146 "hlds.mark_static_terms.c"
static MR_bool MR_CALL 
hlds__mark_static_terms____Unify____static_info_0_0_10001(
#line 149 "hlds.mark_static_terms.c"
  MR_Box hlds__mark_static_terms__wrapper_arg_1,
#line 151 "hlds.mark_static_terms.c"
  MR_Box hlds__mark_static_terms__wrapper_arg_2);

#line 154 "hlds.mark_static_terms.c"
static void MR_CALL 
hlds__mark_static_terms____Compare____static_info_0_0_10001(
#line 157 "hlds.mark_static_terms.c"
  MR_Box * hlds__mark_static_terms__wrapper_arg_1,
#line 159 "hlds.mark_static_terms.c"
  MR_Box hlds__mark_static_terms__wrapper_arg_2,
#line 161 "hlds.mark_static_terms.c"
  MR_Box hlds__mark_static_terms__wrapper_arg_3);

#line 161 "mark_static_terms.m"
static MR_bool MR_CALL 
hlds__mark_static_terms__IntroducedFrom__pred__unification_mark_static_terms__161__1_2_p_0(
#line 161 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29,
#line 161 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__HeadVar__2_34);

#line 51 "mark_static_terms.m"
static void MR_CALL 
hlds__mark_static_terms____Compare____static_info_0_0(
#line 51 "mark_static_terms.m"
  MR_Word * hlds__mark_static_terms__HeadVar__1_1,
#line 51 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__HeadVar__2_2,
#line 51 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__HeadVar__3_3);

#line 51 "mark_static_terms.m"
static MR_bool MR_CALL 
hlds__mark_static_terms____Unify____static_info_0_0(
#line 51 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__HeadVar__1_1,
#line 51 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__HeadVar__2_2);

#line 161 "mark_static_terms.m"
static MR_bool MR_CALL 
hlds__mark_static_terms__unification_mark_static_terms_4_p_0_1(
#line 161 "mark_static_terms.m"
  MR_Box hlds__mark_static_terms__closure_arg,
#line 161 "mark_static_terms.m"
  MR_Box hlds__mark_static_terms__wrapper_arg_1);

#line 152 "mark_static_terms.m"
static void MR_CALL 
hlds__mark_static_terms__unification_mark_static_terms_4_p_0(
#line 152 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__Unification0_5,
#line 152 "mark_static_terms.m"
  MR_Word * hlds__mark_static_terms__Unification_6,
#line 152 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29,
#line 152 "mark_static_terms.m"
  MR_Word * hlds__mark_static_terms__STATE_VARIABLE_StaticVars_30);

#line 141 "mark_static_terms.m"
static void MR_CALL 
hlds__mark_static_terms__cases_mark_static_terms_3_p_0(
#line 141 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__HeadVar__1_1,
#line 141 "mark_static_terms.m"
  MR_Word * hlds__mark_static_terms__HeadVar__2_2,
#line 141 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__HeadVar__3_3);

#line 132 "mark_static_terms.m"
static void MR_CALL 
hlds__mark_static_terms__disj_mark_static_terms_3_p_0(
#line 132 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__HeadVar__1_1,
#line 132 "mark_static_terms.m"
  MR_Word * hlds__mark_static_terms__HeadVar__2_2,
#line 132 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__SI0_3);

#line 130 "mark_static_terms.m"
static void MR_CALL 
hlds__mark_static_terms__conj_mark_static_terms_4_p_0_1(
#line 130 "mark_static_terms.m"
  MR_Box hlds__mark_static_terms__closure_arg,
#line 130 "mark_static_terms.m"
  MR_Box hlds__mark_static_terms__wrapper_arg_1,
#line 130 "mark_static_terms.m"
  MR_Box * hlds__mark_static_terms__wrapper_arg_2,
#line 130 "mark_static_terms.m"
  MR_Box hlds__mark_static_terms__wrapper_arg_3,
#line 130 "mark_static_terms.m"
  MR_Box * hlds__mark_static_terms__wrapper_arg_4);

#line 126 "mark_static_terms.m"
static void MR_CALL 
hlds__mark_static_terms__conj_mark_static_terms_4_p_0(
#line 126 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__Goals0_5,
#line 126 "mark_static_terms.m"
  MR_Word * hlds__mark_static_terms__Goals_6,
#line 126 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__STATE_VARIABLE_SI_0_8,
#line 126 "mark_static_terms.m"
  MR_Word * hlds__mark_static_terms__STATE_VARIABLE_SI_9);

#line 60 "mark_static_terms.m"
static void MR_CALL 
hlds__mark_static_terms__goal_mark_static_terms_4_p_0(
#line 60 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__Goal0_5,
#line 60 "mark_static_terms.m"
  MR_Word * hlds__mark_static_terms__Goal_6,
#line 60 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__STATE_VARIABLE_SI_0_59,
#line 60 "mark_static_terms.m"
  MR_Word * hlds__mark_static_terms__STATE_VARIABLE_SI_60);


static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_2[1][7];

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_3[1][3];

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_4[1][5];




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

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_2[1][7] = {
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

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__mark_static_terms_scalar_common_2[0])),
    ((MR_Box) (hlds__mark_static_terms__conj_mark_static_terms_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__mark_static_terms__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__mark_static_terms__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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



#line 343 "hlds.mark_static_terms.c"
static const MR_FA_TypeInfo_Struct1 hlds__mark_static_terms__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 351 "hlds.mark_static_terms.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__mark_static_terms__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &hlds__mark_static_terms__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 359 "hlds.mark_static_terms.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__mark_static_terms__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 367 "hlds.mark_static_terms.c"
static const MR_FA_TypeInfo_Struct1 hlds__mark_static_terms__set_tree234__ti_set_tree234_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &hlds__mark_static_terms__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 375 "hlds.mark_static_terms.c"
const MR_TypeCtorInfo_Struct hlds__mark_static_terms__hlds__mark_static_terms__type_ctor_info_static_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

#line 392 "hlds.mark_static_terms.c"
static MR_bool MR_CALL 
hlds__mark_static_terms____Unify____static_info_0_0_10001(
#line 395 "hlds.mark_static_terms.c"
  MR_Box hlds__mark_static_terms__wrapper_arg_1,
#line 397 "hlds.mark_static_terms.c"
  MR_Box hlds__mark_static_terms__wrapper_arg_2)
#line 399 "hlds.mark_static_terms.c"
{
#line 401 "hlds.mark_static_terms.c"
  {
#line 403 "hlds.mark_static_terms.c"
    MR_bool hlds__mark_static_terms__succeeded;

#line 406 "hlds.mark_static_terms.c"
    {
#line 408 "hlds.mark_static_terms.c"
      hlds__mark_static_terms__succeeded = hlds__mark_static_terms____Unify____static_info_0_0(((MR_Word) hlds__mark_static_terms__wrapper_arg_1), ((MR_Word) hlds__mark_static_terms__wrapper_arg_2));
    }
#line 411 "hlds.mark_static_terms.c"
    return hlds__mark_static_terms__succeeded;
#line 413 "hlds.mark_static_terms.c"
  }
#line 415 "hlds.mark_static_terms.c"
}

#line 418 "hlds.mark_static_terms.c"
static void MR_CALL 
hlds__mark_static_terms____Compare____static_info_0_0_10001(
#line 421 "hlds.mark_static_terms.c"
  MR_Box * hlds__mark_static_terms__wrapper_arg_1,
#line 423 "hlds.mark_static_terms.c"
  MR_Box hlds__mark_static_terms__wrapper_arg_2,
#line 425 "hlds.mark_static_terms.c"
  MR_Box hlds__mark_static_terms__wrapper_arg_3)
#line 427 "hlds.mark_static_terms.c"
{
#line 429 "hlds.mark_static_terms.c"
  {
#line 431 "hlds.mark_static_terms.c"
    MR_Word hlds__mark_static_terms__conv0_HeadVar__1_1;

#line 434 "hlds.mark_static_terms.c"
    {
#line 436 "hlds.mark_static_terms.c"
      hlds__mark_static_terms____Compare____static_info_0_0(&hlds__mark_static_terms__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_static_terms__wrapper_arg_2), ((MR_Word) hlds__mark_static_terms__wrapper_arg_3));
    }
#line 439 "hlds.mark_static_terms.c"
    *hlds__mark_static_terms__wrapper_arg_1 = ((MR_Box) (hlds__mark_static_terms__conv0_HeadVar__1_1));
#line 441 "hlds.mark_static_terms.c"
  }
#line 443 "hlds.mark_static_terms.c"
}

#line 31 "mark_static_terms.m"
void MR_CALL 
hlds__mark_static_terms__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_91_49_93_95_48_3_p_0(
#line 31 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__STATE_VARIABLE_Proc_0_10,
#line 31 "mark_static_terms.m"
  MR_Word * hlds__mark_static_terms__STATE_VARIABLE_Proc_11)
#line 31 "mark_static_terms.m"
{
#line 53 "mark_static_terms.m"
  {
#line 53 "mark_static_terms.m"
    MR_bool hlds__mark_static_terms__succeeded;
#line 53 "mark_static_terms.m"
    MR_Word hlds__mark_static_terms__Goal0_6;
#line 53 "mark_static_terms.m"
    MR_Word hlds__mark_static_terms__StaticInfo0_7;
#line 53 "mark_static_terms.m"
    MR_Word hlds__mark_static_terms__Goal_8;
#line 57 "mark_static_terms.m"
    MR_Word hlds__mark_static_terms___StaticInfo_9;

#line 55 "mark_static_terms.m"
    {
#line 55 "mark_static_terms.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__mark_static_terms__STATE_VARIABLE_Proc_0_10, &hlds__mark_static_terms__Goal0_6);
    }
#line 56 "mark_static_terms.m"
    {
#line 56 "mark_static_terms.m"
      hlds__mark_static_terms__StaticInfo0_7 = mercury__set_tree234__init_0_f_0((MR_Word) &hlds__mark_static_terms_scalar_common_1[0]);
    }
#line 57 "mark_static_terms.m"
    {
#line 57 "mark_static_terms.m"
      hlds__mark_static_terms__goal_mark_static_terms_4_p_0(hlds__mark_static_terms__Goal0_6, &hlds__mark_static_terms__Goal_8, hlds__mark_static_terms__StaticInfo0_7, &hlds__mark_static_terms___StaticInfo_9);
    }
#line 58 "mark_static_terms.m"
    {
#line 58 "mark_static_terms.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(hlds__mark_static_terms__Goal_8, hlds__mark_static_terms__STATE_VARIABLE_Proc_0_10, hlds__mark_static_terms__STATE_VARIABLE_Proc_11);
#line 58 "mark_static_terms.m"
      return;
    }
#line 53 "mark_static_terms.m"
  }
#line 31 "mark_static_terms.m"
}

#line 161 "mark_static_terms.m"
static MR_bool MR_CALL 
hlds__mark_static_terms__IntroducedFrom__pred__unification_mark_static_terms__161__1_2_p_0(
#line 161 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29,
#line 161 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__HeadVar__2_34)
#line 161 "mark_static_terms.m"
{
#line 161 "mark_static_terms.m"
  {
#line 161 "mark_static_terms.m"
    MR_bool hlds__mark_static_terms__succeeded;

#line 161 "mark_static_terms.m"
    {
#line 161 "mark_static_terms.m"
      return hlds__mark_static_terms__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__mark_static_terms_scalar_common_1[0], hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29, ((MR_Box) (hlds__mark_static_terms__HeadVar__2_34)));
    }
#line 161 "mark_static_terms.m"
    return hlds__mark_static_terms__succeeded;
#line 161 "mark_static_terms.m"
  }
#line 161 "mark_static_terms.m"
}

#line 51 "mark_static_terms.m"
static void MR_CALL 
hlds__mark_static_terms____Compare____static_info_0_0(
#line 51 "mark_static_terms.m"
  MR_Word * hlds__mark_static_terms__HeadVar__1_1,
#line 51 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__HeadVar__2_2,
#line 51 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__HeadVar__3_3)
#line 51 "mark_static_terms.m"
{
#line 51 "mark_static_terms.m"
  {
#line 51 "mark_static_terms.m"
    MR_bool hlds__mark_static_terms__succeeded;
#line 51 "mark_static_terms.m"
    MR_Word hlds__mark_static_terms__Cast_HeadVar1_4 = hlds__mark_static_terms__HeadVar__2_2;
#line 51 "mark_static_terms.m"
    MR_Word hlds__mark_static_terms__Cast_HeadVar2_5 = hlds__mark_static_terms__HeadVar__3_3;

#line 51 "mark_static_terms.m"
    {
#line 51 "mark_static_terms.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__mark_static_terms_scalar_common_1[1], hlds__mark_static_terms__HeadVar__1_1, ((MR_Box) (hlds__mark_static_terms__Cast_HeadVar1_4)), ((MR_Box) (hlds__mark_static_terms__Cast_HeadVar2_5)));
#line 51 "mark_static_terms.m"
      return;
    }
#line 51 "mark_static_terms.m"
  }
#line 51 "mark_static_terms.m"
}

#line 51 "mark_static_terms.m"
static MR_bool MR_CALL 
hlds__mark_static_terms____Unify____static_info_0_0(
#line 51 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__HeadVar__1_1,
#line 51 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__HeadVar__2_2)
#line 51 "mark_static_terms.m"
{
#line 51 "mark_static_terms.m"
  {
#line 51 "mark_static_terms.m"
    MR_bool hlds__mark_static_terms__succeeded;
#line 51 "mark_static_terms.m"
    MR_Word hlds__mark_static_terms__Cast_HeadVar1_3 = hlds__mark_static_terms__HeadVar__1_1;
#line 51 "mark_static_terms.m"
    MR_Word hlds__mark_static_terms__Cast_HeadVar2_4 = hlds__mark_static_terms__HeadVar__2_2;

#line 51 "mark_static_terms.m"
    {
#line 51 "mark_static_terms.m"
      return hlds__mark_static_terms__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__mark_static_terms_scalar_common_1[1], ((MR_Box) (hlds__mark_static_terms__Cast_HeadVar1_3)), ((MR_Box) (hlds__mark_static_terms__Cast_HeadVar2_4)));
    }
#line 51 "mark_static_terms.m"
    return hlds__mark_static_terms__succeeded;
#line 51 "mark_static_terms.m"
  }
#line 51 "mark_static_terms.m"
}

#line 161 "mark_static_terms.m"
static MR_bool MR_CALL 
hlds__mark_static_terms__unification_mark_static_terms_4_p_0_1(
#line 161 "mark_static_terms.m"
  MR_Box hlds__mark_static_terms__closure_arg,
#line 161 "mark_static_terms.m"
  MR_Box hlds__mark_static_terms__wrapper_arg_1)
#line 161 "mark_static_terms.m"
{
#line 161 "mark_static_terms.m"
  {
#line 161 "mark_static_terms.m"
    MR_bool hlds__mark_static_terms__succeeded;
#line 161 "mark_static_terms.m"
    MR_Box hlds__mark_static_terms__closure = hlds__mark_static_terms__closure_arg;

#line 161 "mark_static_terms.m"
    {
#line 161 "mark_static_terms.m"
      return hlds__mark_static_terms__succeeded = hlds__mark_static_terms__IntroducedFrom__pred__unification_mark_static_terms__161__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__closure, (MR_Integer) 3))), ((MR_Word) hlds__mark_static_terms__wrapper_arg_1));
    }
#line 161 "mark_static_terms.m"
    return hlds__mark_static_terms__succeeded;
#line 161 "mark_static_terms.m"
  }
#line 161 "mark_static_terms.m"
}

#line 152 "mark_static_terms.m"
static void MR_CALL 
hlds__mark_static_terms__unification_mark_static_terms_4_p_0(
#line 152 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__Unification0_5,
#line 152 "mark_static_terms.m"
  MR_Word * hlds__mark_static_terms__Unification_6,
#line 152 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29,
#line 152 "mark_static_terms.m"
  MR_Word * hlds__mark_static_terms__STATE_VARIABLE_StaticVars_30)
#line 152 "mark_static_terms.m"
{
#line 158 "mark_static_terms.m"
  {
#line 158 "mark_static_terms.m"
    MR_bool hlds__mark_static_terms__succeeded;

#line 158 "mark_static_terms.m"
    if (((MR_tag((MR_Word) hlds__mark_static_terms__Unification0_5)) == (MR_mktag((MR_Integer) 2))))
#line 193 "mark_static_terms.m"
      {
#line 193 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__TargetVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_static_terms__Unification0_5, (MR_Integer) 0)));
#line 193 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__SourceVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_static_terms__Unification0_5, (MR_Integer) 1)));

#line 194 "mark_static_terms.m"
        *hlds__mark_static_terms__Unification_6 = hlds__mark_static_terms__Unification0_5;
#line 197 "mark_static_terms.m"
        {
#line 197 "mark_static_terms.m"
          hlds__mark_static_terms__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__mark_static_terms_scalar_common_1[0], hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29, ((MR_Box) (hlds__mark_static_terms__SourceVar_23)));
        }
#line 199 "mark_static_terms.m"
        if (hlds__mark_static_terms__succeeded)
#line 198 "mark_static_terms.m"
          {
#line 198 "mark_static_terms.m"
            {
#line 198 "mark_static_terms.m"
              mercury__set_tree234__insert_3_p_0((MR_Word) &hlds__mark_static_terms_scalar_common_1[0], ((MR_Box) (hlds__mark_static_terms__TargetVar_22)), hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29, hlds__mark_static_terms__STATE_VARIABLE_StaticVars_30);
#line 198 "mark_static_terms.m"
              return;
            }
#line 198 "mark_static_terms.m"
          }
#line 199 "mark_static_terms.m"
        else
#line 199 "mark_static_terms.m"
          *hlds__mark_static_terms__STATE_VARIABLE_StaticVars_30 = hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29;
#line 193 "mark_static_terms.m"
      }
#line 158 "mark_static_terms.m"
    else
#line 158 "mark_static_terms.m"
    if (((MR_tag((MR_Word) hlds__mark_static_terms__Unification0_5)) == (MR_mktag((MR_Integer) 0))))
#line 158 "mark_static_terms.m"
      {
#line 158 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Unification0_5, (MR_Integer) 0)));
#line 158 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Unification0_5, (MR_Integer) 1)));
#line 158 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__ArgVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Unification0_5, (MR_Integer) 2)));
#line 158 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__ArgModes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Unification0_5, (MR_Integer) 3)));
#line 158 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__HowToConstruct0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Unification0_5, (MR_Integer) 4)));
#line 158 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Unique_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Unification0_5, (MR_Integer) 5)));
#line 158 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__SubInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Unification0_5, (MR_Integer) 6)));
#line 161 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__V_32_32;

#line 161 "mark_static_terms.m"
        {
#line 161 "mark_static_terms.m"
          hlds__mark_static_terms__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 161 "mark_static_terms.m"
          MR_hl_field(MR_mktag(0), hlds__mark_static_terms__V_32_32, 0) = ((MR_Box) (&hlds__mark_static_terms_scalar_common_4[0]));
#line 161 "mark_static_terms.m"
          MR_hl_field(MR_mktag(0), hlds__mark_static_terms__V_32_32, 1) = ((MR_Box) (hlds__mark_static_terms__unification_mark_static_terms_4_p_0_1));
#line 161 "mark_static_terms.m"
          MR_hl_field(MR_mktag(0), hlds__mark_static_terms__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 161 "mark_static_terms.m"
          MR_hl_field(MR_mktag(0), hlds__mark_static_terms__V_32_32, 3) = ((MR_Box) (hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29));
#line 161 "mark_static_terms.m"
        }
#line 161 "mark_static_terms.m"
        {
#line 161 "mark_static_terms.m"
          hlds__mark_static_terms__succeeded = mercury__list__all_true_2_p_0((MR_Word) &hlds__mark_static_terms_scalar_common_1[0], hlds__mark_static_terms__V_32_32, hlds__mark_static_terms__ArgVars_10);
        }
#line 172 "mark_static_terms.m"
        if (hlds__mark_static_terms__succeeded)
#line 162 "mark_static_terms.m"
          {
#line 162 "mark_static_terms.m"
            MR_Word hlds__mark_static_terms__HowToConstruct_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 163 "mark_static_terms.m"
            {
#line 163 "mark_static_terms.m"
              mercury__set_tree234__insert_3_p_0((MR_Word) &hlds__mark_static_terms_scalar_common_1[0], ((MR_Box) (hlds__mark_static_terms__Var_8)), hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29, hlds__mark_static_terms__STATE_VARIABLE_StaticVars_30);
            }
#line 166 "mark_static_terms.m"
            {
#line 166 "mark_static_terms.m"
              hlds__mark_static_terms__succeeded = hlds__hlds_goal____Unify____how_to_construct_0_0(hlds__mark_static_terms__HowToConstruct_15, hlds__mark_static_terms__HowToConstruct0_12);
            }
#line 168 "mark_static_terms.m"
            if (hlds__mark_static_terms__succeeded)
#line 167 "mark_static_terms.m"
              *hlds__mark_static_terms__Unification_6 = hlds__mark_static_terms__Unification0_5;
#line 168 "mark_static_terms.m"
            else
#line 169 "mark_static_terms.m"
              {
#line 169 "mark_static_terms.m"
                MR_Word base;
#line 169 "mark_static_terms.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 169 "mark_static_terms.m"
                *hlds__mark_static_terms__Unification_6 = base;
#line 169 "mark_static_terms.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_static_terms__Var_8));
#line 169 "mark_static_terms.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_static_terms__ConsId_9));
#line 169 "mark_static_terms.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__mark_static_terms__ArgVars_10));
#line 169 "mark_static_terms.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__mark_static_terms__ArgModes_11));
#line 169 "mark_static_terms.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__mark_static_terms__HowToConstruct_15));
#line 169 "mark_static_terms.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__mark_static_terms__Unique_13));
#line 169 "mark_static_terms.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__mark_static_terms__SubInfo_14));
#line 169 "mark_static_terms.m"
              }
#line 162 "mark_static_terms.m"
          }
#line 172 "mark_static_terms.m"
        else
#line 173 "mark_static_terms.m"
          {
#line 173 "mark_static_terms.m"
            *hlds__mark_static_terms__Unification_6 = hlds__mark_static_terms__Unification0_5;
#line 173 "mark_static_terms.m"
            *hlds__mark_static_terms__STATE_VARIABLE_StaticVars_30 = hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29;
#line 173 "mark_static_terms.m"
          }
#line 158 "mark_static_terms.m"
      }
#line 158 "mark_static_terms.m"
    else
#line 158 "mark_static_terms.m"
    if (((MR_tag((MR_Word) hlds__mark_static_terms__Unification0_5)) == (MR_mktag((MR_Integer) 1))))
#line 177 "mark_static_terms.m"
      {
#line 178 "mark_static_terms.m"
        *hlds__mark_static_terms__Unification_6 = hlds__mark_static_terms__Unification0_5;
#line 177 "mark_static_terms.m"
        *hlds__mark_static_terms__STATE_VARIABLE_StaticVars_30 = hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29;
#line 177 "mark_static_terms.m"
      }
#line 158 "mark_static_terms.m"
    else
#line 205 "mark_static_terms.m"
      {
#line 206 "mark_static_terms.m"
        *hlds__mark_static_terms__Unification_6 = hlds__mark_static_terms__Unification0_5;
#line 205 "mark_static_terms.m"
        *hlds__mark_static_terms__STATE_VARIABLE_StaticVars_30 = hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29;
#line 205 "mark_static_terms.m"
      }
#line 158 "mark_static_terms.m"
  }
#line 152 "mark_static_terms.m"
}

#line 141 "mark_static_terms.m"
static void MR_CALL 
hlds__mark_static_terms__cases_mark_static_terms_3_p_0(
#line 141 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__HeadVar__1_1,
#line 141 "mark_static_terms.m"
  MR_Word * hlds__mark_static_terms__HeadVar__2_2,
#line 141 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__HeadVar__3_3)
#line 141 "mark_static_terms.m"
{
#line 144 "mark_static_terms.m"
  {
#line 144 "mark_static_terms.m"
    MR_bool hlds__mark_static_terms__succeeded;

#line 144 "mark_static_terms.m"
    if ((hlds__mark_static_terms__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 144 "mark_static_terms.m"
      *hlds__mark_static_terms__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 144 "mark_static_terms.m"
    else
#line 145 "mark_static_terms.m"
      {
#line 145 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Case0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_static_terms__HeadVar__1_1, (MR_Integer) 0)));
#line 145 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Cases0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_static_terms__HeadVar__1_1, (MR_Integer) 1)));
#line 145 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Case_7;
#line 145 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Cases_8;
#line 145 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__MainConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Case0_5, (MR_Integer) 0)));
#line 145 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__OtherConsIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Case0_5, (MR_Integer) 1)));
#line 145 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Case0_5, (MR_Integer) 2)));
#line 145 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Goal_13;
#line 148 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms___SI_14;

#line 148 "mark_static_terms.m"
        {
#line 148 "mark_static_terms.m"
          hlds__mark_static_terms__goal_mark_static_terms_4_p_0(hlds__mark_static_terms__Goal0_12, &hlds__mark_static_terms__Goal_13, hlds__mark_static_terms__HeadVar__3_3, &hlds__mark_static_terms___SI_14);
        }
#line 149 "mark_static_terms.m"
        {
#line 149 "mark_static_terms.m"
          hlds__mark_static_terms__Case_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 149 "mark_static_terms.m"
          MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Case_7, 0) = ((MR_Box) (hlds__mark_static_terms__MainConsId_10));
#line 149 "mark_static_terms.m"
          MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Case_7, 1) = ((MR_Box) (hlds__mark_static_terms__OtherConsIds_11));
#line 149 "mark_static_terms.m"
          MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Case_7, 2) = ((MR_Box) (hlds__mark_static_terms__Goal_13));
#line 149 "mark_static_terms.m"
        }
#line 150 "mark_static_terms.m"
        {
#line 150 "mark_static_terms.m"
          hlds__mark_static_terms__cases_mark_static_terms_3_p_0(hlds__mark_static_terms__Cases0_6, &hlds__mark_static_terms__Cases_8, hlds__mark_static_terms__HeadVar__3_3);
        }
#line 145 "mark_static_terms.m"
        {
#line 145 "mark_static_terms.m"
          MR_Word base;
#line 145 "mark_static_terms.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "mark_static_terms.m"
          *hlds__mark_static_terms__HeadVar__2_2 = base;
#line 145 "mark_static_terms.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_static_terms__Case_7));
#line 145 "mark_static_terms.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_static_terms__Cases_8));
#line 145 "mark_static_terms.m"
        }
#line 145 "mark_static_terms.m"
      }
#line 144 "mark_static_terms.m"
  }
#line 141 "mark_static_terms.m"
}

#line 132 "mark_static_terms.m"
static void MR_CALL 
hlds__mark_static_terms__disj_mark_static_terms_3_p_0(
#line 132 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__HeadVar__1_1,
#line 132 "mark_static_terms.m"
  MR_Word * hlds__mark_static_terms__HeadVar__2_2,
#line 132 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__SI0_3)
#line 132 "mark_static_terms.m"
{
#line 135 "mark_static_terms.m"
  {
#line 135 "mark_static_terms.m"
    MR_bool hlds__mark_static_terms__succeeded;

#line 135 "mark_static_terms.m"
    if ((hlds__mark_static_terms__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 135 "mark_static_terms.m"
      *hlds__mark_static_terms__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 135 "mark_static_terms.m"
    else
#line 136 "mark_static_terms.m"
      {
#line 136 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Goal0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_static_terms__HeadVar__1_1, (MR_Integer) 0)));
#line 136 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Goals0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_static_terms__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Goal_7;
#line 136 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Goals_8;
#line 138 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms___SI_10;

#line 138 "mark_static_terms.m"
        {
#line 138 "mark_static_terms.m"
          hlds__mark_static_terms__goal_mark_static_terms_4_p_0(hlds__mark_static_terms__Goal0_5, &hlds__mark_static_terms__Goal_7, hlds__mark_static_terms__SI0_3, &hlds__mark_static_terms___SI_10);
        }
#line 139 "mark_static_terms.m"
        {
#line 139 "mark_static_terms.m"
          hlds__mark_static_terms__disj_mark_static_terms_3_p_0(hlds__mark_static_terms__Goals0_6, &hlds__mark_static_terms__Goals_8, hlds__mark_static_terms__SI0_3);
        }
#line 136 "mark_static_terms.m"
        {
#line 136 "mark_static_terms.m"
          MR_Word base;
#line 136 "mark_static_terms.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 136 "mark_static_terms.m"
          *hlds__mark_static_terms__HeadVar__2_2 = base;
#line 136 "mark_static_terms.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_static_terms__Goal_7));
#line 136 "mark_static_terms.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_static_terms__Goals_8));
#line 136 "mark_static_terms.m"
        }
#line 136 "mark_static_terms.m"
      }
#line 135 "mark_static_terms.m"
  }
#line 132 "mark_static_terms.m"
}

#line 130 "mark_static_terms.m"
static void MR_CALL 
hlds__mark_static_terms__conj_mark_static_terms_4_p_0_1(
#line 130 "mark_static_terms.m"
  MR_Box hlds__mark_static_terms__closure_arg,
#line 130 "mark_static_terms.m"
  MR_Box hlds__mark_static_terms__wrapper_arg_1,
#line 130 "mark_static_terms.m"
  MR_Box * hlds__mark_static_terms__wrapper_arg_2,
#line 130 "mark_static_terms.m"
  MR_Box hlds__mark_static_terms__wrapper_arg_3,
#line 130 "mark_static_terms.m"
  MR_Box * hlds__mark_static_terms__wrapper_arg_4)
#line 130 "mark_static_terms.m"
{
#line 130 "mark_static_terms.m"
  {
#line 130 "mark_static_terms.m"
    MR_Box hlds__mark_static_terms__closure = hlds__mark_static_terms__closure_arg;
#line 130 "mark_static_terms.m"
    MR_Word hlds__mark_static_terms__conv1_Goal_6;
#line 130 "mark_static_terms.m"
    MR_Word hlds__mark_static_terms__conv0_STATE_VARIABLE_SI_60;

#line 130 "mark_static_terms.m"
    {
#line 130 "mark_static_terms.m"
      hlds__mark_static_terms__goal_mark_static_terms_4_p_0(((MR_Word) hlds__mark_static_terms__wrapper_arg_1), &hlds__mark_static_terms__conv1_Goal_6, ((MR_Word) hlds__mark_static_terms__wrapper_arg_3), &hlds__mark_static_terms__conv0_STATE_VARIABLE_SI_60);
    }
#line 130 "mark_static_terms.m"
    *hlds__mark_static_terms__wrapper_arg_2 = ((MR_Box) (hlds__mark_static_terms__conv1_Goal_6));
#line 130 "mark_static_terms.m"
    *hlds__mark_static_terms__wrapper_arg_4 = ((MR_Box) (hlds__mark_static_terms__conv0_STATE_VARIABLE_SI_60));
#line 130 "mark_static_terms.m"
  }
#line 130 "mark_static_terms.m"
}

#line 126 "mark_static_terms.m"
static void MR_CALL 
hlds__mark_static_terms__conj_mark_static_terms_4_p_0(
#line 126 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__Goals0_5,
#line 126 "mark_static_terms.m"
  MR_Word * hlds__mark_static_terms__Goals_6,
#line 126 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__STATE_VARIABLE_SI_0_8,
#line 126 "mark_static_terms.m"
  MR_Word * hlds__mark_static_terms__STATE_VARIABLE_SI_9)
#line 126 "mark_static_terms.m"
{
#line 129 "mark_static_terms.m"
  {
#line 129 "mark_static_terms.m"
    MR_bool hlds__mark_static_terms__succeeded;
#line 129 "mark_static_terms.m"
    MR_Word hlds__mark_static_terms__TypeCtorInfo_16_16 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 130 "mark_static_terms.m"
    MR_Box hlds__mark_static_terms__conv2_STATE_VARIABLE_SI_9;

#line 130 "mark_static_terms.m"
    {
#line 130 "mark_static_terms.m"
      mercury__list__map_foldl_5_p_0(hlds__mark_static_terms__TypeCtorInfo_16_16, hlds__mark_static_terms__TypeCtorInfo_16_16, (MR_Word) &hlds__mark_static_terms_scalar_common_1[1], (MR_Word) &hlds__mark_static_terms_scalar_common_3[0], hlds__mark_static_terms__Goals0_5, hlds__mark_static_terms__Goals_6, ((MR_Box) (hlds__mark_static_terms__STATE_VARIABLE_SI_0_8)), &hlds__mark_static_terms__conv2_STATE_VARIABLE_SI_9);
    }
#line 130 "mark_static_terms.m"
    *hlds__mark_static_terms__STATE_VARIABLE_SI_9 = ((MR_Word) hlds__mark_static_terms__conv2_STATE_VARIABLE_SI_9);
#line 129 "mark_static_terms.m"
  }
#line 126 "mark_static_terms.m"
}

#line 60 "mark_static_terms.m"
static void MR_CALL 
hlds__mark_static_terms__goal_mark_static_terms_4_p_0(
#line 60 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__Goal0_5,
#line 60 "mark_static_terms.m"
  MR_Word * hlds__mark_static_terms__Goal_6,
#line 60 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__STATE_VARIABLE_SI_0_59,
#line 60 "mark_static_terms.m"
  MR_Word * hlds__mark_static_terms__STATE_VARIABLE_SI_60)
#line 60 "mark_static_terms.m"
{
#line 63 "mark_static_terms.m"
  {
#line 63 "mark_static_terms.m"
    MR_bool hlds__mark_static_terms__succeeded;
#line 63 "mark_static_terms.m"
    MR_Word hlds__mark_static_terms__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Goal0_5, (MR_Integer) 0)));
#line 63 "mark_static_terms.m"
    MR_Word hlds__mark_static_terms__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Goal0_5, (MR_Integer) 1)));
#line 63 "mark_static_terms.m"
    MR_Word hlds__mark_static_terms__GoalExpr_10;

#line 73 "mark_static_terms.m"
    if (((MR_tag((MR_Word) hlds__mark_static_terms__GoalExpr0_8)) == (MR_mktag((MR_Integer) 0))))
#line 84 "mark_static_terms.m"
      {
#line 84 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__SubGoal0_18 = (MR_Word) MR_body(((MR_Word) hlds__mark_static_terms__GoalExpr0_8), (MR_Integer) 0);
#line 84 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__SubGoal_19;
#line 86 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms___SI_20;

#line 86 "mark_static_terms.m"
        {
#line 86 "mark_static_terms.m"
          hlds__mark_static_terms__goal_mark_static_terms_4_p_0(hlds__mark_static_terms__SubGoal0_18, &hlds__mark_static_terms__SubGoal_19, hlds__mark_static_terms__STATE_VARIABLE_SI_0_59, &hlds__mark_static_terms___SI_20);
        }
#line 87 "mark_static_terms.m"
        hlds__mark_static_terms__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__mark_static_terms__SubGoal_19);
#line 84 "mark_static_terms.m"
        *hlds__mark_static_terms__STATE_VARIABLE_SI_60 = hlds__mark_static_terms__STATE_VARIABLE_SI_0_59;
#line 84 "mark_static_terms.m"
      }
#line 73 "mark_static_terms.m"
    else
#line 73 "mark_static_terms.m"
    if (((MR_tag((MR_Word) hlds__mark_static_terms__GoalExpr0_8)) == (MR_mktag((MR_Integer) 2))))
#line 114 "mark_static_terms.m"
      {
#line 115 "mark_static_terms.m"
        hlds__mark_static_terms__GoalExpr_10 = hlds__mark_static_terms__GoalExpr0_8;
#line 114 "mark_static_terms.m"
        *hlds__mark_static_terms__STATE_VARIABLE_SI_60 = hlds__mark_static_terms__STATE_VARIABLE_SI_0_59;
#line 114 "mark_static_terms.m"
      }
#line 73 "mark_static_terms.m"
    else
#line 73 "mark_static_terms.m"
    if (((MR_tag((MR_Word) hlds__mark_static_terms__GoalExpr0_8)) == (MR_mktag((MR_Integer) 1))))
#line 117 "mark_static_terms.m"
      {
#line 117 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__LHS_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 0)));
#line 117 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__RHS_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 1)));
#line 117 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Mode_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 2)));
#line 117 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Unification0_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 3)));
#line 117 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Context_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 4)));
#line 117 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Unification_57;

#line 118 "mark_static_terms.m"
        {
#line 118 "mark_static_terms.m"
          hlds__mark_static_terms__unification_mark_static_terms_4_p_0(hlds__mark_static_terms__Unification0_55, &hlds__mark_static_terms__Unification_57, hlds__mark_static_terms__STATE_VARIABLE_SI_0_59, hlds__mark_static_terms__STATE_VARIABLE_SI_60);
        }
#line 119 "mark_static_terms.m"
        {
#line 119 "mark_static_terms.m"
          hlds__mark_static_terms__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 119 "mark_static_terms.m"
          MR_hl_field(MR_mktag(1), hlds__mark_static_terms__GoalExpr_10, 0) = ((MR_Box) (hlds__mark_static_terms__LHS_52));
#line 119 "mark_static_terms.m"
          MR_hl_field(MR_mktag(1), hlds__mark_static_terms__GoalExpr_10, 1) = ((MR_Box) (hlds__mark_static_terms__RHS_53));
#line 119 "mark_static_terms.m"
          MR_hl_field(MR_mktag(1), hlds__mark_static_terms__GoalExpr_10, 2) = ((MR_Box) (hlds__mark_static_terms__Mode_54));
#line 119 "mark_static_terms.m"
          MR_hl_field(MR_mktag(1), hlds__mark_static_terms__GoalExpr_10, 3) = ((MR_Box) (hlds__mark_static_terms__Unification_57));
#line 119 "mark_static_terms.m"
          MR_hl_field(MR_mktag(1), hlds__mark_static_terms__GoalExpr_10, 4) = ((MR_Box) (hlds__mark_static_terms__Context_56));
#line 119 "mark_static_terms.m"
        }
#line 117 "mark_static_terms.m"
      }
#line 73 "mark_static_terms.m"
    else
#line 73 "mark_static_terms.m"
    if (((((MR_tag((MR_Word) hlds__mark_static_terms__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 114 "mark_static_terms.m"
      {
#line 115 "mark_static_terms.m"
        hlds__mark_static_terms__GoalExpr_10 = hlds__mark_static_terms__GoalExpr0_8;
#line 114 "mark_static_terms.m"
        *hlds__mark_static_terms__STATE_VARIABLE_SI_60 = hlds__mark_static_terms__STATE_VARIABLE_SI_0_59;
#line 114 "mark_static_terms.m"
      }
#line 73 "mark_static_terms.m"
    else
#line 73 "mark_static_terms.m"
    if (((((MR_tag((MR_Word) hlds__mark_static_terms__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 67 "mark_static_terms.m"
      {
#line 67 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 1)));
#line 67 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 2)));
#line 67 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Goals_13;

#line 71 "mark_static_terms.m"
        {
#line 71 "mark_static_terms.m"
          hlds__mark_static_terms__conj_mark_static_terms_4_p_0(hlds__mark_static_terms__Goals0_12, &hlds__mark_static_terms__Goals_13, hlds__mark_static_terms__STATE_VARIABLE_SI_0_59, hlds__mark_static_terms__STATE_VARIABLE_SI_60);
        }
#line 72 "mark_static_terms.m"
        {
#line 72 "mark_static_terms.m"
          hlds__mark_static_terms__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 72 "mark_static_terms.m"
          MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 72 "mark_static_terms.m"
          MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 1) = ((MR_Box) (hlds__mark_static_terms__ConjType_11));
#line 72 "mark_static_terms.m"
          MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 2) = ((MR_Box) (hlds__mark_static_terms__Goals_13));
#line 72 "mark_static_terms.m"
        }
#line 67 "mark_static_terms.m"
      }
#line 73 "mark_static_terms.m"
    else
#line 73 "mark_static_terms.m"
    if (((((MR_tag((MR_Word) hlds__mark_static_terms__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 74 "mark_static_terms.m"
      {
#line 74 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Goals0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 1)));
#line 74 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Goals_70;

#line 76 "mark_static_terms.m"
        {
#line 76 "mark_static_terms.m"
          hlds__mark_static_terms__disj_mark_static_terms_3_p_0(hlds__mark_static_terms__Goals0_69, &hlds__mark_static_terms__Goals_70, hlds__mark_static_terms__STATE_VARIABLE_SI_0_59);
        }
#line 77 "mark_static_terms.m"
        {
#line 77 "mark_static_terms.m"
          hlds__mark_static_terms__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 77 "mark_static_terms.m"
          MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 77 "mark_static_terms.m"
          MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 1) = ((MR_Box) (hlds__mark_static_terms__Goals_70));
#line 77 "mark_static_terms.m"
        }
#line 74 "mark_static_terms.m"
        *hlds__mark_static_terms__STATE_VARIABLE_SI_60 = hlds__mark_static_terms__STATE_VARIABLE_SI_0_59;
#line 74 "mark_static_terms.m"
      }
#line 73 "mark_static_terms.m"
    else
#line 73 "mark_static_terms.m"
    if (((((MR_tag((MR_Word) hlds__mark_static_terms__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 114 "mark_static_terms.m"
      {
#line 115 "mark_static_terms.m"
        hlds__mark_static_terms__GoalExpr_10 = hlds__mark_static_terms__GoalExpr0_8;
#line 114 "mark_static_terms.m"
        *hlds__mark_static_terms__STATE_VARIABLE_SI_60 = hlds__mark_static_terms__STATE_VARIABLE_SI_0_59;
#line 114 "mark_static_terms.m"
      }
#line 73 "mark_static_terms.m"
    else
#line 73 "mark_static_terms.m"
    if (((((MR_tag((MR_Word) hlds__mark_static_terms__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 100 "mark_static_terms.m"
      {
#line 100 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 1)));
#line 100 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Cond0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 2)));
#line 100 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Then0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 3)));
#line 100 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Else0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 4)));
#line 100 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Cond_28;
#line 100 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__SI_Cond_29;
#line 100 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Then_30;
#line 100 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Else_32;
#line 107 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms___SI_Then_31;
#line 108 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms___SI_Else_33;

#line 106 "mark_static_terms.m"
        {
#line 106 "mark_static_terms.m"
          hlds__mark_static_terms__goal_mark_static_terms_4_p_0(hlds__mark_static_terms__Cond0_24, &hlds__mark_static_terms__Cond_28, hlds__mark_static_terms__STATE_VARIABLE_SI_0_59, &hlds__mark_static_terms__SI_Cond_29);
        }
#line 107 "mark_static_terms.m"
        {
#line 107 "mark_static_terms.m"
          hlds__mark_static_terms__goal_mark_static_terms_4_p_0(hlds__mark_static_terms__Then0_25, &hlds__mark_static_terms__Then_30, hlds__mark_static_terms__SI_Cond_29, &hlds__mark_static_terms___SI_Then_31);
        }
#line 108 "mark_static_terms.m"
        {
#line 108 "mark_static_terms.m"
          hlds__mark_static_terms__goal_mark_static_terms_4_p_0(hlds__mark_static_terms__Else0_26, &hlds__mark_static_terms__Else_32, hlds__mark_static_terms__STATE_VARIABLE_SI_0_59, &hlds__mark_static_terms___SI_Else_33);
        }
#line 109 "mark_static_terms.m"
        {
#line 109 "mark_static_terms.m"
          hlds__mark_static_terms__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 109 "mark_static_terms.m"
          MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 109 "mark_static_terms.m"
          MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 1) = ((MR_Box) (hlds__mark_static_terms__Vars_23));
#line 109 "mark_static_terms.m"
          MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 2) = ((MR_Box) (hlds__mark_static_terms__Cond_28));
#line 109 "mark_static_terms.m"
          MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 3) = ((MR_Box) (hlds__mark_static_terms__Then_30));
#line 109 "mark_static_terms.m"
          MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 4) = ((MR_Box) (hlds__mark_static_terms__Else_32));
#line 109 "mark_static_terms.m"
        }
#line 100 "mark_static_terms.m"
        *hlds__mark_static_terms__STATE_VARIABLE_SI_60 = hlds__mark_static_terms__STATE_VARIABLE_SI_0_59;
#line 100 "mark_static_terms.m"
      }
#line 73 "mark_static_terms.m"
    else
#line 73 "mark_static_terms.m"
    if (((((MR_tag((MR_Word) hlds__mark_static_terms__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 89 "mark_static_terms.m"
      {
#line 89 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Reason_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 1)));
#line 89 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__SubGoal0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 2)));
#line 95 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__TermVar_22;
#line 90 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__V_65_65;

#line 90 "mark_static_terms.m"
        hlds__mark_static_terms__succeeded = ((((MR_tag((MR_Word) hlds__mark_static_terms__Reason_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__Reason_21, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 90 "mark_static_terms.m"
        if (hlds__mark_static_terms__succeeded)
#line 90 "mark_static_terms.m"
          {
#line 90 "mark_static_terms.m"
            hlds__mark_static_terms__TermVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__Reason_21, (MR_Integer) 1)));
#line 90 "mark_static_terms.m"
            hlds__mark_static_terms__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__Reason_21, (MR_Integer) 2)));
#line 90 "mark_static_terms.m"
            hlds__mark_static_terms__succeeded = (hlds__mark_static_terms__V_65_65 == (MR_Integer) 1);
#line 90 "mark_static_terms.m"
          }
#line 95 "mark_static_terms.m"
        if (hlds__mark_static_terms__succeeded)
#line 93 "mark_static_terms.m"
          {
#line 93 "mark_static_terms.m"
            {
#line 93 "mark_static_terms.m"
              mercury__set_tree234__insert_3_p_0((MR_Word) &hlds__mark_static_terms_scalar_common_1[0], ((MR_Box) (hlds__mark_static_terms__TermVar_22)), hlds__mark_static_terms__STATE_VARIABLE_SI_0_59, hlds__mark_static_terms__STATE_VARIABLE_SI_60);
            }
#line 94 "mark_static_terms.m"
            hlds__mark_static_terms__GoalExpr_10 = hlds__mark_static_terms__GoalExpr0_8;
#line 93 "mark_static_terms.m"
          }
#line 95 "mark_static_terms.m"
        else
#line 96 "mark_static_terms.m"
          {
#line 96 "mark_static_terms.m"
            MR_Word hlds__mark_static_terms__SubGoal_71;

#line 96 "mark_static_terms.m"
            {
#line 96 "mark_static_terms.m"
              hlds__mark_static_terms__goal_mark_static_terms_4_p_0(hlds__mark_static_terms__SubGoal0_73, &hlds__mark_static_terms__SubGoal_71, hlds__mark_static_terms__STATE_VARIABLE_SI_0_59, hlds__mark_static_terms__STATE_VARIABLE_SI_60);
            }
#line 97 "mark_static_terms.m"
            {
#line 97 "mark_static_terms.m"
              hlds__mark_static_terms__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 97 "mark_static_terms.m"
              MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 97 "mark_static_terms.m"
              MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 1) = ((MR_Box) (hlds__mark_static_terms__Reason_21));
#line 97 "mark_static_terms.m"
              MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 2) = ((MR_Box) (hlds__mark_static_terms__SubGoal_71));
#line 97 "mark_static_terms.m"
            }
#line 96 "mark_static_terms.m"
          }
#line 89 "mark_static_terms.m"
      }
#line 73 "mark_static_terms.m"
    else
#line 73 "mark_static_terms.m"
    if (((((MR_tag((MR_Word) hlds__mark_static_terms__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 121 "mark_static_terms.m"
      {
#line 123 "mark_static_terms.m"
        {
#line 123 "mark_static_terms.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.mark_static_terms", (MR_String) "predicate \140hlds.mark_static_terms.goal_mark_static_terms\'/4", (MR_String) "shorthand");
#line 123 "mark_static_terms.m"
          return;
        }
#line 121 "mark_static_terms.m"
      }
#line 73 "mark_static_terms.m"
    else
#line 79 "mark_static_terms.m"
      {
#line 79 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 1)));
#line 79 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__CanFail_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 2)));
#line 79 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Cases0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 3)));
#line 79 "mark_static_terms.m"
        MR_Word hlds__mark_static_terms__Cases_17;

#line 81 "mark_static_terms.m"
        {
#line 81 "mark_static_terms.m"
          hlds__mark_static_terms__cases_mark_static_terms_3_p_0(hlds__mark_static_terms__Cases0_16, &hlds__mark_static_terms__Cases_17, hlds__mark_static_terms__STATE_VARIABLE_SI_0_59);
        }
#line 82 "mark_static_terms.m"
        {
#line 82 "mark_static_terms.m"
          hlds__mark_static_terms__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 82 "mark_static_terms.m"
          MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 82 "mark_static_terms.m"
          MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 1) = ((MR_Box) (hlds__mark_static_terms__Var_14));
#line 82 "mark_static_terms.m"
          MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 2) = ((MR_Box) (hlds__mark_static_terms__CanFail_15));
#line 82 "mark_static_terms.m"
          MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 3) = ((MR_Box) (hlds__mark_static_terms__Cases_17));
#line 82 "mark_static_terms.m"
        }
#line 79 "mark_static_terms.m"
        *hlds__mark_static_terms__STATE_VARIABLE_SI_60 = hlds__mark_static_terms__STATE_VARIABLE_SI_0_59;
#line 79 "mark_static_terms.m"
      }
#line 65 "mark_static_terms.m"
    {
#line 65 "mark_static_terms.m"
      MR_Word base;
#line 65 "mark_static_terms.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 65 "mark_static_terms.m"
      *hlds__mark_static_terms__Goal_6 = base;
#line 65 "mark_static_terms.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_static_terms__GoalExpr_10));
#line 65 "mark_static_terms.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_static_terms__GoalInfo_9));
#line 65 "mark_static_terms.m"
    }
#line 63 "mark_static_terms.m"
  }
#line 60 "mark_static_terms.m"
}

#line 31 "mark_static_terms.m"
void MR_CALL 
hlds__mark_static_terms__mark_static_terms_3_p_0(
#line 31 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms___ModuleInfo_4,
#line 31 "mark_static_terms.m"
  MR_Word hlds__mark_static_terms__STATE_VARIABLE_Proc_0_10,
#line 31 "mark_static_terms.m"
  MR_Word * hlds__mark_static_terms__STATE_VARIABLE_Proc_11)
#line 31 "mark_static_terms.m"
{
#line 53 "mark_static_terms.m"
  {
#line 53 "mark_static_terms.m"
    MR_bool hlds__mark_static_terms__succeeded;

#line 53 "mark_static_terms.m"
    {
#line 53 "mark_static_terms.m"
      hlds__mark_static_terms__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_91_49_93_95_48_3_p_0(hlds__mark_static_terms__STATE_VARIABLE_Proc_0_10, hlds__mark_static_terms__STATE_VARIABLE_Proc_11);
#line 53 "mark_static_terms.m"
      return;
    }
#line 53 "mark_static_terms.m"
  }
#line 31 "mark_static_terms.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.mark_static_terms. */
