/*
** Automatically generated from `mark_static_terms.m'
** by the Mercury compiler,
** version rotd-2023-05-02
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module hlds.mark_static_terms.
// :- implementation.

/*
INIT mercury__hlds__mark_static_terms__init
ENDINIT
*/

#include "hlds.mark_static_terms.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_TypeInfo_Struct1 hlds__mark_static_terms__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__mark_static_terms__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__mark_static_terms__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__mark_static_terms__set_tree234__ti_set_tree234_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_bool MR_CALL 
hlds__mark_static_terms__IntroducedFrom__pred__unification_mark_static_terms__195__1_2_p_0(
  MR_Word STATE_VARIABLE_StaticVars_0_29,
  MR_Word HeadVar__2_33);

static void MR_CALL 
hlds__mark_static_terms____Compare____static_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_static_terms____Unify____static_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__mark_static_terms__mark_static_terms_3_p_0(
  MR_Word _ModuleInfo_4,
  MR_Word STATE_VARIABLE_Proc_0_10,
  MR_Word * STATE_VARIABLE_Proc_11);

static void MR_CALL 
hlds__mark_static_terms__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word STATE_VARIABLE_Proc_0_10,
  MR_Word * STATE_VARIABLE_Proc_11);

static void MR_CALL 
hlds__mark_static_terms__cases_mark_static_terms_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__mark_static_terms__disj_mark_static_terms_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SI0_3);

static MR_bool MR_CALL 
hlds__mark_static_terms__goal_mark_static_terms_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__mark_static_terms__goal_mark_static_terms_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__mark_static_terms__goal_mark_static_terms_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_SI_0_59,
  MR_Word * STATE_VARIABLE_SI_60);

static void MR_CALL 
hlds__mark_static_terms__maybe_mark_static_terms_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_static_terms____Unify____static_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_static_terms____Compare____static_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_2[2][1];

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_3[1][6];

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_4[2][3];

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_5[1][7];

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_6[1][5];




static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&hlds__mark_static_terms_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_2[2][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__mark_static_terms_scalar_common_4[0]))
  },
};

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_3[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_4[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__mark_static_terms_scalar_common_3[0])),
    ((MR_Box) (hlds__mark_static_terms__maybe_mark_static_terms_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__mark_static_terms_scalar_common_5[0])),
    ((MR_Box) (hlds__mark_static_terms__goal_mark_static_terms_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__mark_static_terms__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__mark_static_terms__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_6[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__mark_static_terms__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__mark_static_terms__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_TypeInfo_Struct1 hlds__mark_static_terms__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__mark_static_terms__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) (&hlds__mark_static_terms__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__mark_static_terms__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__mark_static_terms__set_tree234__ti_set_tree234_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) (&hlds__mark_static_terms__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__mark_static_terms__hlds__mark_static_terms__type_ctor_info_static_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__mark_static_terms____Unify____static_info_0_0_10001)),
  ((MR_Box) (hlds__mark_static_terms____Compare____static_info_0_0_10001)),
  (MR_String) "hlds.mark_static_terms",
  (MR_String) "static_info",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__mark_static_terms__set_tree234__ti_set_tree234_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
hlds__mark_static_terms__IntroducedFrom__pred__unification_mark_static_terms__195__1_2_p_0(
  MR_Word STATE_VARIABLE_StaticVars_0_29,
  MR_Word HeadVar__2_33)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__mark_static_terms_scalar_common_1[0]), STATE_VARIABLE_StaticVars_0_29, ((MR_Box) (HeadVar__2_33)));
  return succeeded;
}

static void MR_CALL 
hlds__mark_static_terms____Compare____static_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__mark_static_terms_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
hlds__mark_static_terms____Unify____static_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__mark_static_terms_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
hlds__mark_static_terms__mark_static_terms_3_p_0(
  MR_Word _ModuleInfo_4,
  MR_Word STATE_VARIABLE_Proc_0_10,
  MR_Word * STATE_VARIABLE_Proc_11)
{
  hlds__mark_static_terms__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_91_49_93_95_48_3_p_0(STATE_VARIABLE_Proc_0_10, STATE_VARIABLE_Proc_11);
}

static void MR_CALL 
hlds__mark_static_terms__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word STATE_VARIABLE_Proc_0_10,
  MR_Word * STATE_VARIABLE_Proc_11)
{
  MR_Word Goal0_6;
  MR_Word StaticInfo0_7;
  MR_Word Goal_8;
  MR_Word _StaticInfo_9;

  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_Proc_0_10, &Goal0_6);
  StaticInfo0_7 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__mark_static_terms_scalar_common_1[0]));
  hlds__mark_static_terms__goal_mark_static_terms_4_p_0(Goal0_6, &Goal_8, StaticInfo0_7, &_StaticInfo_9);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_8, STATE_VARIABLE_Proc_0_10, STATE_VARIABLE_Proc_11);
}

static void MR_CALL 
hlds__mark_static_terms__cases_mark_static_terms_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Case0_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_7;
    MR_Word Cases_8;
    MR_Word MainConsId_10 = ((MR_Word) ((MR_hl_field(0, Case0_5, (MR_Integer) 0))));
    MR_Word OtherConsIds_11 = ((MR_Word) ((MR_hl_field(0, Case0_5, (MR_Integer) 1))));
    MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(0, Case0_5, (MR_Integer) 2))));
    MR_Word Goal_13;
    MR_Word _SI_14;

    hlds__mark_static_terms__goal_mark_static_terms_4_p_0(Goal0_12, &Goal_13, HeadVar__3_3, &_SI_14);
    {
      Case_7 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_7, 0) = ((MR_Box) (MainConsId_10));
      MR_hl_field(0, Case_7, 1) = ((MR_Box) (OtherConsIds_11));
      MR_hl_field(0, Case_7, 2) = ((MR_Box) (Goal_13));
    }
    hlds__mark_static_terms__cases_mark_static_terms_3_p_0(Cases0_6, &Cases_8, HeadVar__3_3);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_7));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_8));
    }
  }
}

static void MR_CALL 
hlds__mark_static_terms__disj_mark_static_terms_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SI0_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_7;
    MR_Word Goals_8;
    MR_Word _SI_10;

    hlds__mark_static_terms__goal_mark_static_terms_4_p_0(Goal0_5, &Goal_7, SI0_3, &_SI_10);
    hlds__mark_static_terms__disj_mark_static_terms_3_p_0(Goals0_6, &Goals_8, SI0_3);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_7));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_8));
    }
  }
}

static MR_bool MR_CALL 
hlds__mark_static_terms__goal_mark_static_terms_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__mark_static_terms__IntroducedFrom__pred__unification_mark_static_terms__195__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__mark_static_terms__goal_mark_static_terms_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_6;
  MR_Word conv0_STATE_VARIABLE_SI_60;

  hlds__mark_static_terms__goal_mark_static_terms_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Goal_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_SI_60);
  *wrapper_arg_2 = ((MR_Box) (conv1_Goal_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_SI_60));
}

static void MR_CALL 
hlds__mark_static_terms__goal_mark_static_terms_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_SI_0_59,
  MR_Word * STATE_VARIABLE_SI_60)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 0))));
  MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));
  MR_Word GoalExpr_10;

  switch (MR_tag((MR_Word) GoalExpr0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_18 = (MR_Word) ((MR_Word) (GoalExpr0_8));
        MR_Word SubGoal_19;
        MR_Word _SI_20;

        hlds__mark_static_terms__goal_mark_static_terms_4_p_0(SubGoal0_18, &SubGoal_19, STATE_VARIABLE_SI_0_59, &_SI_20);
        GoalExpr_10 = (MR_Word) ((MR_Word) (SubGoal_19));
        *STATE_VARIABLE_SI_60 = STATE_VARIABLE_SI_0_59;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS_52 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 0))));
        MR_Word RHS_53 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 1))));
        MR_Word Mode_54 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 2))));
        MR_Word Unification0_55 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 3))));
        MR_Word Context_56 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 4))));
        MR_Word Unification_57;

        switch (MR_tag((MR_Word) Unification0_55)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, Unification0_55, (MR_Integer) 0))));
              MR_Word ConsId_78 = ((MR_Word) ((MR_hl_field(0, Unification0_55, (MR_Integer) 1))));
              MR_Word ArgVars_79 = ((MR_Word) ((MR_hl_field(0, Unification0_55, (MR_Integer) 2))));
              MR_Word ArgModes_80 = ((MR_Word) ((MR_hl_field(0, Unification0_55, (MR_Integer) 3))));
              MR_Word HowToConstruct0_81 = ((MR_Word) ((MR_hl_field(0, Unification0_55, (MR_Integer) 4))));
              MR_Word Unique_82 = ((MR_Unsigned) ((MR_hl_field(0, Unification0_55, (MR_Integer) 5))) & (MR_Integer) 1);
              MR_Word SubInfo_83 = ((MR_Word) ((MR_hl_field(0, Unification0_55, (MR_Integer) 6))));
              MR_Word Var_87;

              {
                Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_87, 0) = ((MR_Box) (&hlds__mark_static_terms_scalar_common_6[0]));
                MR_hl_field(0, Var_87, 1) = ((MR_Box) (hlds__mark_static_terms__goal_mark_static_terms_4_p_0_2));
                MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_87, 3) = ((MR_Box) (STATE_VARIABLE_SI_0_59));
              }
              succeeded = mercury__list__all_true_2_p_0((MR_Word) (&hlds__mark_static_terms_scalar_common_1[0]), Var_87, ArgVars_79);
              if (succeeded)
              {
                MR_Word HowToConstruct_84 = (MR_Word) (MR_mkword(2, &hlds__mark_static_terms_scalar_common_2[0]));

                mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__mark_static_terms_scalar_common_1[0]), ((MR_Box) (Var_77)), STATE_VARIABLE_SI_0_59, STATE_VARIABLE_SI_60);
                succeeded = hlds__hlds_goal____Unify____how_to_construct_0_0(HowToConstruct_84, HowToConstruct0_81);
                if (succeeded)
                  Unification_57 = Unification0_55;
                else
                  {
                    Unification_57 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Unification_57, 0) = ((MR_Box) (Var_77));
                    MR_hl_field(0, Unification_57, 1) = ((MR_Box) (ConsId_78));
                    MR_hl_field(0, Unification_57, 2) = ((MR_Box) (ArgVars_79));
                    MR_hl_field(0, Unification_57, 3) = ((MR_Box) (ArgModes_80));
                    MR_hl_field(0, Unification_57, 4) = ((MR_Box) (HowToConstruct_84));
                    MR_hl_field(0, Unification_57, 5) = (MR_Box) ((MR_Unsigned) (Unique_82));
                    MR_hl_field(0, Unification_57, 6) = ((MR_Box) (SubInfo_83));
                  }
              }
              else
              {
                Unification_57 = Unification0_55;
                *STATE_VARIABLE_SI_60 = STATE_VARIABLE_SI_0_59;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              Unification_57 = Unification0_55;
              *STATE_VARIABLE_SI_60 = STATE_VARIABLE_SI_0_59;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TargetVar_85 = ((MR_Word) ((MR_hl_field(2, Unification0_55, (MR_Integer) 0))));
              MR_Word SourceVar_86 = ((MR_Word) ((MR_hl_field(2, Unification0_55, (MR_Integer) 1))));

              Unification_57 = Unification0_55;
              succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__mark_static_terms_scalar_common_1[0]), STATE_VARIABLE_SI_0_59, ((MR_Box) (SourceVar_86)));
              if (succeeded)
                mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__mark_static_terms_scalar_common_1[0]), ((MR_Box) (TargetVar_85)), STATE_VARIABLE_SI_0_59, STATE_VARIABLE_SI_60);
              else
                *STATE_VARIABLE_SI_60 = STATE_VARIABLE_SI_0_59;
            }
            break;
          case (MR_Integer) 3:
            {
              Unification_57 = Unification0_55;
              *STATE_VARIABLE_SI_60 = STATE_VARIABLE_SI_0_59;
            }
            break;
        }
        {
          GoalExpr_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, GoalExpr_10, 0) = ((MR_Box) (LHS_52));
          MR_hl_field(1, GoalExpr_10, 1) = ((MR_Box) (RHS_53));
          MR_hl_field(1, GoalExpr_10, 2) = ((MR_Box) (Mode_54));
          MR_hl_field(1, GoalExpr_10, 3) = ((MR_Box) (Unification_57));
          MR_hl_field(1, GoalExpr_10, 4) = ((MR_Box) (Context_56));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        GoalExpr_10 = GoalExpr0_8;
        *STATE_VARIABLE_SI_60 = STATE_VARIABLE_SI_0_59;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            GoalExpr_10 = GoalExpr0_8;
            *STATE_VARIABLE_SI_60 = STATE_VARIABLE_SI_0_59;
          }
          break;
        case (MR_Integer) 1:
          {
            GoalExpr_10 = GoalExpr0_8;
            *STATE_VARIABLE_SI_60 = STATE_VARIABLE_SI_0_59;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_11 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word Goals_13;
            MR_Box conv2_STATE_VARIABLE_SI_60;

            mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__mark_static_terms_scalar_common_1[1]), (MR_Word) (&hlds__mark_static_terms_scalar_common_4[1]), Goals0_12, &Goals_13, ((MR_Box) (STATE_VARIABLE_SI_0_59)), &conv2_STATE_VARIABLE_SI_60);
            *STATE_VARIABLE_SI_60 = ((MR_Word) (conv2_STATE_VARIABLE_SI_60));
            {
              GoalExpr_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_10, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_10, 1) = (MR_Box) ((MR_Unsigned) (ConjType_11));
              MR_hl_field(3, GoalExpr_10, 2) = ((MR_Box) (Goals_13));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word Goals_69;

            hlds__mark_static_terms__disj_mark_static_terms_3_p_0(Goals0_68, &Goals_69, STATE_VARIABLE_SI_0_59);
            {
              GoalExpr_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_10, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_10, 1) = ((MR_Box) (Goals_69));
            }
            *STATE_VARIABLE_SI_60 = STATE_VARIABLE_SI_0_59;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word CanFail_15 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
            MR_Word Cases_17;

            hlds__mark_static_terms__cases_mark_static_terms_3_p_0(Cases0_16, &Cases_17, STATE_VARIABLE_SI_0_59);
            {
              GoalExpr_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_10, 1) = ((MR_Box) (Var_14));
              MR_hl_field(3, GoalExpr_10, 2) = (MR_Box) ((MR_Unsigned) (CanFail_15));
              MR_hl_field(3, GoalExpr_10, 3) = ((MR_Box) (Cases_17));
            }
            *STATE_VARIABLE_SI_60 = STATE_VARIABLE_SI_0_59;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word SubGoal0_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word TermVar_22;
            MR_Word Var_62;

            succeeded = ((((MR_tag((MR_Word) Reason_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_21, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              TermVar_22 = ((MR_Word) ((MR_hl_field(3, Reason_21, (MR_Integer) 1))));
              Var_62 = ((MR_Unsigned) ((MR_hl_field(3, Reason_21, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_62 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__mark_static_terms_scalar_common_1[0]), ((MR_Box) (TermVar_22)), STATE_VARIABLE_SI_0_59, STATE_VARIABLE_SI_60);
              GoalExpr_10 = GoalExpr0_8;
            }
            else
            {
              MR_Word SubGoal_70;

              hlds__mark_static_terms__goal_mark_static_terms_4_p_0(SubGoal0_72, &SubGoal_70, STATE_VARIABLE_SI_0_59, STATE_VARIABLE_SI_60);
              {
                GoalExpr_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_10, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_10, 1) = ((MR_Box) (Reason_21));
                MR_hl_field(3, GoalExpr_10, 2) = ((MR_Box) (SubGoal_70));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word Cond0_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word Then0_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
            MR_Word Else0_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 4))));
            MR_Word Cond_28;
            MR_Word SI_Cond_29;
            MR_Word Then_30;
            MR_Word Else_32;
            MR_Word _SI_Then_31;
            MR_Word _SI_Else_33;

            hlds__mark_static_terms__goal_mark_static_terms_4_p_0(Cond0_24, &Cond_28, STATE_VARIABLE_SI_0_59, &SI_Cond_29);
            hlds__mark_static_terms__goal_mark_static_terms_4_p_0(Then0_25, &Then_30, SI_Cond_29, &_SI_Then_31);
            hlds__mark_static_terms__goal_mark_static_terms_4_p_0(Else0_26, &Else_32, STATE_VARIABLE_SI_0_59, &_SI_Else_33);
            {
              GoalExpr_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_10, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_10, 1) = ((MR_Box) (Vars_23));
              MR_hl_field(3, GoalExpr_10, 2) = ((MR_Box) (Cond_28));
              MR_hl_field(3, GoalExpr_10, 3) = ((MR_Box) (Then_30));
              MR_hl_field(3, GoalExpr_10, 4) = ((MR_Box) (Else_32));
            }
            *STATE_VARIABLE_SI_60 = STATE_VARIABLE_SI_0_59;
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.mark_static_terms.goal_mark_static_terms\'/4", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_9));
  }
}

static void MR_CALL 
hlds__mark_static_terms__maybe_mark_static_terms_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Proc_11;

  hlds__mark_static_terms__mark_static_terms_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Proc_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Proc_11));
}

void MR_CALL 
hlds__mark_static_terms__maybe_mark_static_terms_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  MR_Word Globals_11;
  MR_Word OptTuple_12;
  MR_Word SGCells_13;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_11);
  libs__globals__get_opt_tuple_2_p_0(Globals_11, &OptTuple_12);
  SGCells_13 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_12, (MR_Integer) 1))) >> 13)) & (MR_Integer) 1);
  switch (SGCells_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
      break;
    case (MR_Integer) 0:
      {
        MR_Word ModuleName_14;
        MR_Word ProgressStream_15;

        hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_16, &ModuleName_14);
        libs__globals__get_progress_output_stream_5_p_0(Globals_11, ModuleName_14, &ProgressStream_15);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_15, Verbose_7, (MR_String) "% Marking static ground terms...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_15, Verbose_7);
        hlds__passes_aux__process_valid_nonimported_procs_3_p_0((MR_Word) (&hlds__mark_static_terms_scalar_common_2[1]), STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_15, Verbose_7, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_15, Stats_8);
      }
      break;
  }
}

static MR_bool MR_CALL 
hlds__mark_static_terms____Unify____static_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__mark_static_terms____Unify____static_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__mark_static_terms____Compare____static_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__mark_static_terms____Compare____static_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module hlds.mark_static_terms.
