/*
** Automatically generated from `granularity.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 143 "transform_hlds.granularity.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__granularity__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 242 "granularity.m"
static MR_String MR_CALL 
transform_hlds__granularity__runtime_test_code_0_f_0(void);

#line 228 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_cases_6_p_0(
#line 228 "granularity.m"
  MR_Word transform_hlds__granularity__HeadVar__1_1,
#line 228 "granularity.m"
  MR_Word * transform_hlds__granularity__HeadVar__2_2,
#line 228 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_0_3,
#line 228 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_Changed_4,
#line 228 "granularity.m"
  MR_Word transform_hlds__granularity__SCC_5,
#line 228 "granularity.m"
  MR_Word transform_hlds__granularity__ModuleInfo_6);

#line 217 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(
#line 217 "granularity.m"
  MR_Word transform_hlds__granularity__HeadVar__1_1,
#line 217 "granularity.m"
  MR_Word * transform_hlds__granularity__HeadVar__2_2,
#line 217 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_0_3,
#line 217 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_Changed_4,
#line 217 "granularity.m"
  MR_Word transform_hlds__granularity__SCC_5,
#line 217 "granularity.m"
  MR_Word transform_hlds__granularity__ModuleInfo_6);

#line 98 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(
#line 98 "granularity.m"
  MR_Word transform_hlds__granularity__Goal0_7,
#line 98 "granularity.m"
  MR_Word * transform_hlds__granularity__Goal_8,
#line 98 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_0_71,
#line 98 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_Changed_72,
#line 98 "granularity.m"
  MR_Word transform_hlds__granularity__SCC_10,
#line 98 "granularity.m"
  MR_Word transform_hlds__granularity__ModuleInfo_11);

#line 66 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_proc_4_p_0(
#line 66 "granularity.m"
  MR_Word transform_hlds__granularity__SCC_5,
#line 66 "granularity.m"
  MR_Word transform_hlds__granularity__HeadVar__2_2,
#line 66 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_22,
#line 66 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_23);

#line 64 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0_1(
#line 64 "granularity.m"
  MR_Box transform_hlds__granularity__closure_arg,
#line 64 "granularity.m"
  MR_Box transform_hlds__granularity__wrapper_arg_1,
#line 64 "granularity.m"
  MR_Box transform_hlds__granularity__wrapper_arg_2,
#line 64 "granularity.m"
  MR_Box * transform_hlds__granularity__wrapper_arg_3);

#line 60 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0(
#line 60 "granularity.m"
  MR_Word transform_hlds__granularity__SCC_4,
#line 60 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_6,
#line 60 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_7);

#line 58 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__control_granularity_2_p_0_1(
#line 58 "granularity.m"
  MR_Box transform_hlds__granularity__closure_arg,
#line 58 "granularity.m"
  MR_Box transform_hlds__granularity__wrapper_arg_1,
#line 58 "granularity.m"
  MR_Box transform_hlds__granularity__wrapper_arg_2,
#line 58 "granularity.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 316 "transform_hlds.granularity.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__granularity__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 242 "granularity.m"
static MR_String MR_CALL 
transform_hlds__granularity__runtime_test_code_0_f_0(void)
#line 242 "granularity.m"
{
#line 245 "granularity.m"
  {
#line 245 "granularity.m"
    MR_bool transform_hlds__granularity__succeeded;

#line 245 "granularity.m"
    return (MR_String) "SUCCESS_INDICATOR = MR_par_cond_local_wsdeque_length;\n#ifdef MR_DEBUG_RUNTIME_GRANULARITY_CONTROL\nMR_record_conditional_parallelism_decision(SUCCESS_INDICATOR);" "\n#endif\n";
#line 245 "granularity.m"
  }
#line 242 "granularity.m"
}

#line 228 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_cases_6_p_0(
#line 228 "granularity.m"
  MR_Word transform_hlds__granularity__HeadVar__1_1,
#line 228 "granularity.m"
  MR_Word * transform_hlds__granularity__HeadVar__2_2,
#line 228 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_0_3,
#line 228 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_Changed_4,
#line 228 "granularity.m"
  MR_Word transform_hlds__granularity__SCC_5,
#line 228 "granularity.m"
  MR_Word transform_hlds__granularity__ModuleInfo_6)
#line 228 "granularity.m"
{
#line 231 "granularity.m"
  {
#line 231 "granularity.m"
    MR_bool transform_hlds__granularity__succeeded;

#line 231 "granularity.m"
    if ((transform_hlds__granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 231 "granularity.m"
      {
#line 231 "granularity.m"
        *transform_hlds__granularity__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 231 "granularity.m"
        *transform_hlds__granularity__STATE_VARIABLE_Changed_4 = transform_hlds__granularity__STATE_VARIABLE_Changed_0_3;
#line 231 "granularity.m"
      }
#line 231 "granularity.m"
    else
#line 233 "granularity.m"
      {
#line 233 "granularity.m"
        MR_Word transform_hlds__granularity__Case0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 233 "granularity.m"
        MR_Word transform_hlds__granularity__Cases0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 233 "granularity.m"
        MR_Word transform_hlds__granularity__Case_14;
#line 233 "granularity.m"
        MR_Word transform_hlds__granularity__Cases_15;
#line 233 "granularity.m"
        MR_Word transform_hlds__granularity__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__granularity__Case0_12, (MR_Integer) 0)));
#line 233 "granularity.m"
        MR_Word transform_hlds__granularity__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__granularity__Case0_12, (MR_Integer) 1)));
#line 233 "granularity.m"
        MR_Word transform_hlds__granularity__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__granularity__Case0_12, (MR_Integer) 2)));
#line 233 "granularity.m"
        MR_Word transform_hlds__granularity__Goal_22;
#line 233 "granularity.m"
        MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_25_25;

#line 235 "granularity.m"
        {
#line 235 "granularity.m"
          transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(transform_hlds__granularity__Goal0_21, &transform_hlds__granularity__Goal_22, transform_hlds__granularity__STATE_VARIABLE_Changed_0_3, &transform_hlds__granularity__STATE_VARIABLE_Changed_25_25, transform_hlds__granularity__SCC_5, transform_hlds__granularity__ModuleInfo_6);
        }
#line 236 "granularity.m"
        {
#line 236 "granularity.m"
          transform_hlds__granularity__Case_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 236 "granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__granularity__Case_14, 0) = ((MR_Box) (transform_hlds__granularity__MainConsId_19));
#line 236 "granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__granularity__Case_14, 1) = ((MR_Box) (transform_hlds__granularity__OtherConsIds_20));
#line 236 "granularity.m"
          MR_hl_field(MR_mktag(0), transform_hlds__granularity__Case_14, 2) = ((MR_Box) (transform_hlds__granularity__Goal_22));
#line 236 "granularity.m"
        }
#line 237 "granularity.m"
        {
#line 237 "granularity.m"
          transform_hlds__granularity__runtime_granularity_test_in_cases_6_p_0(transform_hlds__granularity__Cases0_13, &transform_hlds__granularity__Cases_15, transform_hlds__granularity__STATE_VARIABLE_Changed_25_25, transform_hlds__granularity__STATE_VARIABLE_Changed_4, transform_hlds__granularity__SCC_5, transform_hlds__granularity__ModuleInfo_6);
        }
#line 232 "granularity.m"
        {
#line 232 "granularity.m"
          MR_Word base;
#line 232 "granularity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "granularity.m"
          *transform_hlds__granularity__HeadVar__2_2 = base;
#line 232 "granularity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__granularity__Case_14));
#line 232 "granularity.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__granularity__Cases_15));
#line 232 "granularity.m"
        }
#line 233 "granularity.m"
      }
#line 231 "granularity.m"
  }
#line 228 "granularity.m"
}

#line 217 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(
#line 217 "granularity.m"
  MR_Word transform_hlds__granularity__HeadVar__1_1,
#line 217 "granularity.m"
  MR_Word * transform_hlds__granularity__HeadVar__2_2,
#line 217 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_0_3,
#line 217 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_Changed_4,
#line 217 "granularity.m"
  MR_Word transform_hlds__granularity__SCC_5,
#line 217 "granularity.m"
  MR_Word transform_hlds__granularity__ModuleInfo_6)
#line 217 "granularity.m"
{
#line 221 "granularity.m"
  {
#line 221 "granularity.m"
    MR_bool transform_hlds__granularity__succeeded;

#line 221 "granularity.m"
    if ((transform_hlds__granularity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 221 "granularity.m"
      {
#line 221 "granularity.m"
        *transform_hlds__granularity__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 221 "granularity.m"
        *transform_hlds__granularity__STATE_VARIABLE_Changed_4 = transform_hlds__granularity__STATE_VARIABLE_Changed_0_3;
#line 221 "granularity.m"
      }
#line 221 "granularity.m"
    else
#line 223 "granularity.m"
      {
#line 223 "granularity.m"
        MR_Word transform_hlds__granularity__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__granularity__HeadVar__1_1, (MR_Integer) 0)));
#line 223 "granularity.m"
        MR_Word transform_hlds__granularity__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__granularity__HeadVar__1_1, (MR_Integer) 1)));
#line 223 "granularity.m"
        MR_Word transform_hlds__granularity__Goal_14;
#line 223 "granularity.m"
        MR_Word transform_hlds__granularity__Goals_15;
#line 223 "granularity.m"
        MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_21_21;

#line 224 "granularity.m"
        {
#line 224 "granularity.m"
          transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(transform_hlds__granularity__Goal0_12, &transform_hlds__granularity__Goal_14, transform_hlds__granularity__STATE_VARIABLE_Changed_0_3, &transform_hlds__granularity__STATE_VARIABLE_Changed_21_21, transform_hlds__granularity__SCC_5, transform_hlds__granularity__ModuleInfo_6);
        }
#line 225 "granularity.m"
        {
#line 225 "granularity.m"
          transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(transform_hlds__granularity__Goals0_13, &transform_hlds__granularity__Goals_15, transform_hlds__granularity__STATE_VARIABLE_Changed_21_21, transform_hlds__granularity__STATE_VARIABLE_Changed_4, transform_hlds__granularity__SCC_5, transform_hlds__granularity__ModuleInfo_6);
        }
#line 222 "granularity.m"
        {
#line 222 "granularity.m"
          MR_Word base;
#line 222 "granularity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "granularity.m"
          *transform_hlds__granularity__HeadVar__2_2 = base;
#line 222 "granularity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__granularity__Goal_14));
#line 222 "granularity.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__granularity__Goals_15));
#line 222 "granularity.m"
        }
#line 223 "granularity.m"
      }
#line 221 "granularity.m"
  }
#line 217 "granularity.m"
}

#line 98 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(
#line 98 "granularity.m"
  MR_Word transform_hlds__granularity__Goal0_7,
#line 98 "granularity.m"
  MR_Word * transform_hlds__granularity__Goal_8,
#line 98 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_0_71,
#line 98 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_Changed_72,
#line 98 "granularity.m"
  MR_Word transform_hlds__granularity__SCC_10,
#line 98 "granularity.m"
  MR_Word transform_hlds__granularity__ModuleInfo_11)
#line 98 "granularity.m"
{
#line 101 "granularity.m"
  {
#line 101 "granularity.m"
    MR_bool transform_hlds__granularity__succeeded;
#line 101 "granularity.m"
    MR_Word transform_hlds__granularity__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__granularity__Goal0_7, (MR_Integer) 0)));
#line 101 "granularity.m"
    MR_Word transform_hlds__granularity__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__granularity__Goal0_7, (MR_Integer) 1)));
#line 101 "granularity.m"
    MR_Word transform_hlds__granularity__GoalExpr_20;

#line 161 "granularity.m"
#line 161 "granularity.m"
    switch (MR_tag((MR_Word) transform_hlds__granularity__GoalExpr0_12)) {
#line 161 "granularity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 161 "granularity.m"
      case (MR_Integer) 0:
#line 186 "granularity.m"
        {
#line 186 "granularity.m"
          MR_Word transform_hlds__granularity__SubGoal0_43 = (MR_Word) MR_body(((MR_Word) transform_hlds__granularity__GoalExpr0_12), (MR_Integer) 0);
#line 186 "granularity.m"
          MR_Word transform_hlds__granularity__SubGoal_44;

#line 187 "granularity.m"
          {
#line 187 "granularity.m"
            transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(transform_hlds__granularity__SubGoal0_43, &transform_hlds__granularity__SubGoal_44, transform_hlds__granularity__STATE_VARIABLE_Changed_0_71, transform_hlds__granularity__STATE_VARIABLE_Changed_72, transform_hlds__granularity__SCC_10, transform_hlds__granularity__ModuleInfo_11);
          }
#line 189 "granularity.m"
          transform_hlds__granularity__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__granularity__SubGoal_44);
#line 186 "granularity.m"
        }
#line 161 "granularity.m"
        break;
#line 161 "granularity.m"
      case (MR_Integer) 1:
#line 161 "granularity.m"
      case (MR_Integer) 2:
#line 209 "granularity.m"
        {
#line 210 "granularity.m"
          transform_hlds__granularity__GoalExpr_20 = transform_hlds__granularity__GoalExpr0_12;
#line 209 "granularity.m"
          *transform_hlds__granularity__STATE_VARIABLE_Changed_72 = transform_hlds__granularity__STATE_VARIABLE_Changed_0_71;
#line 209 "granularity.m"
        }
#line 161 "granularity.m"
        break;
#line 161 "granularity.m"
      case (MR_Integer) 3:
#line 161 "granularity.m"
#line 161 "granularity.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 0)))) {
#line 161 "granularity.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 161 "granularity.m"
          case (MR_Integer) 0:
#line 161 "granularity.m"
          case (MR_Integer) 1:
#line 209 "granularity.m"
            {
#line 210 "granularity.m"
              transform_hlds__granularity__GoalExpr_20 = transform_hlds__granularity__GoalExpr0_12;
#line 209 "granularity.m"
              *transform_hlds__granularity__STATE_VARIABLE_Changed_72 = transform_hlds__granularity__STATE_VARIABLE_Changed_0_71;
#line 209 "granularity.m"
            }
#line 161 "granularity.m"
            break;
#line 161 "granularity.m"
          case (MR_Integer) 2:
#line 161 "granularity.m"
            {
#line 161 "granularity.m"
              MR_Word transform_hlds__granularity__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 2)));
#line 161 "granularity.m"
              MR_Word transform_hlds__granularity__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 1)));

#line 161 "granularity.m"
#line 161 "granularity.m"
              switch (transform_hlds__granularity__V_135_135) {
#line 161 "granularity.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 161 "granularity.m"
                case (MR_Integer) 1:
#line 104 "granularity.m"
                  {
#line 104 "granularity.m"
                    MR_Word transform_hlds__granularity__Goals_15;
#line 104 "granularity.m"
                    MR_Word transform_hlds__granularity__Globals_16;
#line 104 "granularity.m"
                    MR_Word transform_hlds__granularity__Target_17;
#line 104 "granularity.m"
                    MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_87_87;

#line 105 "granularity.m"
                    {
#line 105 "granularity.m"
                      transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(transform_hlds__granularity__V_134_134, &transform_hlds__granularity__Goals_15, transform_hlds__granularity__STATE_VARIABLE_Changed_0_71, &transform_hlds__granularity__STATE_VARIABLE_Changed_87_87, transform_hlds__granularity__SCC_10, transform_hlds__granularity__ModuleInfo_11);
                    }
#line 107 "granularity.m"
                    {
#line 107 "granularity.m"
                      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__granularity__ModuleInfo_11, &transform_hlds__granularity__Globals_16);
                    }
#line 108 "granularity.m"
                    {
#line 108 "granularity.m"
                      libs__globals__get_target_2_p_0(transform_hlds__granularity__Globals_16, &transform_hlds__granularity__Target_17);
                    }
#line 153 "granularity.m"
#line 153 "granularity.m"
                    switch (transform_hlds__granularity__Target_17) {
#line 153 "granularity.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 153 "granularity.m"
                      case (MR_Integer) 0:
#line 110 "granularity.m"
                        {
#line 110 "granularity.m"
                          MR_Word transform_hlds__granularity__ModuleName_18;
#line 110 "granularity.m"
                          MR_Word transform_hlds__granularity__CalledSCCPredProcIds_19;

#line 111 "granularity.m"
                          {
#line 111 "granularity.m"
                            transform_hlds__granularity__ModuleName_18 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
                          }
#line 112 "granularity.m"
                          {
#line 112 "granularity.m"
                            transform_hlds__granularity__CalledSCCPredProcIds_19 = hlds__goal_util__goal_list_calls_proc_in_list_2_f_0(transform_hlds__granularity__Goals_15, transform_hlds__granularity__SCC_10);
                          }
#line 116 "granularity.m"
                          if ((transform_hlds__granularity__CalledSCCPredProcIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 114 "granularity.m"
                            {
#line 115 "granularity.m"
                              {
#line 115 "granularity.m"
                                transform_hlds__granularity__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 115 "granularity.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 115 "granularity.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 1) = ((MR_Box) ((MR_Integer) 1));
#line 115 "granularity.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__granularity__Goals_15));
#line 115 "granularity.m"
                              }
#line 114 "granularity.m"
                              *transform_hlds__granularity__STATE_VARIABLE_Changed_72 = transform_hlds__granularity__STATE_VARIABLE_Changed_87_87;
#line 114 "granularity.m"
                            }
#line 116 "granularity.m"
                          else
#line 117 "granularity.m"
                            {
#line 117 "granularity.m"
                              MR_Word transform_hlds__granularity__Context_28;
#line 117 "granularity.m"
                              MR_Word transform_hlds__granularity__Attributes_29;
#line 117 "granularity.m"
                              MR_Word transform_hlds__granularity__Cond_30;
#line 117 "granularity.m"
                              MR_Word transform_hlds__granularity__Then_31;
#line 117 "granularity.m"
                              MR_Word transform_hlds__granularity__Else_32;
#line 117 "granularity.m"
                              MR_Word transform_hlds__granularity__IfThenElse_33;
#line 117 "granularity.m"
                              MR_Word transform_hlds__granularity__STATE_VARIABLE_Attributes_91_91;
#line 117 "granularity.m"
                              MR_Word transform_hlds__granularity__STATE_VARIABLE_Attributes_94_94;
#line 117 "granularity.m"
                              MR_Word transform_hlds__granularity__STATE_VARIABLE_Attributes_96_96;
#line 117 "granularity.m"
                              MR_Word transform_hlds__granularity__STATE_VARIABLE_Attributes_98_98;
#line 117 "granularity.m"
                              MR_Word transform_hlds__granularity__STATE_VARIABLE_Attributes_100_100;
#line 117 "granularity.m"
                              MR_Word transform_hlds__granularity__STATE_VARIABLE_Attributes_102_102;
#line 117 "granularity.m"
                              MR_Word transform_hlds__granularity__STATE_VARIABLE_Attributes_104_104;
#line 117 "granularity.m"
                              MR_String transform_hlds__granularity__V_111_111;
#line 117 "granularity.m"
                              MR_Word transform_hlds__granularity__V_112_112;
#line 117 "granularity.m"
                              MR_Word transform_hlds__granularity__V_113_113;
#line 117 "granularity.m"
                              MR_Word transform_hlds__granularity__V_115_115;
#line 117 "granularity.m"
                              MR_Word transform_hlds__granularity__V_117_117;

#line 123 "granularity.m"
                              {
#line 123 "granularity.m"
                                transform_hlds__granularity__Context_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__granularity__GoalInfo_13);
                              }
#line 125 "granularity.m"
                              {
#line 125 "granularity.m"
                                transform_hlds__granularity__STATE_VARIABLE_Attributes_91_91 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 0);
                              }
#line 126 "granularity.m"
                              {
#line 126 "granularity.m"
                                parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, transform_hlds__granularity__STATE_VARIABLE_Attributes_91_91, &transform_hlds__granularity__STATE_VARIABLE_Attributes_94_94);
                              }
#line 127 "granularity.m"
                              {
#line 127 "granularity.m"
                                parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 2, transform_hlds__granularity__STATE_VARIABLE_Attributes_94_94, &transform_hlds__granularity__STATE_VARIABLE_Attributes_96_96);
                              }
#line 128 "granularity.m"
                              {
#line 128 "granularity.m"
                                parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, transform_hlds__granularity__STATE_VARIABLE_Attributes_96_96, &transform_hlds__granularity__STATE_VARIABLE_Attributes_98_98);
                              }
#line 130 "granularity.m"
                              {
#line 130 "granularity.m"
                                parse_tree__prog_data__set_terminates_3_p_0((MR_Integer) 0, transform_hlds__granularity__STATE_VARIABLE_Attributes_98_98, &transform_hlds__granularity__STATE_VARIABLE_Attributes_100_100);
                              }
#line 131 "granularity.m"
                              {
#line 131 "granularity.m"
                                parse_tree__prog_data__set_may_throw_exception_3_p_0((MR_Integer) 0, transform_hlds__granularity__STATE_VARIABLE_Attributes_100_100, &transform_hlds__granularity__STATE_VARIABLE_Attributes_102_102);
                              }
#line 133 "granularity.m"
                              {
#line 133 "granularity.m"
                                parse_tree__prog_data__set_may_call_mm_tabled_3_p_0((MR_Integer) 1, transform_hlds__granularity__STATE_VARIABLE_Attributes_102_102, &transform_hlds__granularity__STATE_VARIABLE_Attributes_104_104);
                              }
#line 135 "granularity.m"
                              {
#line 135 "granularity.m"
                                parse_tree__prog_data__set_may_modify_trail_3_p_0((MR_Integer) 1, transform_hlds__granularity__STATE_VARIABLE_Attributes_104_104, &transform_hlds__granularity__Attributes_29);
                              }
#line 141 "granularity.m"
                              {
#line 141 "granularity.m"
                                transform_hlds__granularity__V_111_111 = transform_hlds__granularity__runtime_test_code_0_f_0();
                              }
#line 142 "granularity.m"
                              {
#line 142 "granularity.m"
                                transform_hlds__granularity__V_112_112 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                              }
#line 139 "granularity.m"
                              {
#line 139 "granularity.m"
                                hlds__goal_util__generate_foreign_proc_16_p_0(transform_hlds__granularity__ModuleName_18, (MR_String) "evaluate_parallelism_condition", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Integer) 2, transform_hlds__granularity__Attributes_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__granularity__V_111_111, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__granularity__V_112_112, transform_hlds__granularity__ModuleInfo_11, transform_hlds__granularity__Context_28, &transform_hlds__granularity__Cond_30);
                              }
#line 145 "granularity.m"
                              {
#line 145 "granularity.m"
                                transform_hlds__granularity__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 145 "granularity.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 145 "granularity.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_113_113, 1) = ((MR_Box) ((MR_Integer) 1));
#line 145 "granularity.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_113_113, 2) = ((MR_Box) (transform_hlds__granularity__Goals_15));
#line 145 "granularity.m"
                              }
#line 145 "granularity.m"
                              {
#line 145 "granularity.m"
                                transform_hlds__granularity__Then_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 145 "granularity.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__granularity__Then_31, 0) = ((MR_Box) (transform_hlds__granularity__V_113_113));
#line 145 "granularity.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__granularity__Then_31, 1) = ((MR_Box) (transform_hlds__granularity__GoalInfo_13));
#line 145 "granularity.m"
                              }
#line 146 "granularity.m"
                              {
#line 146 "granularity.m"
                                transform_hlds__granularity__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 146 "granularity.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 146 "granularity.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_115_115, 1) = ((MR_Box) ((MR_Integer) 0));
#line 146 "granularity.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_115_115, 2) = ((MR_Box) (transform_hlds__granularity__Goals_15));
#line 146 "granularity.m"
                              }
#line 146 "granularity.m"
                              {
#line 146 "granularity.m"
                                transform_hlds__granularity__Else_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 146 "granularity.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__granularity__Else_32, 0) = ((MR_Box) (transform_hlds__granularity__V_115_115));
#line 146 "granularity.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__granularity__Else_32, 1) = ((MR_Box) (transform_hlds__granularity__GoalInfo_13));
#line 146 "granularity.m"
                              }
#line 147 "granularity.m"
                              {
#line 147 "granularity.m"
                                transform_hlds__granularity__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 147 "granularity.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 147 "granularity.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 147 "granularity.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_117_117, 2) = ((MR_Box) (transform_hlds__granularity__Cond_30));
#line 147 "granularity.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_117_117, 3) = ((MR_Box) (transform_hlds__granularity__Then_31));
#line 147 "granularity.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__granularity__V_117_117, 4) = ((MR_Box) (transform_hlds__granularity__Else_32));
#line 147 "granularity.m"
                              }
#line 147 "granularity.m"
                              {
#line 147 "granularity.m"
                                transform_hlds__granularity__IfThenElse_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 147 "granularity.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__granularity__IfThenElse_33, 0) = ((MR_Box) (transform_hlds__granularity__V_117_117));
#line 147 "granularity.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__granularity__IfThenElse_33, 1) = ((MR_Box) (transform_hlds__granularity__GoalInfo_13));
#line 147 "granularity.m"
                              }
#line 150 "granularity.m"
                              {
#line 150 "granularity.m"
                                transform_hlds__granularity__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 150 "granularity.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 150 "granularity.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__granularity_scalar_common_5[0])));
#line 150 "granularity.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__granularity__IfThenElse_33));
#line 150 "granularity.m"
                              }
#line 151 "granularity.m"
                              *transform_hlds__granularity__STATE_VARIABLE_Changed_72 = (MR_Integer) 1;
#line 117 "granularity.m"
                            }
#line 110 "granularity.m"
                        }
#line 153 "granularity.m"
                        break;
#line 153 "granularity.m"
                      case (MR_Integer) 1:
#line 153 "granularity.m"
                      case (MR_Integer) 3:
#line 153 "granularity.m"
                      case (MR_Integer) 2:
#line 157 "granularity.m"
                        {
#line 159 "granularity.m"
                          {
#line 159 "granularity.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.granularity", (MR_String) "predicate \140transform_hlds.granularity.runtime_granularity_test_in_goal\'/6", (MR_String) "unsupported target language");
#line 159 "granularity.m"
                            return;
                          }
#line 157 "granularity.m"
                        }
#line 153 "granularity.m"
                        break;
#line 153 "granularity.m"
                    }
#line 104 "granularity.m"
                  }
#line 161 "granularity.m"
                  break;
#line 161 "granularity.m"
                case (MR_Integer) 0:
#line 162 "granularity.m"
                  {
#line 162 "granularity.m"
                    MR_Word transform_hlds__granularity__Goals_123;

#line 163 "granularity.m"
                    {
#line 163 "granularity.m"
                      transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(transform_hlds__granularity__V_134_134, &transform_hlds__granularity__Goals_123, transform_hlds__granularity__STATE_VARIABLE_Changed_0_71, transform_hlds__granularity__STATE_VARIABLE_Changed_72, transform_hlds__granularity__SCC_10, transform_hlds__granularity__ModuleInfo_11);
                    }
#line 165 "granularity.m"
                    {
#line 165 "granularity.m"
                      transform_hlds__granularity__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 165 "granularity.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 165 "granularity.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 1) = ((MR_Box) ((MR_Integer) 0));
#line 165 "granularity.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__granularity__Goals_123));
#line 165 "granularity.m"
                    }
#line 162 "granularity.m"
                  }
#line 161 "granularity.m"
                  break;
#line 161 "granularity.m"
              }
#line 161 "granularity.m"
            }
#line 161 "granularity.m"
            break;
#line 161 "granularity.m"
          case (MR_Integer) 3:
#line 167 "granularity.m"
            {
#line 167 "granularity.m"
              MR_Word transform_hlds__granularity__Goals0_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 1)));
#line 167 "granularity.m"
              MR_Word transform_hlds__granularity__Goals_125;

#line 168 "granularity.m"
              {
#line 168 "granularity.m"
                transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(transform_hlds__granularity__Goals0_124, &transform_hlds__granularity__Goals_125, transform_hlds__granularity__STATE_VARIABLE_Changed_0_71, transform_hlds__granularity__STATE_VARIABLE_Changed_72, transform_hlds__granularity__SCC_10, transform_hlds__granularity__ModuleInfo_11);
              }
#line 170 "granularity.m"
              {
#line 170 "granularity.m"
                transform_hlds__granularity__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 170 "granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 1) = ((MR_Box) (transform_hlds__granularity__Goals_125));
#line 170 "granularity.m"
              }
#line 167 "granularity.m"
            }
#line 161 "granularity.m"
            break;
#line 161 "granularity.m"
          case (MR_Integer) 4:
#line 172 "granularity.m"
            {
#line 172 "granularity.m"
              MR_Word transform_hlds__granularity__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 1)));
#line 172 "granularity.m"
              MR_Word transform_hlds__granularity__CanFail_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 2)));
#line 172 "granularity.m"
              MR_Word transform_hlds__granularity__Cases0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 3)));
#line 172 "granularity.m"
              MR_Word transform_hlds__granularity__Cases_38;

#line 173 "granularity.m"
              {
#line 173 "granularity.m"
                transform_hlds__granularity__runtime_granularity_test_in_cases_6_p_0(transform_hlds__granularity__Cases0_37, &transform_hlds__granularity__Cases_38, transform_hlds__granularity__STATE_VARIABLE_Changed_0_71, transform_hlds__granularity__STATE_VARIABLE_Changed_72, transform_hlds__granularity__SCC_10, transform_hlds__granularity__ModuleInfo_11);
              }
#line 175 "granularity.m"
              {
#line 175 "granularity.m"
                transform_hlds__granularity__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 175 "granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 175 "granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 1) = ((MR_Box) (transform_hlds__granularity__Var_35));
#line 175 "granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__granularity__CanFail_36));
#line 175 "granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 3) = ((MR_Box) (transform_hlds__granularity__Cases_38));
#line 175 "granularity.m"
              }
#line 172 "granularity.m"
            }
#line 161 "granularity.m"
            break;
#line 161 "granularity.m"
          case (MR_Integer) 5:
#line 191 "granularity.m"
            {
#line 191 "granularity.m"
              MR_Word transform_hlds__granularity__Reason_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 1)));
#line 191 "granularity.m"
              MR_Word transform_hlds__granularity__SubGoal0_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 2)));
#line 193 "granularity.m"
              MR_Word transform_hlds__granularity__FGT_46;
#line 193 "granularity.m"
              MR_Word transform_hlds__granularity__V_45_45;

#line 193 "granularity.m"
              transform_hlds__granularity__succeeded = ((((MR_tag((MR_Word) transform_hlds__granularity__Reason_131)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__Reason_131, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 193 "granularity.m"
              if (transform_hlds__granularity__succeeded)
#line 193 "granularity.m"
                {
#line 193 "granularity.m"
                  transform_hlds__granularity__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__Reason_131, (MR_Integer) 1)));
#line 193 "granularity.m"
                  transform_hlds__granularity__FGT_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__Reason_131, (MR_Integer) 2)));
#line 195 "granularity.m"
#line 195 "granularity.m"
                  switch (transform_hlds__granularity__FGT_46) {
#line 195 "granularity.m"
                    default:
#line 195 "granularity.m"
                      transform_hlds__granularity__succeeded = MR_FALSE;
#line 195 "granularity.m"
                      break;
#line 195 "granularity.m"
                    case (MR_Integer) 1:
#line 194 "granularity.m"
                      transform_hlds__granularity__succeeded = MR_TRUE;
#line 195 "granularity.m"
                      break;
#line 195 "granularity.m"
                    case (MR_Integer) 2:
#line 195 "granularity.m"
                      transform_hlds__granularity__succeeded = MR_TRUE;
#line 195 "granularity.m"
                      break;
#line 195 "granularity.m"
                  }
#line 193 "granularity.m"
                }
#line 199 "granularity.m"
              if (transform_hlds__granularity__succeeded)
#line 198 "granularity.m"
                {
#line 198 "granularity.m"
                  transform_hlds__granularity__GoalExpr_20 = transform_hlds__granularity__GoalExpr0_12;
#line 198 "granularity.m"
                  *transform_hlds__granularity__STATE_VARIABLE_Changed_72 = transform_hlds__granularity__STATE_VARIABLE_Changed_0_71;
#line 198 "granularity.m"
                }
#line 199 "granularity.m"
              else
#line 201 "granularity.m"
                {
#line 201 "granularity.m"
                  MR_Word transform_hlds__granularity__SubGoal_129;

#line 200 "granularity.m"
                  {
#line 200 "granularity.m"
                    transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(transform_hlds__granularity__SubGoal0_132, &transform_hlds__granularity__SubGoal_129, transform_hlds__granularity__STATE_VARIABLE_Changed_0_71, transform_hlds__granularity__STATE_VARIABLE_Changed_72, transform_hlds__granularity__SCC_10, transform_hlds__granularity__ModuleInfo_11);
                  }
#line 202 "granularity.m"
                  {
#line 202 "granularity.m"
                    transform_hlds__granularity__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 202 "granularity.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 202 "granularity.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 1) = ((MR_Box) (transform_hlds__granularity__Reason_131));
#line 202 "granularity.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__granularity__SubGoal_129));
#line 202 "granularity.m"
                  }
#line 201 "granularity.m"
                }
#line 191 "granularity.m"
            }
#line 161 "granularity.m"
            break;
#line 161 "granularity.m"
          case (MR_Integer) 6:
#line 177 "granularity.m"
            {
#line 177 "granularity.m"
              MR_Word transform_hlds__granularity__Vars_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 1)));
#line 177 "granularity.m"
              MR_Word transform_hlds__granularity__Cond0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 2)));
#line 177 "granularity.m"
              MR_Word transform_hlds__granularity__Then0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 3)));
#line 177 "granularity.m"
              MR_Word transform_hlds__granularity__Else0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr0_12, (MR_Integer) 4)));
#line 177 "granularity.m"
              MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_78_78;
#line 177 "granularity.m"
              MR_Word transform_hlds__granularity__STATE_VARIABLE_Changed_79_79;
#line 177 "granularity.m"
              MR_Word transform_hlds__granularity__Cond_126;
#line 177 "granularity.m"
              MR_Word transform_hlds__granularity__Then_127;
#line 177 "granularity.m"
              MR_Word transform_hlds__granularity__Else_128;

#line 178 "granularity.m"
              {
#line 178 "granularity.m"
                transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(transform_hlds__granularity__Cond0_40, &transform_hlds__granularity__Cond_126, transform_hlds__granularity__STATE_VARIABLE_Changed_0_71, &transform_hlds__granularity__STATE_VARIABLE_Changed_78_78, transform_hlds__granularity__SCC_10, transform_hlds__granularity__ModuleInfo_11);
              }
#line 180 "granularity.m"
              {
#line 180 "granularity.m"
                transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(transform_hlds__granularity__Then0_41, &transform_hlds__granularity__Then_127, transform_hlds__granularity__STATE_VARIABLE_Changed_78_78, &transform_hlds__granularity__STATE_VARIABLE_Changed_79_79, transform_hlds__granularity__SCC_10, transform_hlds__granularity__ModuleInfo_11);
              }
#line 182 "granularity.m"
              {
#line 182 "granularity.m"
                transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(transform_hlds__granularity__Else0_42, &transform_hlds__granularity__Else_128, transform_hlds__granularity__STATE_VARIABLE_Changed_79_79, transform_hlds__granularity__STATE_VARIABLE_Changed_72, transform_hlds__granularity__SCC_10, transform_hlds__granularity__ModuleInfo_11);
              }
#line 184 "granularity.m"
              {
#line 184 "granularity.m"
                transform_hlds__granularity__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 184 "granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 184 "granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 1) = ((MR_Box) (transform_hlds__granularity__Vars_39));
#line 184 "granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__granularity__Cond_126));
#line 184 "granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 3) = ((MR_Box) (transform_hlds__granularity__Then_127));
#line 184 "granularity.m"
                MR_hl_field(MR_mktag(3), transform_hlds__granularity__GoalExpr_20, 4) = ((MR_Box) (transform_hlds__granularity__Else_128));
#line 184 "granularity.m"
              }
#line 177 "granularity.m"
            }
#line 161 "granularity.m"
            break;
#line 161 "granularity.m"
          case (MR_Integer) 7:
#line 212 "granularity.m"
            {
#line 213 "granularity.m"
              {
#line 213 "granularity.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.granularity", (MR_String) "predicate \140transform_hlds.granularity.runtime_granularity_test_in_goal\'/6", (MR_String) "shorthand");
#line 213 "granularity.m"
                return;
              }
#line 212 "granularity.m"
            }
#line 161 "granularity.m"
            break;
#line 161 "granularity.m"
        }
#line 161 "granularity.m"
        break;
#line 161 "granularity.m"
    }
#line 215 "granularity.m"
    {
#line 215 "granularity.m"
      MR_Word base;
#line 215 "granularity.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 215 "granularity.m"
      *transform_hlds__granularity__Goal_8 = base;
#line 215 "granularity.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__granularity__GoalExpr_20));
#line 215 "granularity.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__granularity__GoalInfo_13));
#line 215 "granularity.m"
    }
#line 101 "granularity.m"
  }
#line 98 "granularity.m"
}

#line 66 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_proc_4_p_0(
#line 66 "granularity.m"
  MR_Word transform_hlds__granularity__SCC_5,
#line 66 "granularity.m"
  MR_Word transform_hlds__granularity__HeadVar__2_2,
#line 66 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_22,
#line 66 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_23)
#line 66 "granularity.m"
{
#line 69 "granularity.m"
  {
#line 69 "granularity.m"
    MR_bool transform_hlds__granularity__succeeded;
#line 69 "granularity.m"
    MR_Word transform_hlds__granularity__TypeCtorInfo_27_27;
#line 69 "granularity.m"
    MR_Word transform_hlds__granularity__TypeCtorInfo_28_28;
#line 69 "granularity.m"
    MR_Word transform_hlds__granularity__TypeCtorInfo_30_30;
#line 69 "granularity.m"
    MR_Word transform_hlds__granularity__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__granularity__HeadVar__2_2, (MR_Integer) 0)));
#line 69 "granularity.m"
    MR_Integer transform_hlds__granularity__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__granularity__HeadVar__2_2, (MR_Integer) 1)));
#line 69 "granularity.m"
    MR_Word transform_hlds__granularity__PredTable0_9;
#line 69 "granularity.m"
    MR_Word transform_hlds__granularity__PredInfo0_10;
#line 69 "granularity.m"
    MR_Word transform_hlds__granularity__ProcTable0_11;
#line 69 "granularity.m"
    MR_Word transform_hlds__granularity__ProcInfo0_12;
#line 69 "granularity.m"
    MR_Word transform_hlds__granularity__HasParallelConj_13;
#line 71 "granularity.m"
    MR_Box transform_hlds__granularity__conv0_PredInfo0_10;
#line 73 "granularity.m"
    MR_Box transform_hlds__granularity__conv1_ProcInfo0_12;

#line 70 "granularity.m"
    {
#line 70 "granularity.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_22, &transform_hlds__granularity__PredTable0_9);
    }
#line 1238 "transform_hlds.granularity.c"
    transform_hlds__granularity__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1240 "transform_hlds.granularity.c"
    transform_hlds__granularity__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 71 "granularity.m"
    {
#line 71 "granularity.m"
      mercury__map__lookup_3_p_0(transform_hlds__granularity__TypeCtorInfo_27_27, transform_hlds__granularity__TypeCtorInfo_28_28, transform_hlds__granularity__PredTable0_9, ((MR_Box) (transform_hlds__granularity__PredId_6)), &transform_hlds__granularity__conv0_PredInfo0_10);
    }
#line 71 "granularity.m"
    transform_hlds__granularity__PredInfo0_10 = ((MR_Word) transform_hlds__granularity__conv0_PredInfo0_10);
#line 72 "granularity.m"
    {
#line 72 "granularity.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__granularity__PredInfo0_10, &transform_hlds__granularity__ProcTable0_11);
    }
#line 1254 "transform_hlds.granularity.c"
    transform_hlds__granularity__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 73 "granularity.m"
    {
#line 73 "granularity.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__granularity__TypeCtorInfo_30_30, transform_hlds__granularity__ProcTable0_11, transform_hlds__granularity__ProcId_7, &transform_hlds__granularity__conv1_ProcInfo0_12);
    }
#line 73 "granularity.m"
    transform_hlds__granularity__ProcInfo0_12 = ((MR_Word) transform_hlds__granularity__conv1_ProcInfo0_12);
#line 74 "granularity.m"
    {
#line 74 "granularity.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__granularity__ProcInfo0_12, &transform_hlds__granularity__HasParallelConj_13);
    }
#line 92 "granularity.m"
#line 92 "granularity.m"
    switch (transform_hlds__granularity__HasParallelConj_13) {
#line 92 "granularity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 92 "granularity.m"
      case (MR_Integer) 1:
#line 93 "granularity.m"
        *transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_23 = transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_22;
#line 92 "granularity.m"
        break;
#line 92 "granularity.m"
      case (MR_Integer) 0:
#line 76 "granularity.m"
        {
#line 76 "granularity.m"
          MR_Word transform_hlds__granularity__Goal0_14;
#line 76 "granularity.m"
          MR_Word transform_hlds__granularity__Goal_15;
#line 76 "granularity.m"
          MR_Word transform_hlds__granularity__Changed_16;

#line 77 "granularity.m"
          {
#line 77 "granularity.m"
            hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__granularity__ProcInfo0_12, &transform_hlds__granularity__Goal0_14);
          }
#line 78 "granularity.m"
          {
#line 78 "granularity.m"
            transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(transform_hlds__granularity__Goal0_14, &transform_hlds__granularity__Goal_15, (MR_Integer) 0, &transform_hlds__granularity__Changed_16, transform_hlds__granularity__SCC_5, transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_22);
          }
#line 82 "granularity.m"
#line 82 "granularity.m"
          switch (transform_hlds__granularity__Changed_16) {
#line 82 "granularity.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 82 "granularity.m"
            case (MR_Integer) 0:
#line 81 "granularity.m"
              *transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_23 = transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_22;
#line 82 "granularity.m"
              break;
#line 82 "granularity.m"
            case (MR_Integer) 1:
#line 83 "granularity.m"
              {
#line 83 "granularity.m"
                MR_Word transform_hlds__granularity__ProcInfo1_17;
#line 83 "granularity.m"
                MR_Word transform_hlds__granularity__ProcInfo_18;
#line 83 "granularity.m"
                MR_Word transform_hlds__granularity__ProcTable_19;
#line 83 "granularity.m"
                MR_Word transform_hlds__granularity__PredInfo_20;
#line 83 "granularity.m"
                MR_Word transform_hlds__granularity__PredTable_21;

#line 84 "granularity.m"
                {
#line 84 "granularity.m"
                  hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__granularity__Goal_15, transform_hlds__granularity__ProcInfo0_12, &transform_hlds__granularity__ProcInfo1_17);
                }
#line 85 "granularity.m"
                {
#line 85 "granularity.m"
                  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__granularity__ProcInfo1_17, &transform_hlds__granularity__ProcInfo_18);
                }
#line 87 "granularity.m"
                {
#line 87 "granularity.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__granularity__TypeCtorInfo_30_30, transform_hlds__granularity__ProcId_7, ((MR_Box) (transform_hlds__granularity__ProcInfo_18)), transform_hlds__granularity__ProcTable0_11, &transform_hlds__granularity__ProcTable_19);
                }
#line 88 "granularity.m"
                {
#line 88 "granularity.m"
                  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__granularity__ProcTable_19, transform_hlds__granularity__PredInfo0_10, &transform_hlds__granularity__PredInfo_20);
                }
#line 89 "granularity.m"
                {
#line 89 "granularity.m"
                  mercury__map__det_update_4_p_0(transform_hlds__granularity__TypeCtorInfo_27_27, transform_hlds__granularity__TypeCtorInfo_28_28, ((MR_Box) (transform_hlds__granularity__PredId_6)), ((MR_Box) (transform_hlds__granularity__PredInfo_20)), transform_hlds__granularity__PredTable0_9, &transform_hlds__granularity__PredTable_21);
                }
#line 90 "granularity.m"
                {
#line 90 "granularity.m"
                  hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__granularity__PredTable_21, transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_23);
#line 90 "granularity.m"
                  return;
                }
#line 83 "granularity.m"
              }
#line 82 "granularity.m"
              break;
#line 82 "granularity.m"
          }
#line 76 "granularity.m"
        }
#line 92 "granularity.m"
        break;
#line 92 "granularity.m"
    }
#line 69 "granularity.m"
  }
#line 66 "granularity.m"
}

#line 64 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0_1(
#line 64 "granularity.m"
  MR_Box transform_hlds__granularity__closure_arg,
#line 64 "granularity.m"
  MR_Box transform_hlds__granularity__wrapper_arg_1,
#line 64 "granularity.m"
  MR_Box transform_hlds__granularity__wrapper_arg_2,
#line 64 "granularity.m"
  MR_Box * transform_hlds__granularity__wrapper_arg_3)
#line 64 "granularity.m"
{
#line 64 "granularity.m"
  {
#line 64 "granularity.m"
    MR_Box transform_hlds__granularity__closure = transform_hlds__granularity__closure_arg;
#line 64 "granularity.m"
    MR_Word transform_hlds__granularity__conv0_STATE_VARIABLE_ModuleInfo_23;

#line 64 "granularity.m"
    {
#line 64 "granularity.m"
      transform_hlds__granularity__runtime_granularity_test_in_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__granularity__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__granularity__wrapper_arg_1), ((MR_Word) transform_hlds__granularity__wrapper_arg_2), &transform_hlds__granularity__conv0_STATE_VARIABLE_ModuleInfo_23);
    }
#line 64 "granularity.m"
    *transform_hlds__granularity__wrapper_arg_3 = ((MR_Box) (transform_hlds__granularity__conv0_STATE_VARIABLE_ModuleInfo_23));
#line 64 "granularity.m"
  }
#line 64 "granularity.m"
}

#line 60 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0(
#line 60 "granularity.m"
  MR_Word transform_hlds__granularity__SCC_4,
#line 60 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_6,
#line 60 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_7)
#line 60 "granularity.m"
{
#line 63 "granularity.m"
  {
#line 63 "granularity.m"
    MR_bool transform_hlds__granularity__succeeded;
#line 63 "granularity.m"
    MR_Word transform_hlds__granularity__V_8_8;
#line 64 "granularity.m"
    MR_Box transform_hlds__granularity__conv1_STATE_VARIABLE_ModuleInfo_7;

#line 64 "granularity.m"
    {
#line 64 "granularity.m"
      transform_hlds__granularity__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 64 "granularity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__granularity__V_8_8, 0) = ((MR_Box) (&transform_hlds__granularity_scalar_common_4[0]));
#line 64 "granularity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__granularity__V_8_8, 1) = ((MR_Box) (transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0_1));
#line 64 "granularity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__granularity__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 64 "granularity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__granularity__V_8_8, 3) = ((MR_Box) (transform_hlds__granularity__SCC_4));
#line 64 "granularity.m"
    }
#line 64 "granularity.m"
    {
#line 64 "granularity.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__granularity__V_8_8, transform_hlds__granularity__SCC_4, ((MR_Box) (transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_6)), &transform_hlds__granularity__conv1_STATE_VARIABLE_ModuleInfo_7);
    }
#line 64 "granularity.m"
    *transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_7 = ((MR_Word) transform_hlds__granularity__conv1_STATE_VARIABLE_ModuleInfo_7);
#line 63 "granularity.m"
  }
#line 60 "granularity.m"
}

#line 58 "granularity.m"
static void MR_CALL 
transform_hlds__granularity__control_granularity_2_p_0_1(
#line 58 "granularity.m"
  MR_Box transform_hlds__granularity__closure_arg,
#line 58 "granularity.m"
  MR_Box transform_hlds__granularity__wrapper_arg_1,
#line 58 "granularity.m"
  MR_Box transform_hlds__granularity__wrapper_arg_2,
#line 58 "granularity.m"
  MR_Box * transform_hlds__granularity__wrapper_arg_3)
#line 58 "granularity.m"
{
#line 58 "granularity.m"
  {
#line 58 "granularity.m"
    MR_Box transform_hlds__granularity__closure = transform_hlds__granularity__closure_arg;
#line 58 "granularity.m"
    MR_Word transform_hlds__granularity__conv0_STATE_VARIABLE_ModuleInfo_7;

#line 58 "granularity.m"
    {
#line 58 "granularity.m"
      transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0(((MR_Word) transform_hlds__granularity__wrapper_arg_1), ((MR_Word) transform_hlds__granularity__wrapper_arg_2), &transform_hlds__granularity__conv0_STATE_VARIABLE_ModuleInfo_7);
    }
#line 58 "granularity.m"
    *transform_hlds__granularity__wrapper_arg_3 = ((MR_Box) (transform_hlds__granularity__conv0_STATE_VARIABLE_ModuleInfo_7));
#line 58 "granularity.m"
  }
#line 58 "granularity.m"
}

#line 26 "granularity.m"
void MR_CALL 
transform_hlds__granularity__control_granularity_2_p_0(
#line 26 "granularity.m"
  MR_Word transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_6,
#line 26 "granularity.m"
  MR_Word * transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_7)
#line 26 "granularity.m"
{
#line 55 "granularity.m"
  {
#line 55 "granularity.m"
    MR_bool transform_hlds__granularity__succeeded;
#line 55 "granularity.m"
    MR_Word transform_hlds__granularity__DepInfo_4;
#line 55 "granularity.m"
    MR_Word transform_hlds__granularity__SCCs_5;
#line 55 "granularity.m"
    MR_Word transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_8_8;
#line 58 "granularity.m"
    MR_Box transform_hlds__granularity__conv1_STATE_VARIABLE_ModuleInfo_7;

#line 56 "granularity.m"
    {
#line 56 "granularity.m"
      transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_p_0(transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_0_6, &transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_8_8, &transform_hlds__granularity__DepInfo_4);
    }
#line 57 "granularity.m"
    {
#line 57 "granularity.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__granularity__DepInfo_4, &transform_hlds__granularity__SCCs_5);
    }
#line 58 "granularity.m"
    {
#line 58 "granularity.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__granularity_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__granularity_scalar_common_3[0], transform_hlds__granularity__SCCs_5, ((MR_Box) (transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_8_8)), &transform_hlds__granularity__conv1_STATE_VARIABLE_ModuleInfo_7);
    }
#line 58 "granularity.m"
    *transform_hlds__granularity__STATE_VARIABLE_ModuleInfo_7 = ((MR_Word) transform_hlds__granularity__conv1_STATE_VARIABLE_ModuleInfo_7);
#line 55 "granularity.m"
  }
#line 26 "granularity.m"
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
