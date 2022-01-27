/*
** Automatically generated from `granularity.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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


/* :- module transform_hlds.granularity. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__granularity__init
ENDINIT
*/

#include "transform_hlds.granularity.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
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
#include "hlds.goal_util.mih"
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
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 136 "transform_hlds.granularity.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__granularity__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 238 "granularity.m"
static MR_String MR_CALL 
transform_hlds__granularity__runtime_test_code_0_f_0(void);

#line 224 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_cases_6_p_0(
#line 224 "granularity.m"
  MR_Word transform_hlds__granularity__HeadVar__1_1,
#line 224 "granularity.m"
  MR_Word * transform_hlds__granularity__HeadVar__2_2,
#line 224 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_0_3,
#line 224 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_Changed_4,
#line 224 "granularity.m"
  MR_Word transform_hlds__granularity__SCC_5,
#line 224 "granularity.m"
  MR_Word transform_hlds__granularity__ModuleInfo_6);

#line 213 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(
#line 213 "granularity.m"
  MR_Word transform_hlds__granularity__HeadVar__1_1,
#line 213 "granularity.m"
  MR_Word * transform_hlds__granularity__HeadVar__2_2,
#line 213 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_0_3,
#line 213 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_Changed_4,
#line 213 "granularity.m"
  MR_Word transform_hlds__granularity__SCC_5,
#line 213 "granularity.m"
  MR_Word transform_hlds__granularity__ModuleInfo_6);

#line 93 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(
#line 93 "granularity.m"
  MR_Word transform_hlds__granularity__Goal0_7,
#line 93 "granularity.m"
  MR_Word * transform_hlds__granularity__Goal_8,
#line 93 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_0_71,
#line 93 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_Changed_72,
#line 93 "granularity.m"
  MR_Word transform_hlds__granularity__SCC_10,
#line 93 "granularity.m"
  MR_Word transform_hlds__granularity__ModuleInfo_11);

#line 61 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_proc_4_p_0(
#line 61 "granularity.m"
  MR_Word transform_hlds__granularity__SCC_5,
#line 61 "granularity.m"
  MR_Word transform_hlds__granularity__HeadVar__2_2,
#line 61 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_22,
#line 61 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_23);

#line 59 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0_1(
#line 59 "granularity.m"
  MR_Box transform_hlds__granularity__closure_arg,
#line 59 "granularity.m"
  MR_Box transform_hlds__granularity__wrapper_arg_1,
#line 59 "granularity.m"
  MR_Box transform_hlds__granularity__wrapper_arg_2,
#line 59 "granularity.m"
  MR_Box * transform_hlds__granularity__wrapper_arg_3);

#line 55 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0(
#line 55 "granularity.m"
  MR_Word transform_hlds__granularity__SCC_4,
#line 55 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_6,
#line 55 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_7);

#line 53 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__control_granularity_2_p_0_1(
#line 53 "granularity.m"
  MR_Box transform_hlds__granularity__closure_arg,
#line 53 "granularity.m"
  MR_Box transform_hlds__granularity__wrapper_arg_1,
#line 53 "granularity.m"
  MR_Box transform_hlds__granularity__wrapper_arg_2,
#line 53 "granularity.m"
  MR_Box * transform_hlds__granularity__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__granularity_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__granularity_scalar_common_2[1][6];

static /* final */ const MR_Box transform_hlds__granularity_scalar_common_3[1][3];

static /* final */ const MR_Box transform_hlds__granularity_scalar_common_4[1][7];

static /* final */ const MR_Box transform_hlds__granularity_scalar_common_5[1][1];




static /* final */ const MR_Box transform_hlds__granularity_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__granularity_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__granularity__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__granularity_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__granularity_scalar_common_2[0])),
    ((MR_Box) (transform_hlds__granularity__control_granularity_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__granularity_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__granularity__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__granularity_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 317 "transform_hlds.granularity.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__granularity__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 238 "granularity.m"
static MR_String MR_CALL 
transform_hlds__granularity__runtime_test_code_0_f_0(void)
#line 238 "granularity.m"
{
#line 241 "granularity.m"
  {
#line 241 "granularity.m"
    MR_bool transform_hlds__granularity__succeeded;

#line 241 "granularity.m"
    return (MR_String) "SUCCESS_INDICATOR = MR_par_cond_local_wsdeque_length;\n#ifdef MR_DEBUG_RUNTIME_GRANULARITY_CONTROL\nMR_record_conditional_parallelism_decision(SUCCESS_INDICATOR);" "\n#endif\n";
#line 241 "granularity.m"
  }
#line 238 "granularity.m"
}

#line 224 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_cases_6_p_0(
#line 224 "granularity.m"
  MR_Word transform_hlds__granularity__HeadVar__1_1,
#line 224 "granularity.m"
  MR_Word * transform_hlds__granularity__HeadVar__2_2,
#line 224 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_0_3,
#line 224 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_Changed_4,
#line 224 "granularity.m"
  MR_Word transform_hlds__granularity__SCC_5,
#line 224 "granularity.m"
  MR_Word transform_hlds__granularity__ModuleInfo_6)
#line 224 "granularity.m"
{
#line 227 "granularity.m"
  {
#line 227 "granularity.m"
    MR_bool transform_hlds__granularity__succeeded;

#line 227 "granularity.m"
    if ((transform_hlds__granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 227 "granularity.m"
      {
#line 227 "granularity.m"
        *transform_hlds__granularity__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 227 "granularity.m"
        *transform_hlds__granularity__STATE_VARIABLE_Changed_4 = transform_hlds__granularity__STATE_VARIABLE_Changed_0_3;
#line 227 "granularity.m"
      }
#line 227 "granularity.m"
    else
#line 229 "granularity.m"
      {
#line 229 "granularity.m"
        MR_Word transform_hlds__granularity__Case0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 229 "granularity.m"
        MR_Word transform_hlds__granularity__Cases0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 229 "granularity.m"
        MR_Word transform_hlds__granularity__Case_14;
#line 229 "granularity.m"
        MR_Word transform_hlds__granularity__Cases_15;
#line 229 "granularity.m"
        MR_Word transform_hlds__granularity__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__granularity__Case0_12, (MR_Integer) 0)));
#line 229 "granularity.m"
        MR_Word transform_hlds__granularity__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__granularity__Case0_12, (MR_Integer) 1)));
#line 229 "granularity.m"
        MR_Word transform_hlds__granularity__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__granularity__Case0_12, (MR_Integer) 2)));
#line 229 "granularity.m"
        MR_Word transform_hlds__granularity__Goal_22;
#line 229 "granularity.m"
        MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_25_25;

#line 231 "granularity.m"
        {
#line 231 "granularity.m"
          transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(transform_hlds__granularity__Goal0_21, &transform_hlds__granularity__Goal_22, transform_hlds__granularity__STATE_VARIABLE_Changed_0_3, &transform_hlds__granularity__STATE_VARIABLE_Changed_25_25, transform_hlds__granularity__SCC_5, transform_hlds__granularity__ModuleInfo_6);
        }
#line 232 "granularity.m"
        {
#line 232 "granularity.m"
          transform_hlds__granularity__Case_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 232 "granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__granularity__Case_14, 0) = ((MR_Box) (transform_hlds__granularity__MainConsId_19));
#line 232 "granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__granularity__Case_14, 1) = ((MR_Box) (transform_hlds__granularity__OtherConsIds_20));
#line 232 "granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__granularity__Case_14, 2) = ((MR_Box) (transform_hlds__granularity__Goal_22));
#line 232 "granularity.m"
        }
#line 233 "granularity.m"
        {
#line 233 "granularity.m"
          transform_hlds__granularity__runtime_granularity_test_in_cases_6_p_0(transform_hlds__granularity__Cases0_13, &transform_hlds__granularity__Cases_15, transform_hlds__granularity__STATE_VARIABLE_Changed_25_25, transform_hlds__granularity__STATE_VARIABLE_Changed_4, transform_hlds__granularity__SCC_5, transform_hlds__granularity__ModuleInfo_6);
        }
#line 228 "granularity.m"
        {
#line 228 "granularity.m"
          MR_Word base;
#line 228 "granularity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "granularity.m"
          *transform_hlds__granularity__HeadVar__2_2 = base;
#line 228 "granularity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__granularity__Case_14));
#line 228 "granularity.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__granularity__Cases_15));
#line 228 "granularity.m"
        }
#line 229 "granularity.m"
      }
#line 227 "granularity.m"
  }
#line 224 "granularity.m"
}

#line 213 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(
#line 213 "granularity.m"
  MR_Word transform_hlds__granularity__HeadVar__1_1,
#line 213 "granularity.m"
  MR_Word * transform_hlds__granularity__HeadVar__2_2,
#line 213 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_0_3,
#line 213 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_Changed_4,
#line 213 "granularity.m"
  MR_Word transform_hlds__granularity__SCC_5,
#line 213 "granularity.m"
  MR_Word transform_hlds__granularity__ModuleInfo_6)
#line 213 "granularity.m"
{
#line 217 "granularity.m"
  {
#line 217 "granularity.m"
    MR_bool transform_hlds__granularity__succeeded;

#line 217 "granularity.m"
    if ((transform_hlds__granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 217 "granularity.m"
      {
#line 217 "granularity.m"
        *transform_hlds__granularity__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 217 "granularity.m"
        *transform_hlds__granularity__STATE_VARIABLE_Changed_4 = transform_hlds__granularity__STATE_VARIABLE_Changed_0_3;
#line 217 "granularity.m"
      }
#line 217 "granularity.m"
    else
#line 219 "granularity.m"
      {
#line 219 "granularity.m"
        MR_Word transform_hlds__granularity__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 219 "granularity.m"
        MR_Word transform_hlds__granularity__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 219 "granularity.m"
        MR_Word transform_hlds__granularity__Goal_14;
#line 219 "granularity.m"
        MR_Word transform_hlds__granularity__Goals_15;
#line 219 "granularity.m"
        MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_21_21;

#line 220 "granularity.m"
        {
#line 220 "granularity.m"
          transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(transform_hlds__granularity__Goal0_12, &transform_hlds__granularity__Goal_14, transform_hlds__granularity__STATE_VARIABLE_Changed_0_3, &transform_hlds__granularity__STATE_VARIABLE_Changed_21_21, transform_hlds__granularity__SCC_5, transform_hlds__granularity__ModuleInfo_6);
        }
#line 221 "granularity.m"
        {
#line 221 "granularity.m"
          transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(transform_hlds__granularity__Goals0_13, &transform_hlds__granularity__Goals_15, transform_hlds__granularity__STATE_VARIABLE_Changed_21_21, transform_hlds__granularity__STATE_VARIABLE_Changed_4, transform_hlds__granularity__SCC_5, transform_hlds__granularity__ModuleInfo_6);
        }
#line 218 "granularity.m"
        {
#line 218 "granularity.m"
          MR_Word base;
#line 218 "granularity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "granularity.m"
          *transform_hlds__granularity__HeadVar__2_2 = base;
#line 218 "granularity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__granularity__Goal_14));
#line 218 "granularity.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__granularity__Goals_15));
#line 218 "granularity.m"
        }
#line 219 "granularity.m"
      }
#line 217 "granularity.m"
  }
#line 213 "granularity.m"
}

#line 93 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(
#line 93 "granularity.m"
  MR_Word transform_hlds__granularity__Goal0_7,
#line 93 "granularity.m"
  MR_Word * transform_hlds__granularity__Goal_8,
#line 93 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_0_71,
#line 93 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_Changed_72,
#line 93 "granularity.m"
  MR_Word transform_hlds__granularity__SCC_10,
#line 93 "granularity.m"
  MR_Word transform_hlds__granularity__ModuleInfo_11)
#line 93 "granularity.m"
{
#line 96 "granularity.m"
  {
#line 96 "granularity.m"
    MR_bool transform_hlds__granularity__succeeded;
#line 96 "granularity.m"
    MR_Word transform_hlds__granularity__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__granularity__Goal0_7, (MR_Integer) 0)));
#line 96 "granularity.m"
    MR_Word transform_hlds__granularity__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__granularity__Goal0_7, (MR_Integer) 1)));
#line 96 "granularity.m"
    MR_Word transform_hlds__granularity__GoalExpr_20;

#line 157 "granularity.m"
    if (((MR_tag((MR_Word) transform_hlds__granularity__GoalExpr0_12)) == (MR_mktag((MR_Integer) 0))))
#line 182 "granularity.m"
      {
#line 182 "granularity.m"
        MR_Word transform_hlds__granularity__SubGoal0_43 = (MR_Word) MR_body(((MR_Word) transform_hlds__granularity__GoalExpr0_12), (MR_Integer) 0);
#line 182 "granularity.m"
        MR_Word transform_hlds__granularity__SubGoal_44;

#line 183 "granularity.m"
        {
#line 183 "granularity.m"
          transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(transform_hlds__granularity__SubGoal0_43, &transform_hlds__granularity__SubGoal_44, transform_hlds__granularity__STATE_VARIABLE_Changed_0_71, transform_hlds__granularity__STATE_VARIABLE_Changed_72, transform_hlds__granularity__SCC_10, transform_hlds__granularity__ModuleInfo_11);
        }
#line 185 "granularity.m"
        transform_hlds__granularity__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__granularity__SubGoal_44);
#line 182 "granularity.m"
      }
#line 157 "granularity.m"
    else
#line 157 "granularity.m"
      if (((((MR_tag((MR_Word) transform_hlds__granularity__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 157 "granularity.m"
        {
#line 157 "granularity.m"
          MR_Word transform_hlds__granularity__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 2)));
#line 157 "granularity.m"
          MR_Word transform_hlds__granularity__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 1)));

#line 157 "granularity.m"
          if ((transform_hlds__granularity__V_135_135 == (MR_Integer) 1))
#line 99 "granularity.m"
            {
#line 99 "granularity.m"
              MR_Word transform_hlds__granularity__Goals_15;
#line 99 "granularity.m"
              MR_Word transform_hlds__granularity__Globals_16;
#line 99 "granularity.m"
              MR_Word transform_hlds__granularity__Target_17;
#line 99 "granularity.m"
              MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_87_87;

#line 100 "granularity.m"
              {
#line 100 "granularity.m"
                transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(transform_hlds__granularity__V_134_134, &transform_hlds__granularity__Goals_15, transform_hlds__granularity__STATE_VARIABLE_Changed_0_71, &transform_hlds__granularity__STATE_VARIABLE_Changed_87_87, transform_hlds__granularity__SCC_10, transform_hlds__granularity__ModuleInfo_11);
              }
#line 102 "granularity.m"
              {
#line 102 "granularity.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__granularity__ModuleInfo_11, &transform_hlds__granularity__Globals_16);
              }
#line 103 "granularity.m"
              {
#line 103 "granularity.m"
                libs__globals__get_target_2_p_0(transform_hlds__granularity__Globals_16, &transform_hlds__granularity__Target_17);
              }
#line 148 "granularity.m"
              if ((transform_hlds__granularity__Target_17 == (MR_Integer) 0))
#line 105 "granularity.m"
                {
#line 105 "granularity.m"
                  MR_Word transform_hlds__granularity__ModuleName_18;
#line 105 "granularity.m"
                  MR_Word transform_hlds__granularity__CalledSCCPredProcIds_19;

#line 106 "granularity.m"
                  {
#line 106 "granularity.m"
                    transform_hlds__granularity__ModuleName_18 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
                  }
#line 107 "granularity.m"
                  {
#line 107 "granularity.m"
                    transform_hlds__granularity__CalledSCCPredProcIds_19 = hlds__goal_util__goal_list_calls_proc_in_list_2_f_0(transform_hlds__granularity__Goals_15, transform_hlds__granularity__SCC_10);
                  }
#line 111 "granularity.m"
                  if ((transform_hlds__granularity__CalledSCCPredProcIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 109 "granularity.m"
                    {
#line 110 "granularity.m"
                      {
#line 110 "granularity.m"
                        transform_hlds__granularity__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 110 "granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 110 "granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 1) = ((MR_Box) ((MR_Integer) 1));
#line 110 "granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__granularity__Goals_15));
#line 110 "granularity.m"
                      }
#line 110 "granularity.m"
                      *transform_hlds__granularity__STATE_VARIABLE_Changed_72 = transform_hlds__granularity__STATE_VARIABLE_Changed_87_87;
#line 109 "granularity.m"
                    }
#line 111 "granularity.m"
                  else
#line 112 "granularity.m"
                    {
#line 112 "granularity.m"
                      MR_Word transform_hlds__granularity__Context_28;
#line 112 "granularity.m"
                      MR_Word transform_hlds__granularity__Attributes_29;
#line 112 "granularity.m"
                      MR_Word transform_hlds__granularity__Cond_30;
#line 112 "granularity.m"
                      MR_Word transform_hlds__granularity__Then_31;
#line 112 "granularity.m"
                      MR_Word transform_hlds__granularity__Else_32;
#line 112 "granularity.m"
                      MR_Word transform_hlds__granularity__IfThenElse_33;
#line 112 "granularity.m"
                      MR_Word transform_hlds__granularity__STATE_VARIABLE_Attributes_91_91;
#line 112 "granularity.m"
                      MR_Word transform_hlds__granularity__STATE_VARIABLE_Attributes_94_94;
#line 112 "granularity.m"
                      MR_Word transform_hlds__granularity__STATE_VARIABLE_Attributes_96_96;
#line 112 "granularity.m"
                      MR_Word transform_hlds__granularity__STATE_VARIABLE_Attributes_98_98;
#line 112 "granularity.m"
                      MR_Word transform_hlds__granularity__STATE_VARIABLE_Attributes_100_100;
#line 112 "granularity.m"
                      MR_Word transform_hlds__granularity__STATE_VARIABLE_Attributes_102_102;
#line 112 "granularity.m"
                      MR_Word transform_hlds__granularity__STATE_VARIABLE_Attributes_104_104;
#line 112 "granularity.m"
                      MR_String transform_hlds__granularity__V_111_111;
#line 112 "granularity.m"
                      MR_Word transform_hlds__granularity__V_112_112;
#line 112 "granularity.m"
                      MR_Word transform_hlds__granularity__V_113_113;
#line 112 "granularity.m"
                      MR_Word transform_hlds__granularity__V_115_115;
#line 112 "granularity.m"
                      MR_Word transform_hlds__granularity__V_117_117;

#line 118 "granularity.m"
                      {
#line 118 "granularity.m"
                        transform_hlds__granularity__Context_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__granularity__GoalInfo_13);
                      }
#line 120 "granularity.m"
                      {
#line 120 "granularity.m"
                        transform_hlds__granularity__STATE_VARIABLE_Attributes_91_91 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 0);
                      }
#line 121 "granularity.m"
                      {
#line 121 "granularity.m"
                        parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, transform_hlds__granularity__STATE_VARIABLE_Attributes_91_91, &transform_hlds__granularity__STATE_VARIABLE_Attributes_94_94);
                      }
#line 122 "granularity.m"
                      {
#line 122 "granularity.m"
                        parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 2, transform_hlds__granularity__STATE_VARIABLE_Attributes_94_94, &transform_hlds__granularity__STATE_VARIABLE_Attributes_96_96);
                      }
#line 123 "granularity.m"
                      {
#line 123 "granularity.m"
                        parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, transform_hlds__granularity__STATE_VARIABLE_Attributes_96_96, &transform_hlds__granularity__STATE_VARIABLE_Attributes_98_98);
                      }
#line 125 "granularity.m"
                      {
#line 125 "granularity.m"
                        parse_tree__prog_data__set_terminates_3_p_0((MR_Integer) 0, transform_hlds__granularity__STATE_VARIABLE_Attributes_98_98, &transform_hlds__granularity__STATE_VARIABLE_Attributes_100_100);
                      }
#line 126 "granularity.m"
                      {
#line 126 "granularity.m"
                        parse_tree__prog_data__set_may_throw_exception_3_p_0((MR_Integer) 0, transform_hlds__granularity__STATE_VARIABLE_Attributes_100_100, &transform_hlds__granularity__STATE_VARIABLE_Attributes_102_102);
                      }
#line 128 "granularity.m"
                      {
#line 128 "granularity.m"
                        parse_tree__prog_data__set_may_call_mm_tabled_3_p_0((MR_Integer) 1, transform_hlds__granularity__STATE_VARIABLE_Attributes_102_102, &transform_hlds__granularity__STATE_VARIABLE_Attributes_104_104);
                      }
#line 130 "granularity.m"
                      {
#line 130 "granularity.m"
                        parse_tree__prog_data__set_may_modify_trail_3_p_0((MR_Integer) 1, transform_hlds__granularity__STATE_VARIABLE_Attributes_104_104, &transform_hlds__granularity__Attributes_29);
                      }
#line 136 "granularity.m"
                      {
#line 136 "granularity.m"
                        transform_hlds__granularity__V_111_111 = transform_hlds__granularity__runtime_test_code_0_f_0();
                      }
#line 137 "granularity.m"
                      {
#line 137 "granularity.m"
                        transform_hlds__granularity__V_112_112 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                      }
#line 134 "granularity.m"
                      {
#line 134 "granularity.m"
                        hlds__goal_util__generate_foreign_proc_16_p_0(transform_hlds__granularity__ModuleName_18, (MR_String) "evaluate_parallelism_condition", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Integer) 2, transform_hlds__granularity__Attributes_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__granularity__V_111_111, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__granularity__V_112_112, transform_hlds__granularity__ModuleInfo_11, transform_hlds__granularity__Context_28, &transform_hlds__granularity__Cond_30);
                      }
#line 140 "granularity.m"
                      {
#line 140 "granularity.m"
                        transform_hlds__granularity__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 140 "granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 140 "granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_113_113, 1) = ((MR_Box) ((MR_Integer) 1));
#line 140 "granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_113_113, 2) = ((MR_Box) (transform_hlds__granularity__Goals_15));
#line 140 "granularity.m"
                      }
#line 140 "granularity.m"
                      {
#line 140 "granularity.m"
                        transform_hlds__granularity__Then_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 140 "granularity.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__granularity__Then_31, 0) = ((MR_Box) (transform_hlds__granularity__V_113_113));
#line 140 "granularity.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__granularity__Then_31, 1) = ((MR_Box) (transform_hlds__granularity__GoalInfo_13));
#line 140 "granularity.m"
                      }
#line 141 "granularity.m"
                      {
#line 141 "granularity.m"
                        transform_hlds__granularity__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 141 "granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 141 "granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_115_115, 1) = ((MR_Box) ((MR_Integer) 0));
#line 141 "granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_115_115, 2) = ((MR_Box) (transform_hlds__granularity__Goals_15));
#line 141 "granularity.m"
                      }
#line 141 "granularity.m"
                      {
#line 141 "granularity.m"
                        transform_hlds__granularity__Else_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 141 "granularity.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__granularity__Else_32, 0) = ((MR_Box) (transform_hlds__granularity__V_115_115));
#line 141 "granularity.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__granularity__Else_32, 1) = ((MR_Box) (transform_hlds__granularity__GoalInfo_13));
#line 141 "granularity.m"
                      }
#line 142 "granularity.m"
                      {
#line 142 "granularity.m"
                        transform_hlds__granularity__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 142 "granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 142 "granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 142 "granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_117_117, 2) = ((MR_Box) (transform_hlds__granularity__Cond_30));
#line 142 "granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_117_117, 3) = ((MR_Box) (transform_hlds__granularity__Then_31));
#line 142 "granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_117_117, 4) = ((MR_Box) (transform_hlds__granularity__Else_32));
#line 142 "granularity.m"
                      }
#line 142 "granularity.m"
                      {
#line 142 "granularity.m"
                        transform_hlds__granularity__IfThenElse_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 142 "granularity.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__granularity__IfThenElse_33, 0) = ((MR_Box) (transform_hlds__granularity__V_117_117));
#line 142 "granularity.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__granularity__IfThenElse_33, 1) = ((MR_Box) (transform_hlds__granularity__GoalInfo_13));
#line 142 "granularity.m"
                      }
#line 145 "granularity.m"
                      {
#line 145 "granularity.m"
                        transform_hlds__granularity__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 145 "granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 145 "granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__granularity_scalar_common_5[0])));
#line 145 "granularity.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__granularity__IfThenElse_33));
#line 145 "granularity.m"
                      }
#line 146 "granularity.m"
                      *transform_hlds__granularity__STATE_VARIABLE_Changed_72 = (MR_Integer) 1;
#line 112 "granularity.m"
                    }
#line 105 "granularity.m"
                }
#line 148 "granularity.m"
              else
#line 153 "granularity.m"
                {
#line 155 "granularity.m"
                  {
#line 155 "granularity.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.granularity", (MR_String) "predicate \140transform_hlds.granularity.runtime_granularity_test_in_goal\'/6", (MR_String) "unsupported target language");
#line 155 "granularity.m"
                    return;
                  }
#line 153 "granularity.m"
                }
#line 99 "granularity.m"
            }
#line 157 "granularity.m"
          else
#line 158 "granularity.m"
            {
#line 158 "granularity.m"
              MR_Word transform_hlds__granularity__Goals_123;

#line 159 "granularity.m"
              {
#line 159 "granularity.m"
                transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(transform_hlds__granularity__V_134_134, &transform_hlds__granularity__Goals_123, transform_hlds__granularity__STATE_VARIABLE_Changed_0_71, transform_hlds__granularity__STATE_VARIABLE_Changed_72, transform_hlds__granularity__SCC_10, transform_hlds__granularity__ModuleInfo_11);
              }
#line 161 "granularity.m"
              {
#line 161 "granularity.m"
                transform_hlds__granularity__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 161 "granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 161 "granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 1) = ((MR_Box) ((MR_Integer) 0));
#line 161 "granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__granularity__Goals_123));
#line 161 "granularity.m"
              }
#line 158 "granularity.m"
            }
#line 157 "granularity.m"
        }
#line 157 "granularity.m"
      else
#line 157 "granularity.m"
        if (((((MR_tag((MR_Word) transform_hlds__granularity__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 163 "granularity.m"
          {
#line 163 "granularity.m"
            MR_Word transform_hlds__granularity__Goals0_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 1)));
#line 163 "granularity.m"
            MR_Word transform_hlds__granularity__Goals_125;

#line 164 "granularity.m"
            {
#line 164 "granularity.m"
              transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(transform_hlds__granularity__Goals0_124, &transform_hlds__granularity__Goals_125, transform_hlds__granularity__STATE_VARIABLE_Changed_0_71, transform_hlds__granularity__STATE_VARIABLE_Changed_72, transform_hlds__granularity__SCC_10, transform_hlds__granularity__ModuleInfo_11);
            }
#line 166 "granularity.m"
            {
#line 166 "granularity.m"
              transform_hlds__granularity__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "granularity.m"
              MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 166 "granularity.m"
              MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 1) = ((MR_Box) (transform_hlds__granularity__Goals_125));
#line 166 "granularity.m"
            }
#line 163 "granularity.m"
          }
#line 157 "granularity.m"
        else
#line 157 "granularity.m"
          if (((((MR_tag((MR_Word) transform_hlds__granularity__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 173 "granularity.m"
            {
#line 173 "granularity.m"
              MR_Word transform_hlds__granularity__Vars_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 1)));
#line 173 "granularity.m"
              MR_Word transform_hlds__granularity__Cond0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 2)));
#line 173 "granularity.m"
              MR_Word transform_hlds__granularity__Then0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 3)));
#line 173 "granularity.m"
              MR_Word transform_hlds__granularity__Else0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 4)));
#line 173 "granularity.m"
              MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_78_78;
#line 173 "granularity.m"
              MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_79_79;
#line 173 "granularity.m"
              MR_Word transform_hlds__granularity__Cond_126;
#line 173 "granularity.m"
              MR_Word transform_hlds__granularity__Then_127;
#line 173 "granularity.m"
              MR_Word transform_hlds__granularity__Else_128;

#line 174 "granularity.m"
              {
#line 174 "granularity.m"
                transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(transform_hlds__granularity__Cond0_40, &transform_hlds__granularity__Cond_126, transform_hlds__granularity__STATE_VARIABLE_Changed_0_71, &transform_hlds__granularity__STATE_VARIABLE_Changed_78_78, transform_hlds__granularity__SCC_10, transform_hlds__granularity__ModuleInfo_11);
              }
#line 176 "granularity.m"
              {
#line 176 "granularity.m"
                transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(transform_hlds__granularity__Then0_41, &transform_hlds__granularity__Then_127, transform_hlds__granularity__STATE_VARIABLE_Changed_78_78, &transform_hlds__granularity__STATE_VARIABLE_Changed_79_79, transform_hlds__granularity__SCC_10, transform_hlds__granularity__ModuleInfo_11);
              }
#line 178 "granularity.m"
              {
#line 178 "granularity.m"
                transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(transform_hlds__granularity__Else0_42, &transform_hlds__granularity__Else_128, transform_hlds__granularity__STATE_VARIABLE_Changed_79_79, transform_hlds__granularity__STATE_VARIABLE_Changed_72, transform_hlds__granularity__SCC_10, transform_hlds__granularity__ModuleInfo_11);
              }
#line 180 "granularity.m"
              {
#line 180 "granularity.m"
                transform_hlds__granularity__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 180 "granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 180 "granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 1) = ((MR_Box) (transform_hlds__granularity__Vars_39));
#line 180 "granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__granularity__Cond_126));
#line 180 "granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 3) = ((MR_Box) (transform_hlds__granularity__Then_127));
#line 180 "granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 4) = ((MR_Box) (transform_hlds__granularity__Else_128));
#line 180 "granularity.m"
              }
#line 173 "granularity.m"
            }
#line 157 "granularity.m"
          else
#line 157 "granularity.m"
            if (((((MR_tag((MR_Word) transform_hlds__granularity__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 187 "granularity.m"
              {
#line 187 "granularity.m"
                MR_Word transform_hlds__granularity__Reason_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 1)));
#line 187 "granularity.m"
                MR_Word transform_hlds__granularity__SubGoal0_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 2)));
#line 189 "granularity.m"
                MR_Word transform_hlds__granularity__FGT_46;
#line 189 "granularity.m"
                MR_Word transform_hlds__granularity__V_45_45;

#line 189 "granularity.m"
                transform_hlds__granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__granularity__Reason_131)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__Reason_131, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 189 "granularity.m"
                if (transform_hlds__granularity__succeeded)
#line 189 "granularity.m"
                  {
#line 189 "granularity.m"
                    transform_hlds__granularity__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__Reason_131, (MR_Integer) 1)));
#line 189 "granularity.m"
                    transform_hlds__granularity__FGT_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__Reason_131, (MR_Integer) 2)));
#line 191 "granularity.m"
                    if ((transform_hlds__granularity__FGT_46 == (MR_Integer) 1))
#line 190 "granularity.m"
                      transform_hlds__granularity__succeeded = MR_TRUE;
#line 191 "granularity.m"
                    else
#line 191 "granularity.m"
                      if ((transform_hlds__granularity__FGT_46 == (MR_Integer) 2))
#line 191 "granularity.m"
                        transform_hlds__granularity__succeeded = MR_TRUE;
#line 191 "granularity.m"
                      else
#line 191 "granularity.m"
                        transform_hlds__granularity__succeeded = MR_FALSE;
#line 189 "granularity.m"
                  }
#line 195 "granularity.m"
                if (transform_hlds__granularity__succeeded)
#line 194 "granularity.m"
                  {
#line 194 "granularity.m"
                    transform_hlds__granularity__GoalExpr_20 = transform_hlds__granularity__GoalExpr0_12;
#line 194 "granularity.m"
                    *transform_hlds__granularity__STATE_VARIABLE_Changed_72 = transform_hlds__granularity__STATE_VARIABLE_Changed_0_71;
#line 194 "granularity.m"
                  }
#line 195 "granularity.m"
                else
#line 197 "granularity.m"
                  {
#line 197 "granularity.m"
                    MR_Word transform_hlds__granularity__SubGoal_129;

#line 196 "granularity.m"
                    {
#line 196 "granularity.m"
                      transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(transform_hlds__granularity__SubGoal0_132, &transform_hlds__granularity__SubGoal_129, transform_hlds__granularity__STATE_VARIABLE_Changed_0_71, transform_hlds__granularity__STATE_VARIABLE_Changed_72, transform_hlds__granularity__SCC_10, transform_hlds__granularity__ModuleInfo_11);
                    }
#line 198 "granularity.m"
                    {
#line 198 "granularity.m"
                      transform_hlds__granularity__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 198 "granularity.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 198 "granularity.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 1) = ((MR_Box) (transform_hlds__granularity__Reason_131));
#line 198 "granularity.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__granularity__SubGoal_129));
#line 198 "granularity.m"
                    }
#line 197 "granularity.m"
                  }
#line 187 "granularity.m"
              }
#line 157 "granularity.m"
            else
#line 157 "granularity.m"
              if (((((MR_tag((MR_Word) transform_hlds__granularity__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 208 "granularity.m"
                {
#line 209 "granularity.m"
                  {
#line 209 "granularity.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.granularity", (MR_String) "predicate \140transform_hlds.granularity.runtime_granularity_test_in_goal\'/6", (MR_String) "shorthand");
#line 209 "granularity.m"
                    return;
                  }
#line 208 "granularity.m"
                }
#line 157 "granularity.m"
              else
#line 157 "granularity.m"
                if (((((MR_tag((MR_Word) transform_hlds__granularity__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 168 "granularity.m"
                  {
#line 168 "granularity.m"
                    MR_Word transform_hlds__granularity__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 1)));
#line 168 "granularity.m"
                    MR_Word transform_hlds__granularity__CanFail_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 2)));
#line 168 "granularity.m"
                    MR_Word transform_hlds__granularity__Cases0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 3)));
#line 168 "granularity.m"
                    MR_Word transform_hlds__granularity__Cases_38;

#line 169 "granularity.m"
                    {
#line 169 "granularity.m"
                      transform_hlds__granularity__runtime_granularity_test_in_cases_6_p_0(transform_hlds__granularity__Cases0_37, &transform_hlds__granularity__Cases_38, transform_hlds__granularity__STATE_VARIABLE_Changed_0_71, transform_hlds__granularity__STATE_VARIABLE_Changed_72, transform_hlds__granularity__SCC_10, transform_hlds__granularity__ModuleInfo_11);
                    }
#line 171 "granularity.m"
                    {
#line 171 "granularity.m"
                      transform_hlds__granularity__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 171 "granularity.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 171 "granularity.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 1) = ((MR_Box) (transform_hlds__granularity__Var_35));
#line 171 "granularity.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__granularity__CanFail_36));
#line 171 "granularity.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 3) = ((MR_Box) (transform_hlds__granularity__Cases_38));
#line 171 "granularity.m"
                    }
#line 168 "granularity.m"
                  }
#line 157 "granularity.m"
                else
#line 205 "granularity.m"
                  {
#line 206 "granularity.m"
                    transform_hlds__granularity__GoalExpr_20 = transform_hlds__granularity__GoalExpr0_12;
#line 206 "granularity.m"
                    *transform_hlds__granularity__STATE_VARIABLE_Changed_72 = transform_hlds__granularity__STATE_VARIABLE_Changed_0_71;
#line 205 "granularity.m"
                  }
#line 211 "granularity.m"
    {
#line 211 "granularity.m"
      MR_Word base;
#line 211 "granularity.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 211 "granularity.m"
      *transform_hlds__granularity__Goal_8 = base;
#line 211 "granularity.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__granularity__GoalExpr_20));
#line 211 "granularity.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__granularity__GoalInfo_13));
#line 211 "granularity.m"
    }
#line 96 "granularity.m"
  }
#line 93 "granularity.m"
}

#line 61 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_proc_4_p_0(
#line 61 "granularity.m"
  MR_Word transform_hlds__granularity__SCC_5,
#line 61 "granularity.m"
  MR_Word transform_hlds__granularity__HeadVar__2_2,
#line 61 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_22,
#line 61 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_23)
#line 61 "granularity.m"
{
#line 64 "granularity.m"
  {
#line 64 "granularity.m"
    MR_bool transform_hlds__granularity__succeeded;
#line 64 "granularity.m"
    MR_Word transform_hlds__granularity__TypeCtorInfo_27_27;
#line 64 "granularity.m"
    MR_Word transform_hlds__granularity__TypeCtorInfo_28_28;
#line 64 "granularity.m"
    MR_Word transform_hlds__granularity__TypeCtorInfo_29_29;
#line 64 "granularity.m"
    MR_Word transform_hlds__granularity__TypeCtorInfo_30_30;
#line 64 "granularity.m"
    MR_Word transform_hlds__granularity__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__granularity__HeadVar__2_2, (MR_Integer) 0)));
#line 64 "granularity.m"
    MR_Integer transform_hlds__granularity__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__granularity__HeadVar__2_2, (MR_Integer) 1)));
#line 64 "granularity.m"
    MR_Word transform_hlds__granularity__PredTable0_9;
#line 64 "granularity.m"
    MR_Word transform_hlds__granularity__PredInfo0_10;
#line 64 "granularity.m"
    MR_Word transform_hlds__granularity__ProcTable0_11;
#line 64 "granularity.m"
    MR_Word transform_hlds__granularity__ProcInfo0_12;
#line 64 "granularity.m"
    MR_Word transform_hlds__granularity__HasParallelConj_13;
#line 66 "granularity.m"
    MR_Box transform_hlds__granularity__conv0_PredInfo0_10;
#line 68 "granularity.m"
    MR_Box transform_hlds__granularity__conv1_ProcInfo0_12;

#line 65 "granularity.m"
    {
#line 65 "granularity.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_22, &transform_hlds__granularity__PredTable0_9);
    }
#line 1168 "transform_hlds.granularity.c"
    transform_hlds__granularity__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1170 "transform_hlds.granularity.c"
    transform_hlds__granularity__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 66 "granularity.m"
    {
#line 66 "granularity.m"
      mercury__map__lookup_3_p_0(transform_hlds__granularity__TypeCtorInfo_27_27, transform_hlds__granularity__TypeCtorInfo_28_28, transform_hlds__granularity__PredTable0_9, ((MR_Box) (transform_hlds__granularity__PredId_6)), &transform_hlds__granularity__conv0_PredInfo0_10);
    }
#line 66 "granularity.m"
    transform_hlds__granularity__PredInfo0_10 = ((MR_Word) transform_hlds__granularity__conv0_PredInfo0_10);
#line 67 "granularity.m"
    {
#line 67 "granularity.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__granularity__PredInfo0_10, &transform_hlds__granularity__ProcTable0_11);
    }
#line 1184 "transform_hlds.granularity.c"
    transform_hlds__granularity__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 1186 "transform_hlds.granularity.c"
    transform_hlds__granularity__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 68 "granularity.m"
    {
#line 68 "granularity.m"
      mercury__map__lookup_3_p_0(transform_hlds__granularity__TypeCtorInfo_29_29, transform_hlds__granularity__TypeCtorInfo_30_30, transform_hlds__granularity__ProcTable0_11, ((MR_Box) (transform_hlds__granularity__ProcId_7)), &transform_hlds__granularity__conv1_ProcInfo0_12);
    }
#line 68 "granularity.m"
    transform_hlds__granularity__ProcInfo0_12 = ((MR_Word) transform_hlds__granularity__conv1_ProcInfo0_12);
#line 69 "granularity.m"
    {
#line 69 "granularity.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__granularity__ProcInfo0_12, &transform_hlds__granularity__HasParallelConj_13);
    }
#line 87 "granularity.m"
    if ((transform_hlds__granularity__HasParallelConj_13 == (MR_Integer) 1))
#line 88 "granularity.m"
      *transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_23 = transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_22;
#line 87 "granularity.m"
    else
#line 71 "granularity.m"
      {
#line 71 "granularity.m"
        MR_Word transform_hlds__granularity__Goal0_14;
#line 71 "granularity.m"
        MR_Word transform_hlds__granularity__Goal_15;
#line 71 "granularity.m"
        MR_Word transform_hlds__granularity__Changed_16;

#line 72 "granularity.m"
        {
#line 72 "granularity.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__granularity__ProcInfo0_12, &transform_hlds__granularity__Goal0_14);
        }
#line 73 "granularity.m"
        {
#line 73 "granularity.m"
          transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(transform_hlds__granularity__Goal0_14, &transform_hlds__granularity__Goal_15, (MR_Integer) 0, &transform_hlds__granularity__Changed_16, transform_hlds__granularity__SCC_5, transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_22);
        }
#line 77 "granularity.m"
        if ((transform_hlds__granularity__Changed_16 == (MR_Integer) 0))
#line 76 "granularity.m"
          *transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_23 = transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_22;
#line 77 "granularity.m"
        else
#line 78 "granularity.m"
          {
#line 78 "granularity.m"
            MR_Word transform_hlds__granularity__ProcInfo1_17;
#line 78 "granularity.m"
            MR_Word transform_hlds__granularity__ProcInfo_18;
#line 78 "granularity.m"
            MR_Word transform_hlds__granularity__ProcTable_19;
#line 78 "granularity.m"
            MR_Word transform_hlds__granularity__PredInfo_20;
#line 78 "granularity.m"
            MR_Word transform_hlds__granularity__PredTable_21;

#line 79 "granularity.m"
            {
#line 79 "granularity.m"
              hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__granularity__Goal_15, transform_hlds__granularity__ProcInfo0_12, &transform_hlds__granularity__ProcInfo1_17);
            }
#line 80 "granularity.m"
            {
#line 80 "granularity.m"
              hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__granularity__ProcInfo1_17, &transform_hlds__granularity__ProcInfo_18);
            }
#line 82 "granularity.m"
            {
#line 82 "granularity.m"
              mercury__map__det_update_4_p_0(transform_hlds__granularity__TypeCtorInfo_29_29, transform_hlds__granularity__TypeCtorInfo_30_30, ((MR_Box) (transform_hlds__granularity__ProcId_7)), ((MR_Box) (transform_hlds__granularity__ProcInfo_18)), transform_hlds__granularity__ProcTable0_11, &transform_hlds__granularity__ProcTable_19);
            }
#line 83 "granularity.m"
            {
#line 83 "granularity.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__granularity__ProcTable_19, transform_hlds__granularity__PredInfo0_10, &transform_hlds__granularity__PredInfo_20);
            }
#line 84 "granularity.m"
            {
#line 84 "granularity.m"
              mercury__map__det_update_4_p_0(transform_hlds__granularity__TypeCtorInfo_27_27, transform_hlds__granularity__TypeCtorInfo_28_28, ((MR_Box) (transform_hlds__granularity__PredId_6)), ((MR_Box) (transform_hlds__granularity__PredInfo_20)), transform_hlds__granularity__PredTable0_9, &transform_hlds__granularity__PredTable_21);
            }
#line 85 "granularity.m"
            {
#line 85 "granularity.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__granularity__PredTable_21, transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_23);
#line 85 "granularity.m"
              return;
            }
#line 78 "granularity.m"
          }
#line 71 "granularity.m"
      }
#line 64 "granularity.m"
  }
#line 61 "granularity.m"
}

#line 59 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0_1(
#line 59 "granularity.m"
  MR_Box transform_hlds__granularity__closure_arg,
#line 59 "granularity.m"
  MR_Box transform_hlds__granularity__wrapper_arg_1,
#line 59 "granularity.m"
  MR_Box transform_hlds__granularity__wrapper_arg_2,
#line 59 "granularity.m"
  MR_Box * transform_hlds__granularity__wrapper_arg_3)
#line 59 "granularity.m"
{
#line 59 "granularity.m"
  {
#line 59 "granularity.m"
    MR_Box transform_hlds__granularity__closure = transform_hlds__granularity__closure_arg;
#line 59 "granularity.m"
    MR_Word transform_hlds__granularity__conv0_STATE_VARIABLE_ModuleInfo_23;

#line 59 "granularity.m"
    {
#line 59 "granularity.m"
      transform_hlds__granularity__runtime_granularity_test_in_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__granularity__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__granularity__wrapper_arg_1), ((MR_Word) transform_hlds__granularity__wrapper_arg_2), &transform_hlds__granularity__conv0_STATE_VARIABLE_ModuleInfo_23);
    }
#line 59 "granularity.m"
    *transform_hlds__granularity__wrapper_arg_3 = ((MR_Box) (transform_hlds__granularity__conv0_STATE_VARIABLE_ModuleInfo_23));
#line 59 "granularity.m"
  }
#line 59 "granularity.m"
}

#line 55 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0(
#line 55 "granularity.m"
  MR_Word transform_hlds__granularity__SCC_4,
#line 55 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_6,
#line 55 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_7)
#line 55 "granularity.m"
{
#line 58 "granularity.m"
  {
#line 58 "granularity.m"
    MR_bool transform_hlds__granularity__succeeded;
#line 58 "granularity.m"
    MR_Word transform_hlds__granularity__V_8_8;
#line 59 "granularity.m"
    MR_Box transform_hlds__granularity__conv1_STATE_VARIABLE_ModuleInfo_7;

#line 59 "granularity.m"
    {
#line 59 "granularity.m"
      transform_hlds__granularity__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 59 "granularity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__granularity__V_8_8, 0) = ((MR_Box) (&transform_hlds__granularity_scalar_common_4[0]));
#line 59 "granularity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__granularity__V_8_8, 1) = ((MR_Box) (transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0_1));
#line 59 "granularity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__granularity__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 59 "granularity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__granularity__V_8_8, 3) = ((MR_Box) (transform_hlds__granularity__SCC_4));
#line 59 "granularity.m"
    }
#line 59 "granularity.m"
    {
#line 59 "granularity.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__granularity__V_8_8, transform_hlds__granularity__SCC_4, ((MR_Box) (transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_6)), &transform_hlds__granularity__conv1_STATE_VARIABLE_ModuleInfo_7);
    }
#line 59 "granularity.m"
    *transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_7 = ((MR_Word) transform_hlds__granularity__conv1_STATE_VARIABLE_ModuleInfo_7);
#line 58 "granularity.m"
  }
#line 55 "granularity.m"
}

#line 53 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__control_granularity_2_p_0_1(
#line 53 "granularity.m"
  MR_Box transform_hlds__granularity__closure_arg,
#line 53 "granularity.m"
  MR_Box transform_hlds__granularity__wrapper_arg_1,
#line 53 "granularity.m"
  MR_Box transform_hlds__granularity__wrapper_arg_2,
#line 53 "granularity.m"
  MR_Box * transform_hlds__granularity__wrapper_arg_3)
#line 53 "granularity.m"
{
#line 53 "granularity.m"
  {
#line 53 "granularity.m"
    MR_Box transform_hlds__granularity__closure = transform_hlds__granularity__closure_arg;
#line 53 "granularity.m"
    MR_Word transform_hlds__granularity__conv0_STATE_VARIABLE_ModuleInfo_7;

#line 53 "granularity.m"
    {
#line 53 "granularity.m"
      transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0(((MR_Word) transform_hlds__granularity__wrapper_arg_1), ((MR_Word) transform_hlds__granularity__wrapper_arg_2), &transform_hlds__granularity__conv0_STATE_VARIABLE_ModuleInfo_7);
    }
#line 53 "granularity.m"
    *transform_hlds__granularity__wrapper_arg_3 = ((MR_Box) (transform_hlds__granularity__conv0_STATE_VARIABLE_ModuleInfo_7));
#line 53 "granularity.m"
  }
#line 53 "granularity.m"
}

#line 21 "granularity.m"
void MR_CALL 
transform_hlds__granularity__control_granularity_2_p_0(
#line 21 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_6,
#line 21 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_7)
#line 21 "granularity.m"
{
#line 50 "granularity.m"
  {
#line 50 "granularity.m"
    MR_bool transform_hlds__granularity__succeeded;
#line 50 "granularity.m"
    MR_Word transform_hlds__granularity__DepInfo_4;
#line 50 "granularity.m"
    MR_Word transform_hlds__granularity__SCCs_5;
#line 50 "granularity.m"
    MR_Word transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_8_8;
#line 53 "granularity.m"
    MR_Box transform_hlds__granularity__conv1_STATE_VARIABLE_ModuleInfo_7;

#line 51 "granularity.m"
    {
#line 51 "granularity.m"
      transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_p_0(transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_6, &transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_8_8, &transform_hlds__granularity__DepInfo_4);
    }
#line 52 "granularity.m"
    {
#line 52 "granularity.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__granularity__DepInfo_4, &transform_hlds__granularity__SCCs_5);
    }
#line 53 "granularity.m"
    {
#line 53 "granularity.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__granularity_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__granularity_scalar_common_3[0], transform_hlds__granularity__SCCs_5, ((MR_Box) (transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_8_8)), &transform_hlds__granularity__conv1_STATE_VARIABLE_ModuleInfo_7);
    }
#line 53 "granularity.m"
    *transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_7 = ((MR_Word) transform_hlds__granularity__conv1_STATE_VARIABLE_ModuleInfo_7);
#line 50 "granularity.m"
  }
#line 21 "granularity.m"
}

void mercury__transform_hlds__granularity__init(void)
{
}

void mercury__transform_hlds__granularity__init_type_tables(void)
{
}

void mercury__transform_hlds__granularity__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.granularity. */
