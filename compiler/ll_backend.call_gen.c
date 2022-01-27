/*
** Automatically generated from `call_gen.m'
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


/* :- module ll_backend.call_gen. */
/* :- implementation. */

/*
INIT mercury__ll_backend__call_gen__init
ENDINIT
*/

#include "ll_backend.call_gen.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
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
#include "counter.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_event.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0;

static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1;

static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_value_ordered_known_call_variant_0[2];

static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_name_ordered_known_call_variant_0[2];

static const MR_Integer ll_backend__call_gen__ll_backend__call_gen__functor_number_map_known_call_variant_0[2];

static MR_bool MR_CALL 
ll_backend__call_gen____Unify____known_call_variant_0_0_10001(
  MR_Box ll_backend__call_gen__wrapper_arg_1,
  MR_Box ll_backend__call_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__call_gen____Compare____known_call_variant_0_0_10001(
  MR_Box * ll_backend__call_gen__wrapper_arg_1,
  MR_Box ll_backend__call_gen__wrapper_arg_2,
  MR_Box ll_backend__call_gen__wrapper_arg_3);

static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_8_p_0(
  MR_Word ll_backend__call_gen__ArgsInfos_9,
  MR_Word ll_backend__call_gen__GoalInfo_10,
  MR_Word ll_backend__call_gen__ReturnInstMap_12,
  MR_Word * ll_backend__call_gen__ReturnLiveLvalues_13,
  MR_Word ll_backend__call_gen__CI_14,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_20,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_21);

static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(
  MR_Word ll_backend__call_gen__GenericCall_14,
  MR_Word ll_backend__call_gen__Args_15,
  MR_Word ll_backend__call_gen__Modes_16,
  MR_Word ll_backend__call_gen__MaybeRegTypes_17,
  MR_Word ll_backend__call_gen__Det_18,
  MR_Word ll_backend__call_gen__GoalInfo_19,
  MR_Word * ll_backend__call_gen__Code_20,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_68,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_69,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_70,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_71);

static void MR_CALL 
ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(
  MR_Word ll_backend__call_gen__HeadVar__1_1,
  MR_Word ll_backend__call_gen__HeadVar__2_2,
  MR_Integer ll_backend__call_gen__HeadVar__3_3,
  MR_Word ll_backend__call_gen__HeadVar__4_4,
  MR_Word * ll_backend__call_gen__HeadVar__5_5);

static void MR_CALL 
ll_backend__call_gen__generate_simple_test_6_p_0(
  MR_Word ll_backend__call_gen__TestExpr_7,
  MR_Word * ll_backend__call_gen__Rval_8,
  MR_Word * ll_backend__call_gen__ArgCode_9,
  MR_Word ll_backend__call_gen__CI_10,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_22,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_23);

static MR_Word MR_CALL 
ll_backend__call_gen__convert_simple_expr_1_f_0(
  MR_Word ll_backend__call_gen__HeadVar__1_1);

static void MR_CALL 
ll_backend__call_gen__rebuild_registers_5_p_0(
  MR_Word ll_backend__call_gen__HeadVar__1_1,
  MR_Word ll_backend__call_gen__Liveness_2,
  MR_Word * ll_backend__call_gen__HeadVar__3_3,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_4,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_5);

static void MR_CALL 
ll_backend__call_gen__find_nonlive_outputs_4_p_0(
  MR_Word ll_backend__call_gen__HeadVar__1_1,
  MR_Word ll_backend__call_gen__Liveness_2,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_4);

static void MR_CALL 
ll_backend__call_gen__kill_dead_input_vars_5_p_0(
  MR_Word ll_backend__call_gen__ArgsInfos_6,
  MR_Word ll_backend__call_gen__GoalInfo_7,
  MR_Word * ll_backend__call_gen__NonLiveOutputs_8,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_13,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_14);

static void MR_CALL 
ll_backend__call_gen__call_comment_4_p_0(
  MR_Word ll_backend__call_gen__CI_5,
  MR_Word ll_backend__call_gen__PredId_6,
  MR_Word ll_backend__call_gen__CodeModel_7,
  MR_String * ll_backend__call_gen__Msg_8);

static void MR_CALL 
ll_backend__call_gen__handle_call_failure_6_p_0(
  MR_Word ll_backend__call_gen__CodeModel_7,
  MR_Word ll_backend__call_gen__GoalInfo_8,
  MR_Word * ll_backend__call_gen__FailHandlingCode_9,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_17,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_18,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_19);

static void MR_CALL 
ll_backend__call_gen__prepare_for_call_8_p_0(
  MR_Word ll_backend__call_gen__CodeModel_9,
  MR_Word ll_backend__call_gen__GoalInfo_10,
  MR_Word * ll_backend__call_gen__CallModel_11,
  MR_Word * ll_backend__call_gen__TraceCode_12,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_17,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_18,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_19,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_20);

static void MR_CALL 
ll_backend__call_gen__generic_call_nonvar_setup_7_p_0(
  MR_Word ll_backend__call_gen__HeadVar__1_1,
  MR_Word ll_backend__call_gen__HoCallVariant_2,
  MR_Word ll_backend__call_gen__InVarsR_3,
  MR_Word ll_backend__call_gen__InVarsF_4,
  MR_Word * ll_backend__call_gen__Code_5,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_6,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_7);

static void MR_CALL 
ll_backend__call_gen__extra_livevals_from_3_p_0(
  MR_Integer ll_backend__call_gen__Reg_4,
  MR_Integer ll_backend__call_gen__FirstInput_5,
  MR_Word * ll_backend__call_gen__ExtraLiveVals_6);

static void MR_CALL 
ll_backend__call_gen__extra_livevals_2_p_0(
  MR_Integer ll_backend__call_gen__FirstInput_3,
  MR_Word * ll_backend__call_gen__ExtraLiveVals_4);

static void MR_CALL 
ll_backend__call_gen__generate_event_attributes_7_p_0(
  MR_Word ll_backend__call_gen__HeadVar__1_1,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_Vars_0_2,
  MR_Word * ll_backend__call_gen__HeadVar__3_3,
  MR_Word * ll_backend__call_gen__HeadVar__4_4,
  MR_Word ll_backend__call_gen__HeadVar__5_5,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_6,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_7);

static void MR_CALL 
ll_backend__call_gen__generate_builtin_9_p_0_1(
  MR_Box ll_backend__call_gen__closure_arg,
  MR_Box ll_backend__call_gen__wrapper_arg_1,
  MR_Box ll_backend__call_gen__wrapper_arg_2,
  MR_Box * ll_backend__call_gen__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__call_gen_scalar_common_1[9][2];

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_2[2][3];

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_4[2][1];




static /* final */ const MR_Box ll_backend__call_gen_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__call_gen_scalar_common_1[5])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__call_gen_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__call_gen_scalar_common_3[0])),
    ((MR_Box) (ll_backend__call_gen__generate_builtin_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0))
  },
};

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[5])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0 = {
  (MR_String) "ho_call_known_num",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1 = {
  (MR_String) "ho_call_unknown",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_value_ordered_known_call_variant_0[2] = {
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0,
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_name_ordered_known_call_variant_0[2] = {
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0,
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1
};

static const MR_Integer ll_backend__call_gen__ll_backend__call_gen__functor_number_map_known_call_variant_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__call_gen__ll_backend__call_gen__type_ctor_info_known_call_variant_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__call_gen____Unify____known_call_variant_0_0_10001)),
  ((MR_Box) (ll_backend__call_gen____Compare____known_call_variant_0_0_10001)),
  (MR_String) "ll_backend.call_gen",
  (MR_String) "known_call_variant",
  {     ll_backend__call_gen__ll_backend__call_gen__enum_name_ordered_known_call_variant_0 },
  {     ll_backend__call_gen__ll_backend__call_gen__enum_value_ordered_known_call_variant_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__call_gen__ll_backend__call_gen__functor_number_map_known_call_variant_0
};

static MR_bool MR_CALL 
ll_backend__call_gen____Unify____known_call_variant_0_0_10001(
  MR_Box ll_backend__call_gen__wrapper_arg_1,
  MR_Box ll_backend__call_gen__wrapper_arg_2)
{
  {
    MR_bool ll_backend__call_gen__succeeded;

    {
      ll_backend__call_gen__succeeded = ll_backend__call_gen____Unify____known_call_variant_0_0(((MR_Word) ll_backend__call_gen__wrapper_arg_1), ((MR_Word) ll_backend__call_gen__wrapper_arg_2));
    }
    return ll_backend__call_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__call_gen____Compare____known_call_variant_0_0_10001(
  MR_Box * ll_backend__call_gen__wrapper_arg_1,
  MR_Box ll_backend__call_gen__wrapper_arg_2,
  MR_Box ll_backend__call_gen__wrapper_arg_3)
{
  {
    MR_Word ll_backend__call_gen__conv0_HeadVar__1_1;

    {
      ll_backend__call_gen____Compare____known_call_variant_0_0(&ll_backend__call_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__call_gen__wrapper_arg_2), ((MR_Word) ll_backend__call_gen__wrapper_arg_3));
    }
    *ll_backend__call_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__call_gen__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_8_p_0(
  MR_Word ll_backend__call_gen__ArgsInfos_9,
  MR_Word ll_backend__call_gen__GoalInfo_10,
  MR_Word ll_backend__call_gen__ReturnInstMap_12,
  MR_Word * ll_backend__call_gen__ReturnLiveLvalues_13,
  MR_Word ll_backend__call_gen__CI_14,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_20,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_21)
{
  {
    MR_bool ll_backend__call_gen__succeeded;
    MR_Word ll_backend__call_gen__InstMapDelta_16;
    MR_Word ll_backend__call_gen__OkToDeleteAny_17;
    MR_Word ll_backend__call_gen__Liveness_18;
    MR_Word ll_backend__call_gen__OutputArgLocs_19;
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_22_22;

    {
      ll_backend__call_gen__InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__call_gen__GoalInfo_10);
    }
    {
      ll_backend__call_gen__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__call_gen__InstMapDelta_16);
    }
    if (ll_backend__call_gen__succeeded)
      ll_backend__call_gen__OkToDeleteAny_17 = (MR_Integer) 0;
    else
      ll_backend__call_gen__OkToDeleteAny_17 = (MR_Integer) 1;
    {
      ll_backend__code_loc_dep__clear_all_registers_3_p_0(ll_backend__call_gen__OkToDeleteAny_17, ll_backend__call_gen__STATE_VARIABLE_CLD_0_20, &ll_backend__call_gen__STATE_VARIABLE_CLD_22_22);
    }
    {
      ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_22_22, &ll_backend__call_gen__Liveness_18);
    }
    {
      ll_backend__call_gen__rebuild_registers_5_p_0(ll_backend__call_gen__ArgsInfos_9, ll_backend__call_gen__Liveness_18, &ll_backend__call_gen__OutputArgLocs_19, ll_backend__call_gen__STATE_VARIABLE_CLD_22_22, ll_backend__call_gen__STATE_VARIABLE_CLD_21);
    }
    {
      ll_backend__code_loc_dep__generate_return_live_lvalues_6_p_0(ll_backend__call_gen__CI_14, *ll_backend__call_gen__STATE_VARIABLE_CLD_21, ll_backend__call_gen__OutputArgLocs_19, ll_backend__call_gen__ReturnInstMap_12, ll_backend__call_gen__OkToDeleteAny_17, ll_backend__call_gen__ReturnLiveLvalues_13);
    }
  }
}

static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(
  MR_Word ll_backend__call_gen__GenericCall_14,
  MR_Word ll_backend__call_gen__Args_15,
  MR_Word ll_backend__call_gen__Modes_16,
  MR_Word ll_backend__call_gen__MaybeRegTypes_17,
  MR_Word ll_backend__call_gen__Det_18,
  MR_Word ll_backend__call_gen__GoalInfo_19,
  MR_Word * ll_backend__call_gen__Code_20,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_68,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_69,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_70,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_71)
{
  {
    MR_bool ll_backend__call_gen__succeeded;
    MR_Word ll_backend__call_gen__TypeInfo_114_114;
    MR_Word ll_backend__call_gen__TypeInfo_115_115;
    MR_Word ll_backend__call_gen__TypeCtorInfo_117_117;
    MR_Word ll_backend__call_gen__ModuleInfo_23;
    MR_Word ll_backend__call_gen__VarTypes_24;
    MR_Word ll_backend__call_gen__Types_25;
    MR_Word ll_backend__call_gen__ArgRegTypes_26;
    MR_Word ll_backend__call_gen__InVarsR_27;
    MR_Word ll_backend__call_gen__InVarsF_28;
    MR_Word ll_backend__call_gen__OutVarsR_29;
    MR_Word ll_backend__call_gen__OutVarsF_30;
    MR_Word ll_backend__call_gen__Globals_31;
    MR_Word ll_backend__call_gen__CodeAddr_32;
    MR_Word ll_backend__call_gen__SpecifierArgInfos_33;
    MR_Integer ll_backend__call_gen__FirstImmInputR_34;
    MR_Word ll_backend__call_gen__HoCallVariant_35;
    MR_Word ll_backend__call_gen__CodeModel_37;
    MR_Integer ll_backend__call_gen__FirstOutputR_38;
    MR_Word ll_backend__call_gen__InVarArgInfosR_40;
    MR_Word ll_backend__call_gen__InVarArgInfosF_41;
    MR_Word ll_backend__call_gen__OutArgsInfosR_42;
    MR_Word ll_backend__call_gen__OutArgsInfosF_43;
    MR_Word ll_backend__call_gen__ArgInfos_44;
    MR_Word ll_backend__call_gen__LiveVals0_45;
    MR_Word ll_backend__call_gen__SetupCode_46;
    MR_Word ll_backend__call_gen__NonVarCode_48;
    MR_Word ll_backend__call_gen__ExtraLiveVals_49;
    MR_Word ll_backend__call_gen__LiveVals_50;
    MR_Word ll_backend__call_gen__CallModel_51;
    MR_Word ll_backend__call_gen__TraceCode_52;
    MR_Word ll_backend__call_gen__ReturnLabel_53;
    MR_Word ll_backend__call_gen__Context_54;
    MR_Word ll_backend__call_gen__GoalId_55;
    MR_Word ll_backend__call_gen__InstMap_56;
    MR_Word ll_backend__call_gen__InstMapDelta_57;
    MR_Word ll_backend__call_gen__ReturnInstMap_58;
    MR_Word ll_backend__call_gen__OutArgsInfos_59;
    MR_Word ll_backend__call_gen__ReturnLiveLvalues_60;
    MR_Word ll_backend__call_gen__MaybeContainingGoalMap_61;
    MR_Word ll_backend__call_gen__MaybeGoalPath_64;
    MR_Word ll_backend__call_gen__CallCode_65;
    MR_Word ll_backend__call_gen__AfterReturn_66;
    MR_Word ll_backend__call_gen__FailHandlingCode_67;
    MR_Integer ll_backend__call_gen__V_72_72;
    MR_Integer ll_backend__call_gen__V_73_73;
    MR_Word ll_backend__call_gen__V_82_82;
    MR_Word ll_backend__call_gen__V_83_83;
    MR_Word ll_backend__call_gen__V_84_84;
    MR_Word ll_backend__call_gen__V_85_85;
    MR_Word ll_backend__call_gen__V_86_86;
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_88_88;
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_89_89;
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_90_90;
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_91_91;
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_92_92;
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_93_93;
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_94_94;
    MR_Word ll_backend__call_gen__V_95_95;
    MR_Word ll_backend__call_gen__V_96_96;
    MR_Word ll_backend__call_gen__V_97_97;
    MR_Word ll_backend__call_gen__V_99_99;
    MR_Word ll_backend__call_gen__V_100_100;
    MR_Word ll_backend__call_gen__V_101_101;
    MR_Word ll_backend__call_gen__V_102_102;
    MR_Word ll_backend__call_gen__V_104_104;
    MR_Word ll_backend__call_gen__V_105_105;
    MR_Word ll_backend__call_gen__V_106_106;
    MR_Word ll_backend__call_gen__V_111_111;
    MR_Word ll_backend__call_gen__V_112_112;
    MR_Word ll_backend__call_gen__V_113_113;
    MR_Word ll_backend__call_gen__NonLiveOutputs_47;

    {
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_68, &ll_backend__call_gen__ModuleInfo_23);
    }
    {
      ll_backend__code_info__get_vartypes_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_68, &ll_backend__call_gen__VarTypes_24);
    }
    {
      hlds__vartypes__lookup_var_types_3_p_0(ll_backend__call_gen__VarTypes_24, ll_backend__call_gen__Args_15, &ll_backend__call_gen__Types_25);
    }
    {
      hlds__arg_info__generic_call_arg_reg_types_6_p_0(ll_backend__call_gen__ModuleInfo_23, ll_backend__call_gen__VarTypes_24, ll_backend__call_gen__GenericCall_14, ll_backend__call_gen__Args_15, ll_backend__call_gen__MaybeRegTypes_17, &ll_backend__call_gen__ArgRegTypes_26);
    }
    {
      hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(ll_backend__call_gen__ModuleInfo_23, ll_backend__call_gen__Args_15, ll_backend__call_gen__Modes_16, ll_backend__call_gen__Types_25, ll_backend__call_gen__ArgRegTypes_26, &ll_backend__call_gen__InVarsR_27, &ll_backend__call_gen__InVarsF_28, &ll_backend__call_gen__OutVarsR_29, &ll_backend__call_gen__OutVarsF_30);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__call_gen__ModuleInfo_23, &ll_backend__call_gen__Globals_31);
    }
    ll_backend__call_gen__TypeInfo_114_114 = (MR_Word) &ll_backend__call_gen_scalar_common_1[0];
    {
      ll_backend__call_gen__V_72_72 = mercury__list__length_1_f_0(ll_backend__call_gen__TypeInfo_114_114, ll_backend__call_gen__InVarsR_27);
    }
    {
      ll_backend__call_gen__V_73_73 = mercury__list__length_1_f_0(ll_backend__call_gen__TypeInfo_114_114, ll_backend__call_gen__InVarsF_28);
    }
    {
      ll_backend__call_gen__generic_call_info_8_p_0(ll_backend__call_gen__Globals_31, ll_backend__call_gen__GenericCall_14, ll_backend__call_gen__V_72_72, ll_backend__call_gen__V_73_73, &ll_backend__call_gen__CodeAddr_32, &ll_backend__call_gen__SpecifierArgInfos_33, &ll_backend__call_gen__FirstImmInputR_34, &ll_backend__call_gen__HoCallVariant_35);
    }
    {
      hlds__code_model__determinism_to_code_model_2_p_0(ll_backend__call_gen__Det_18, &ll_backend__call_gen__CodeModel_37);
    }
    switch (ll_backend__call_gen__CodeModel_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        ll_backend__call_gen__FirstOutputR_38 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ll_backend__call_gen__FirstOutputR_38 = (MR_Integer) 2;
        break;
    }
    {
      ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__InVarsR_27, (MR_Integer) 0, ll_backend__call_gen__FirstImmInputR_34, (MR_Integer) 0, &ll_backend__call_gen__InVarArgInfosR_40);
    }
    {
      ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__InVarsF_28, (MR_Integer) 1, (MR_Integer) 1, (MR_Integer) 0, &ll_backend__call_gen__InVarArgInfosF_41);
    }
    {
      ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__OutVarsR_29, (MR_Integer) 0, ll_backend__call_gen__FirstOutputR_38, (MR_Integer) 1, &ll_backend__call_gen__OutArgsInfosR_42);
    }
    {
      ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__OutVarsF_30, (MR_Integer) 1, (MR_Integer) 1, (MR_Integer) 1, &ll_backend__call_gen__OutArgsInfosF_43);
    }
    ll_backend__call_gen__TypeInfo_115_115 = (MR_Word) &ll_backend__call_gen_scalar_common_2[0];
    {
      ll_backend__call_gen__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_86_86, 0) = ((MR_Box) (ll_backend__call_gen__OutArgsInfosF_43));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__call_gen__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_85_85, 0) = ((MR_Box) (ll_backend__call_gen__OutArgsInfosR_42));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_85_85, 1) = ((MR_Box) (ll_backend__call_gen__V_86_86));
    }
    {
      ll_backend__call_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_84_84, 0) = ((MR_Box) (ll_backend__call_gen__InVarArgInfosF_41));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_84_84, 1) = ((MR_Box) (ll_backend__call_gen__V_85_85));
    }
    {
      ll_backend__call_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_83_83, 0) = ((MR_Box) (ll_backend__call_gen__InVarArgInfosR_40));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_83_83, 1) = ((MR_Box) (ll_backend__call_gen__V_84_84));
    }
    {
      ll_backend__call_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_82_82, 0) = ((MR_Box) (ll_backend__call_gen__SpecifierArgInfos_33));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_82_82, 1) = ((MR_Box) (ll_backend__call_gen__V_83_83));
    }
    {
      ll_backend__call_gen__ArgInfos_44 = mercury__list__condense_1_f_0(ll_backend__call_gen__TypeInfo_115_115, ll_backend__call_gen__V_82_82);
    }
    {
      ll_backend__code_loc_dep__setup_call_7_p_0(ll_backend__call_gen__GoalInfo_19, ll_backend__call_gen__ArgInfos_44, &ll_backend__call_gen__LiveVals0_45, &ll_backend__call_gen__SetupCode_46, ll_backend__call_gen__STATE_VARIABLE_CI_0_68, ll_backend__call_gen__STATE_VARIABLE_CLD_0_70, &ll_backend__call_gen__STATE_VARIABLE_CLD_88_88);
    }
    {
      ll_backend__call_gen__kill_dead_input_vars_5_p_0(ll_backend__call_gen__ArgInfos_44, ll_backend__call_gen__GoalInfo_19, &ll_backend__call_gen__NonLiveOutputs_47, ll_backend__call_gen__STATE_VARIABLE_CLD_88_88, &ll_backend__call_gen__STATE_VARIABLE_CLD_89_89);
    }
    {
      ll_backend__call_gen__generic_call_nonvar_setup_7_p_0(ll_backend__call_gen__GenericCall_14, ll_backend__call_gen__HoCallVariant_35, ll_backend__call_gen__InVarsR_27, ll_backend__call_gen__InVarsF_28, &ll_backend__call_gen__NonVarCode_48, ll_backend__call_gen__STATE_VARIABLE_CLD_89_89, &ll_backend__call_gen__STATE_VARIABLE_CLD_90_90);
    }
    {
      ll_backend__call_gen__extra_livevals_2_p_0(ll_backend__call_gen__FirstImmInputR_34, &ll_backend__call_gen__ExtraLiveVals_49);
    }
    {
      mercury__set__insert_list_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__call_gen__ExtraLiveVals_49, ll_backend__call_gen__LiveVals0_45, &ll_backend__call_gen__LiveVals_50);
    }
    {
      ll_backend__call_gen__prepare_for_call_8_p_0(ll_backend__call_gen__CodeModel_37, ll_backend__call_gen__GoalInfo_19, &ll_backend__call_gen__CallModel_51, &ll_backend__call_gen__TraceCode_52, ll_backend__call_gen__STATE_VARIABLE_CI_0_68, &ll_backend__call_gen__STATE_VARIABLE_CI_91_91, ll_backend__call_gen__STATE_VARIABLE_CLD_90_90, &ll_backend__call_gen__STATE_VARIABLE_CLD_92_92);
    }
    {
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__call_gen__ReturnLabel_53, ll_backend__call_gen__STATE_VARIABLE_CI_91_91, &ll_backend__call_gen__STATE_VARIABLE_CI_93_93);
    }
    {
      ll_backend__call_gen__Context_54 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__call_gen__GoalInfo_19);
    }
    {
      ll_backend__call_gen__GoalId_55 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__call_gen__GoalInfo_19);
    }
    {
      ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_92_92, &ll_backend__call_gen__InstMap_56);
    }
    {
      ll_backend__call_gen__InstMapDelta_57 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__call_gen__GoalInfo_19);
    }
    {
      hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__call_gen__InstMap_56, ll_backend__call_gen__InstMapDelta_57, &ll_backend__call_gen__ReturnInstMap_58);
    }
    {
      ll_backend__call_gen__OutArgsInfos_59 = mercury__list__f_43_43_2_f_0(ll_backend__call_gen__TypeInfo_115_115, ll_backend__call_gen__OutArgsInfosR_42, ll_backend__call_gen__OutArgsInfosF_43);
    }
    {
      ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_8_p_0(ll_backend__call_gen__OutArgsInfos_59, ll_backend__call_gen__GoalInfo_19, ll_backend__call_gen__ReturnInstMap_58, &ll_backend__call_gen__ReturnLiveLvalues_60, ll_backend__call_gen__STATE_VARIABLE_CI_93_93, ll_backend__call_gen__STATE_VARIABLE_CLD_92_92, &ll_backend__call_gen__STATE_VARIABLE_CLD_94_94);
    }
    {
      ll_backend__code_info__get_maybe_containing_goal_map_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_93_93, &ll_backend__call_gen__MaybeContainingGoalMap_61);
    }
    if ((ll_backend__call_gen__MaybeContainingGoalMap_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__call_gen__MaybeGoalPath_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__call_gen__ContainingGoalMap_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeContainingGoalMap_61, (MR_Integer) 0)));
        MR_Word ll_backend__call_gen__GoalPath_63;

        {
          ll_backend__call_gen__GoalPath_63 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__call_gen__ContainingGoalMap_62, ll_backend__call_gen__GoalId_55);
        }
        {
          ll_backend__call_gen__MaybeGoalPath_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeGoalPath_64, 0) = ((MR_Box) (ll_backend__call_gen__GoalPath_63));
        }
      }
    ll_backend__call_gen__TypeCtorInfo_117_117 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__call_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ll_backend__call_gen__V_97_97, 0) = ((MR_Box) (ll_backend__call_gen__LiveVals_50));
    }
    {
      ll_backend__call_gen__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_96_96, 0) = ((MR_Box) (ll_backend__call_gen__V_97_97));
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_96_96, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      ll_backend__call_gen__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_102_102, 0) = ((MR_Box) (ll_backend__call_gen__ReturnLabel_53));
    }
    {
      ll_backend__call_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 1) = ((MR_Box) (ll_backend__call_gen__CodeAddr_32));
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 2) = ((MR_Box) (ll_backend__call_gen__V_102_102));
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 3) = ((MR_Box) (ll_backend__call_gen__ReturnLiveLvalues_60));
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 4) = ((MR_Box) (ll_backend__call_gen__Context_54));
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 5) = ((MR_Box) (ll_backend__call_gen__MaybeGoalPath_64));
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 6) = ((MR_Box) (ll_backend__call_gen__CallModel_51));
    }
    {
      ll_backend__call_gen__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_100_100, 0) = ((MR_Box) (ll_backend__call_gen__V_101_101));
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_100_100, 1) = ((MR_Box) ((MR_String) "Setup and call"));
    }
    {
      ll_backend__call_gen__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_106_106, 1) = ((MR_Box) (ll_backend__call_gen__ReturnLabel_53));
    }
    {
      ll_backend__call_gen__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_105_105, 0) = ((MR_Box) (ll_backend__call_gen__V_106_106));
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_105_105, 1) = ((MR_Box) ((MR_String) "Continuation label"));
    }
    {
      ll_backend__call_gen__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_104_104, 0) = ((MR_Box) (ll_backend__call_gen__V_105_105));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__call_gen__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_99_99, 0) = ((MR_Box) (ll_backend__call_gen__V_100_100));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_99_99, 1) = ((MR_Box) (ll_backend__call_gen__V_104_104));
    }
    {
      ll_backend__call_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_95_95, 0) = ((MR_Box) (ll_backend__call_gen__V_96_96));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_95_95, 1) = ((MR_Box) (ll_backend__call_gen__V_99_99));
    }
    {
      ll_backend__call_gen__CallCode_65 = mercury__cord__from_list_1_f_0(ll_backend__call_gen__TypeCtorInfo_117_117, ll_backend__call_gen__V_95_95);
    }
    {
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_94_94, &ll_backend__call_gen__AfterReturn_66);
    }
    {
      ll_backend__call_gen__handle_call_failure_6_p_0(ll_backend__call_gen__CodeModel_37, ll_backend__call_gen__GoalInfo_19, &ll_backend__call_gen__FailHandlingCode_67, ll_backend__call_gen__STATE_VARIABLE_CI_93_93, ll_backend__call_gen__STATE_VARIABLE_CI_69, ll_backend__call_gen__STATE_VARIABLE_CLD_94_94);
    }
    {
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__call_gen__AfterReturn_66, *ll_backend__call_gen__STATE_VARIABLE_CI_69, ll_backend__call_gen__STATE_VARIABLE_CLD_71);
    }
    {
      ll_backend__call_gen__V_113_113 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_117_117, ll_backend__call_gen__CallCode_65, ll_backend__call_gen__FailHandlingCode_67);
    }
    {
      ll_backend__call_gen__V_112_112 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_117_117, ll_backend__call_gen__TraceCode_52, ll_backend__call_gen__V_113_113);
    }
    {
      ll_backend__call_gen__V_111_111 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_117_117, ll_backend__call_gen__NonVarCode_48, ll_backend__call_gen__V_112_112);
    }
    {
      *ll_backend__call_gen__Code_20 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_117_117, ll_backend__call_gen__SetupCode_46, ll_backend__call_gen__V_111_111);
    }
  }
}

void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(
  MR_Word ll_backend__call_gen__GenericCall_14,
  MR_Word ll_backend__call_gen__Args_15,
  MR_Word ll_backend__call_gen__Modes_16,
  MR_Word ll_backend__call_gen__MaybeRegTypes_17,
  MR_Word ll_backend__call_gen__Det_18,
  MR_Word ll_backend__call_gen__GoalInfo_19,
  MR_Word * ll_backend__call_gen__Code_20,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_39,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_40,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_41,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_42)
{
  {
    MR_bool ll_backend__call_gen__succeeded;

    switch (MR_tag((MR_Word) ll_backend__call_gen__GenericCall_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(ll_backend__call_gen__GenericCall_14, ll_backend__call_gen__Args_15, ll_backend__call_gen__Modes_16, ll_backend__call_gen__MaybeRegTypes_17, ll_backend__call_gen__Det_18, ll_backend__call_gen__GoalInfo_19, ll_backend__call_gen__Code_20, ll_backend__call_gen__STATE_VARIABLE_CI_0_39, ll_backend__call_gen__STATE_VARIABLE_CI_40, ll_backend__call_gen__STATE_VARIABLE_CLD_0_41, ll_backend__call_gen__STATE_VARIABLE_CLD_42);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ll_backend__call_gen__EventName_31 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__call_gen__GenericCall_14, (MR_Integer) 0)));
          MR_Word ll_backend__call_gen__ModuleInfo_73;
          MR_Word ll_backend__call_gen__EventSet_74;
          MR_Word ll_backend__call_gen__EventSpecMap_75;
          MR_String ll_backend__call_gen__V_89_89;
          MR_Word ll_backend__call_gen__Attributes_76;
          MR_Integer ll_backend__call_gen__EventNumber_77;

          {
            ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_39, &ll_backend__call_gen__ModuleInfo_73);
          }
          {
            hlds__hlds_module__module_info_get_event_set_2_p_0(ll_backend__call_gen__ModuleInfo_73, &ll_backend__call_gen__EventSet_74);
          }
          ll_backend__call_gen__V_89_89 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__EventSet_74, (MR_Integer) 0)));
          ll_backend__call_gen__EventSpecMap_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__EventSet_74, (MR_Integer) 1)));
          {
            ll_backend__call_gen__succeeded = parse_tree__prog_event__event_attributes_3_p_0(ll_backend__call_gen__EventSpecMap_75, ll_backend__call_gen__EventName_31, &ll_backend__call_gen__Attributes_76);
          }
          if (ll_backend__call_gen__succeeded)
            {
              ll_backend__call_gen__succeeded = parse_tree__prog_event__event_number_3_p_0(ll_backend__call_gen__EventSpecMap_75, ll_backend__call_gen__EventName_31, &ll_backend__call_gen__EventNumber_77);
            }
          if (ll_backend__call_gen__succeeded)
            {
              MR_Word ll_backend__call_gen__TypeCtorInfo_36_90;
              MR_Word ll_backend__call_gen__MaybeUserAttributes_78;
              MR_Word ll_backend__call_gen__AttrCodes_79;
              MR_Word ll_backend__call_gen__UserEventInfo_80;
              MR_Word ll_backend__call_gen__EventCode_81;
              MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_28_82;
              MR_Word ll_backend__call_gen__V_85_85;

              {
                ll_backend__call_gen__generate_event_attributes_7_p_0(ll_backend__call_gen__Attributes_76, ll_backend__call_gen__Args_15, &ll_backend__call_gen__MaybeUserAttributes_78, &ll_backend__call_gen__AttrCodes_79, ll_backend__call_gen__STATE_VARIABLE_CI_0_39, ll_backend__call_gen__STATE_VARIABLE_CLD_0_41, &ll_backend__call_gen__STATE_VARIABLE_CLD_28_82);
              }
              {
                ll_backend__call_gen__UserEventInfo_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__UserEventInfo_80, 0) = ((MR_Box) (ll_backend__call_gen__EventNumber_77));
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__UserEventInfo_80, 1) = ((MR_Box) (ll_backend__call_gen__MaybeUserAttributes_78));
              }
              {
                ll_backend__trace_gen__generate_user_event_code_7_p_0(ll_backend__call_gen__UserEventInfo_80, ll_backend__call_gen__GoalInfo_19, &ll_backend__call_gen__EventCode_81, ll_backend__call_gen__STATE_VARIABLE_CI_0_39, ll_backend__call_gen__STATE_VARIABLE_CI_40, ll_backend__call_gen__STATE_VARIABLE_CLD_28_82, ll_backend__call_gen__STATE_VARIABLE_CLD_42);
              }
              ll_backend__call_gen__TypeCtorInfo_36_90 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              {
                ll_backend__call_gen__V_85_85 = mercury__cord__cord_list_to_cord_1_f_0(ll_backend__call_gen__TypeCtorInfo_36_90, ll_backend__call_gen__AttrCodes_79);
              }
              {
                *ll_backend__call_gen__Code_20 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_36_90, ll_backend__call_gen__V_85_85, ll_backend__call_gen__EventCode_81);
              }
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_event_call\'/8", (MR_String) "bad event name");
                return;
              }
            }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ll_backend__call_gen__InputArg_33;
          MR_Word ll_backend__call_gen__OutputArg_34;
          MR_Word ll_backend__call_gen__V_43_43;
          MR_Word ll_backend__call_gen__V_44_44;

          ll_backend__call_gen__succeeded = ((MR_tag((MR_Word) ll_backend__call_gen__Args_15)) == (MR_mktag((MR_Integer) 1)));
          if (ll_backend__call_gen__succeeded)
            {
              ll_backend__call_gen__InputArg_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__Args_15, (MR_Integer) 0)));
              ll_backend__call_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__Args_15, (MR_Integer) 1)));
              ll_backend__call_gen__succeeded = ((MR_tag((MR_Word) ll_backend__call_gen__V_43_43)) == (MR_mktag((MR_Integer) 1)));
              if (ll_backend__call_gen__succeeded)
                {
                  ll_backend__call_gen__OutputArg_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_43_43, (MR_Integer) 0)));
                  ll_backend__call_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_43_43, (MR_Integer) 1)));
                  ll_backend__call_gen__succeeded = (ll_backend__call_gen__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
            }
          if (ll_backend__call_gen__succeeded)
            {
              MR_Word ll_backend__call_gen__ModuleInfo_35;
              MR_Word ll_backend__call_gen__ProcInfo_36;
              MR_Word ll_backend__call_gen__VarTypes_37;
              MR_Word ll_backend__call_gen__Rval_38;

              {
                ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_39, &ll_backend__call_gen__ModuleInfo_35);
              }
              {
                ll_backend__code_info__get_proc_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_39, &ll_backend__call_gen__ProcInfo_36);
              }
              {
                hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__call_gen__ProcInfo_36, &ll_backend__call_gen__VarTypes_37);
              }
              {
                ll_backend__call_gen__succeeded = hlds__hlds_pred__var_is_of_dummy_type_3_p_0(ll_backend__call_gen__ModuleInfo_35, ll_backend__call_gen__VarTypes_37, ll_backend__call_gen__InputArg_33);
              }
              if (ll_backend__call_gen__succeeded)
                {
                  ll_backend__call_gen__Rval_38 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_4[1]);
                }
              else
                {
                  ll_backend__call_gen__Rval_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__Rval_38, 0) = ((MR_Box) (ll_backend__call_gen__InputArg_33));
                }
              {
                ll_backend__call_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_0_41, ll_backend__call_gen__OutputArg_34);
              }
              if (ll_backend__call_gen__succeeded)
                {
                  MR_Word ll_backend__call_gen__Rval_60;

                  {
                    ll_backend__call_gen__Rval_60 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Rval_38);
                  }
                  {
                    ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ll_backend__call_gen__OutputArg_34, ll_backend__call_gen__Rval_60, ll_backend__call_gen__Code_20, ll_backend__call_gen__STATE_VARIABLE_CLD_0_41, ll_backend__call_gen__STATE_VARIABLE_CLD_42);
                  }
                }
              else
                {
                  {
                    *ll_backend__call_gen__Code_20 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                  *ll_backend__call_gen__STATE_VARIABLE_CLD_42 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_41;
                }
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_generic_call\'/12", (MR_String) "invalid type/inst cast call");
                return;
              }
            }
          *ll_backend__call_gen__STATE_VARIABLE_CI_40 = ll_backend__call_gen__STATE_VARIABLE_CI_0_39;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__call_gen____Compare____known_call_variant_0_0(
  MR_Word * ll_backend__call_gen__HeadVar__1_1,
  MR_Word ll_backend__call_gen__HeadVar__2_2,
  MR_Word ll_backend__call_gen__HeadVar__3_3)
{
  {
    MR_bool ll_backend__call_gen__succeeded;
    MR_Integer ll_backend__call_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__call_gen__HeadVar__2_2;
    MR_Integer ll_backend__call_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__call_gen__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__call_gen__HeadVar__1_1, ll_backend__call_gen__Cast_HeadVar1_4, ll_backend__call_gen__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ll_backend__call_gen____Unify____known_call_variant_0_0(
  MR_Word ll_backend__call_gen__HeadVar__2_1,
  MR_Word ll_backend__call_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__call_gen__succeeded = (ll_backend__call_gen__HeadVar__2_1 == ll_backend__call_gen__HeadVar__2_2);

    return ll_backend__call_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(
  MR_Word ll_backend__call_gen__HeadVar__1_1,
  MR_Word ll_backend__call_gen__HeadVar__2_2,
  MR_Integer ll_backend__call_gen__HeadVar__3_3,
  MR_Word ll_backend__call_gen__HeadVar__4_4,
  MR_Word * ll_backend__call_gen__HeadVar__5_5)
{
  {
    MR_bool ll_backend__call_gen__succeeded;

    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__call_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__call_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__call_gen__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__call_gen__ArgInfo_14;
        MR_Word ll_backend__call_gen__ArgInfos_15;
        MR_Word ll_backend__call_gen__V_16_16;
        MR_Word ll_backend__call_gen__V_17_17;
        MR_Integer ll_backend__call_gen__V_18_18;

        {
          ll_backend__call_gen__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_17_17, 0) = ((MR_Box) (ll_backend__call_gen__HeadVar__2_2));
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_17_17, 1) = ((MR_Box) (ll_backend__call_gen__HeadVar__3_3));
        }
        {
          ll_backend__call_gen__ArgInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__ArgInfo_14, 0) = ((MR_Box) (ll_backend__call_gen__V_17_17));
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__ArgInfo_14, 1) = ((MR_Box) (ll_backend__call_gen__HeadVar__4_4));
        }
        {
          ll_backend__call_gen__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_16_16, 0) = ((MR_Box) (ll_backend__call_gen__Var_9));
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_16_16, 1) = ((MR_Box) (ll_backend__call_gen__ArgInfo_14));
        }
        ll_backend__call_gen__V_18_18 = (ll_backend__call_gen__HeadVar__3_3 + (MR_Integer) 1);
        {
          ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__Vars_10, ll_backend__call_gen__HeadVar__2_2, ll_backend__call_gen__V_18_18, ll_backend__call_gen__HeadVar__4_4, &ll_backend__call_gen__ArgInfos_15);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__call_gen__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_16_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__ArgInfos_15));
        }
      }
  }
}

static void MR_CALL 
ll_backend__call_gen__generate_simple_test_6_p_0(
  MR_Word ll_backend__call_gen__TestExpr_7,
  MR_Word * ll_backend__call_gen__Rval_8,
  MR_Word * ll_backend__call_gen__ArgCode_9,
  MR_Word ll_backend__call_gen__CI_10,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_22,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_23)
{
  {
    MR_bool ll_backend__call_gen__succeeded;

    if (((((MR_tag((MR_Word) ll_backend__call_gen__TestExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word ll_backend__call_gen__BinOp_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_7, (MR_Integer) 1)));
        MR_Word ll_backend__call_gen__X0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_7, (MR_Integer) 2)));
        MR_Word ll_backend__call_gen__Y0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_7, (MR_Integer) 3)));
        MR_Word ll_backend__call_gen__X1_15;
        MR_Word ll_backend__call_gen__Y1_16;
        MR_Word ll_backend__call_gen__X_17;
        MR_Word ll_backend__call_gen__CodeX_18;
        MR_Word ll_backend__call_gen__Y_19;
        MR_Word ll_backend__call_gen__CodeY_20;
        MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_25_25;

        {
          ll_backend__call_gen__X1_15 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__X0_13);
        }
        {
          ll_backend__call_gen__Y1_16 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Y0_14);
        }
        switch (MR_tag((MR_Word) ll_backend__call_gen__X1_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            {
              ll_backend__call_gen__X_17 = ll_backend__call_gen__X1_15;
              {
                ll_backend__call_gen__CodeX_18 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              ll_backend__call_gen__STATE_VARIABLE_CLD_25_25 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_22;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__call_gen__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__X1_15, (MR_Integer) 0)));

              {
                ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__call_gen__Var_38, &ll_backend__call_gen__CodeX_18, &ll_backend__call_gen__X_17, ll_backend__call_gen__CI_10, ll_backend__call_gen__STATE_VARIABLE_CLD_0_22, &ll_backend__call_gen__STATE_VARIABLE_CLD_25_25);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              ll_backend__call_gen__X_17 = ll_backend__call_gen__X1_15;
              {
                ll_backend__call_gen__CodeX_18 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              ll_backend__call_gen__STATE_VARIABLE_CLD_25_25 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_22;
            }
            break;
        }
        switch (MR_tag((MR_Word) ll_backend__call_gen__Y1_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            {
              ll_backend__call_gen__Y_19 = ll_backend__call_gen__Y1_16;
              {
                ll_backend__call_gen__CodeY_20 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              *ll_backend__call_gen__STATE_VARIABLE_CLD_23 = ll_backend__call_gen__STATE_VARIABLE_CLD_25_25;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__call_gen__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__Y1_16, (MR_Integer) 0)));

              {
                ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__call_gen__Var_59, &ll_backend__call_gen__CodeY_20, &ll_backend__call_gen__Y_19, ll_backend__call_gen__CI_10, ll_backend__call_gen__STATE_VARIABLE_CLD_25_25, ll_backend__call_gen__STATE_VARIABLE_CLD_23);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              ll_backend__call_gen__Y_19 = ll_backend__call_gen__Y1_16;
              {
                ll_backend__call_gen__CodeY_20 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              *ll_backend__call_gen__STATE_VARIABLE_CLD_23 = ll_backend__call_gen__STATE_VARIABLE_CLD_25_25;
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__call_gen__Rval_8 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__call_gen__BinOp_12));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__call_gen__X_17));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__call_gen__Y_19));
        }
        {
          *ll_backend__call_gen__ArgCode_9 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__call_gen__CodeX_18, ll_backend__call_gen__CodeY_20);
        }
      }
    else
      {
        MR_Word ll_backend__call_gen__UnOp_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_7, (MR_Integer) 1)));
        MR_Word ll_backend__call_gen__X0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_7, (MR_Integer) 2)));
        MR_Word ll_backend__call_gen__X1_28;
        MR_Word ll_backend__call_gen__X_29;

        {
          ll_backend__call_gen__X1_28 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__X0_27);
        }
        switch (MR_tag((MR_Word) ll_backend__call_gen__X1_28)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            {
              ll_backend__call_gen__X_29 = ll_backend__call_gen__X1_28;
              {
                *ll_backend__call_gen__ArgCode_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              *ll_backend__call_gen__STATE_VARIABLE_CLD_23 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_22;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__call_gen__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__X1_28, (MR_Integer) 0)));

              {
                ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__call_gen__Var_80, ll_backend__call_gen__ArgCode_9, &ll_backend__call_gen__X_29, ll_backend__call_gen__CI_10, ll_backend__call_gen__STATE_VARIABLE_CLD_0_22, ll_backend__call_gen__STATE_VARIABLE_CLD_23);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              ll_backend__call_gen__X_29 = ll_backend__call_gen__X1_28;
              {
                *ll_backend__call_gen__ArgCode_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              *ll_backend__call_gen__STATE_VARIABLE_CLD_23 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_22;
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__call_gen__Rval_8 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__call_gen__UnOp_21));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__call_gen__X_29));
        }
      }
  }
}

static MR_Word MR_CALL 
ll_backend__call_gen__convert_simple_expr_1_f_0(
  MR_Word ll_backend__call_gen__HeadVar__1_1)
{
  {
    MR_bool ll_backend__call_gen__succeeded;
    MR_Word ll_backend__call_gen__HeadVar__2_2;

    switch (MR_tag((MR_Word) ll_backend__call_gen__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__call_gen__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));

          {
            ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (ll_backend__call_gen__Var_3));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ll_backend__call_gen__Int_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ll_backend__call_gen__V_5_5;

          {
            ll_backend__call_gen__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_5_5, 0) = ((MR_Box) (ll_backend__call_gen__Int_4));
          }
          {
            ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__call_gen__V_5_5));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float ll_backend__call_gen__Float_6 = MR_unbox_float((MR_hl_field(MR_mktag(2), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ll_backend__call_gen__V_7_7;

          {
            ll_backend__call_gen__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_7_7, 1) = MR_box_float(ll_backend__call_gen__Float_6);
          }
          {
            ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__call_gen__V_7_7));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__call_gen__UnOp_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__call_gen__Expr_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ll_backend__call_gen__V_10_10;

              {
                ll_backend__call_gen__V_10_10 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Expr_9);
              }
              {
                ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__call_gen__UnOp_8));
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 2) = ((MR_Box) (ll_backend__call_gen__V_10_10));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__call_gen__BinOp_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__call_gen__Expr1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ll_backend__call_gen__Expr2_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word ll_backend__call_gen__V_14_14;
              MR_Word ll_backend__call_gen__V_15_15;

              {
                ll_backend__call_gen__V_14_14 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Expr1_12);
              }
              {
                ll_backend__call_gen__V_15_15 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Expr2_13);
              }
              {
                ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__call_gen__BinOp_11));
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 2) = ((MR_Box) (ll_backend__call_gen__V_14_14));
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 3) = ((MR_Box) (ll_backend__call_gen__V_15_15));
              }
            }
            break;
        }
        break;
    }
    return ll_backend__call_gen__HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__call_gen__rebuild_registers_5_p_0(
  MR_Word ll_backend__call_gen__HeadVar__1_1,
  MR_Word ll_backend__call_gen__Liveness_2,
  MR_Word * ll_backend__call_gen__HeadVar__3_3,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_4,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_5)
{
  {
    MR_bool ll_backend__call_gen__succeeded;

    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__call_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__call_gen__STATE_VARIABLE_CLD_5 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_4;
      }
    else
      {
        MR_Word ll_backend__call_gen__Var_10;
        MR_Word ll_backend__call_gen__ArgLoc_11;
        MR_Word ll_backend__call_gen__Mode_12;
        MR_Word ll_backend__call_gen__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__call_gen__OutputArgLocs1_17;
        MR_Word ll_backend__call_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__call_gen__V_22_22;
        MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_23_23;
        MR_Word ll_backend__call_gen__TypeCtorInfo_26_26;

        ll_backend__call_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_21_21, (MR_Integer) 0)));
        ll_backend__call_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_21_21, (MR_Integer) 1)));
        ll_backend__call_gen__ArgLoc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_22_22, (MR_Integer) 0)));
        ll_backend__call_gen__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_22_22, (MR_Integer) 1)));
        {
          ll_backend__call_gen__rebuild_registers_5_p_0(ll_backend__call_gen__Args_13, ll_backend__call_gen__Liveness_2, &ll_backend__call_gen__OutputArgLocs1_17, ll_backend__call_gen__STATE_VARIABLE_CLD_0_4, &ll_backend__call_gen__STATE_VARIABLE_CLD_23_23);
        }
        ll_backend__call_gen__succeeded = (ll_backend__call_gen__Mode_12 == (MR_Integer) 1);
        if (ll_backend__call_gen__succeeded)
          {
            ll_backend__call_gen__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              ll_backend__call_gen__succeeded = parse_tree__set_of_var__member_2_p_0(ll_backend__call_gen__TypeCtorInfo_26_26, ll_backend__call_gen__Liveness_2, ll_backend__call_gen__Var_10);
            }
          }
        if (ll_backend__call_gen__succeeded)
          {
            MR_Word ll_backend__call_gen__Register_18;
            MR_Word ll_backend__call_gen__V_25_25;

            {
              ll_backend__code_util__arg_loc_to_register_2_p_0(ll_backend__call_gen__ArgLoc_11, &ll_backend__call_gen__Register_18);
            }
            {
              ll_backend__code_loc_dep__set_var_location_4_p_0(ll_backend__call_gen__Var_10, ll_backend__call_gen__Register_18, ll_backend__call_gen__STATE_VARIABLE_CLD_23_23, ll_backend__call_gen__STATE_VARIABLE_CLD_5);
            }
            {
              ll_backend__call_gen__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_25_25, 0) = ((MR_Box) (ll_backend__call_gen__Var_10));
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_25_25, 1) = ((MR_Box) (ll_backend__call_gen__ArgLoc_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__call_gen__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_25_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__OutputArgLocs1_17));
            }
          }
        else
          {
            *ll_backend__call_gen__HeadVar__3_3 = ll_backend__call_gen__OutputArgLocs1_17;
            *ll_backend__call_gen__STATE_VARIABLE_CLD_5 = ll_backend__call_gen__STATE_VARIABLE_CLD_23_23;
          }
      }
  }
}

static void MR_CALL 
ll_backend__call_gen__find_nonlive_outputs_4_p_0(
  MR_Word ll_backend__call_gen__HeadVar__1_1,
  MR_Word ll_backend__call_gen__Liveness_2,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__call_gen__succeeded;

        if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_4 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3;
        else
          {
            MR_Word ll_backend__call_gen__Var_9;
            MR_Word ll_backend__call_gen__Mode_11;
            MR_Word ll_backend__call_gen__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__call_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__call_gen__V_18_18;
            MR_Word ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19;
            MR_Word ll_backend__call_gen___ArgLoc_10;

            ll_backend__call_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_17_17, (MR_Integer) 0)));
            ll_backend__call_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_17_17, (MR_Integer) 1)));
            ll_backend__call_gen___ArgLoc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_18_18, (MR_Integer) 0)));
            ll_backend__call_gen__Mode_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_18_18, (MR_Integer) 1)));
            switch (ll_backend__call_gen__Mode_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3;
                break;
              case (MR_Integer) 1:
                {
                  {
                    ll_backend__call_gen__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__call_gen__Liveness_2, ll_backend__call_gen__Var_9);
                  }
                  if (ll_backend__call_gen__succeeded)
                    ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3;
                  else
                    {
                      {
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__call_gen__Var_9, ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3, &ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19);
                      }
                    }
                }
                break;
              case (MR_Integer) 2:
                ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3;
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__call_gen__HeadVar__1__tmp_copy_1 = ll_backend__call_gen__Args_12;
              MR_Word ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0__tmp_copy_3 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19;

              ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0__tmp_copy_3;
              ll_backend__call_gen__HeadVar__1_1 = ll_backend__call_gen__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__call_gen__kill_dead_input_vars_5_p_0(
  MR_Word ll_backend__call_gen__ArgsInfos_6,
  MR_Word ll_backend__call_gen__GoalInfo_7,
  MR_Word * ll_backend__call_gen__NonLiveOutputs_8,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_13,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_14)
{
  {
    MR_bool ll_backend__call_gen__succeeded;
    MR_Word ll_backend__call_gen__TypeCtorInfo_17_17;
    MR_Word ll_backend__call_gen__Liveness_10;
    MR_Word ll_backend__call_gen__PostDeaths_11;
    MR_Word ll_backend__call_gen__ImmediatePostDeaths_12;
    MR_Word ll_backend__call_gen__V_15_15;

    {
      ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_0_13, &ll_backend__call_gen__Liveness_10);
    }
    ll_backend__call_gen__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      ll_backend__call_gen__V_15_15 = parse_tree__set_of_var__init_0_f_0(ll_backend__call_gen__TypeCtorInfo_17_17);
    }
    {
      ll_backend__call_gen__find_nonlive_outputs_4_p_0(ll_backend__call_gen__ArgsInfos_6, ll_backend__call_gen__Liveness_10, ll_backend__call_gen__V_15_15, ll_backend__call_gen__NonLiveOutputs_8);
    }
    {
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__call_gen__GoalInfo_7, &ll_backend__call_gen__PostDeaths_11);
    }
    {
      parse_tree__set_of_var__difference_3_p_0(ll_backend__call_gen__TypeCtorInfo_17_17, ll_backend__call_gen__PostDeaths_11, *ll_backend__call_gen__NonLiveOutputs_8, &ll_backend__call_gen__ImmediatePostDeaths_12);
    }
    {
      ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__call_gen__ImmediatePostDeaths_12, ll_backend__call_gen__STATE_VARIABLE_CLD_0_13, ll_backend__call_gen__STATE_VARIABLE_CLD_14);
    }
  }
}

static void MR_CALL 
ll_backend__call_gen__call_comment_4_p_0(
  MR_Word ll_backend__call_gen__CI_5,
  MR_Word ll_backend__call_gen__PredId_6,
  MR_Word ll_backend__call_gen__CodeModel_7,
  MR_String * ll_backend__call_gen__Msg_8)
{
  {
    MR_bool ll_backend__call_gen__succeeded;
    MR_String ll_backend__call_gen__BaseMsg_9;
    MR_Word ll_backend__call_gen__AutoComments_10;

    switch (ll_backend__call_gen__CodeModel_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__call_gen__BaseMsg_9 = (MR_String) "branch to det procedure";
        break;
      case (MR_Integer) 2:
        ll_backend__call_gen__BaseMsg_9 = (MR_String) "branch to nondet procedure";
        break;
      case (MR_Integer) 1:
        ll_backend__call_gen__BaseMsg_9 = (MR_String) "branch to semidet procedure";
        break;
    }
    {
      ll_backend__code_info__get_auto_comments_2_p_0(ll_backend__call_gen__CI_5, &ll_backend__call_gen__AutoComments_10);
    }
    switch (ll_backend__call_gen__AutoComments_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__call_gen__Msg_8 = ll_backend__call_gen__BaseMsg_9;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__call_gen__ModuleInfo_11;
          MR_Word ll_backend__call_gen__PredInfo_12;
          MR_String ll_backend__call_gen__PredName_13;
          MR_String ll_backend__call_gen__V_14_14;

          {
            ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__CI_5, &ll_backend__call_gen__ModuleInfo_11);
          }
          {
            hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__call_gen__ModuleInfo_11, ll_backend__call_gen__PredId_6, &ll_backend__call_gen__PredInfo_12);
          }
          {
            ll_backend__call_gen__PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__call_gen__PredInfo_12);
          }
          {
            ll_backend__call_gen__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__call_gen__PredName_13);
          }
          {
            *ll_backend__call_gen__Msg_8 = mercury__string__f_43_43_2_f_0(ll_backend__call_gen__BaseMsg_9, ll_backend__call_gen__V_14_14);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__call_gen__handle_call_failure_6_p_0(
  MR_Word ll_backend__call_gen__CodeModel_7,
  MR_Word ll_backend__call_gen__GoalInfo_8,
  MR_Word * ll_backend__call_gen__FailHandlingCode_9,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_17,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_18,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_19)
{
  {
    MR_bool ll_backend__call_gen__succeeded;

    switch (ll_backend__call_gen__CodeModel_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          {
            *ll_backend__call_gen__FailHandlingCode_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
          *ll_backend__call_gen__STATE_VARIABLE_CI_18 = ll_backend__call_gen__STATE_VARIABLE_CI_0_17;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__call_gen__Detism_12;

          {
            ll_backend__call_gen__Detism_12 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__call_gen__GoalInfo_8);
          }
          ll_backend__call_gen__succeeded = (ll_backend__call_gen__Detism_12 == (MR_Integer) 7);
          if (ll_backend__call_gen__succeeded)
            {
              ll_backend__code_loc_dep__generate_failure_4_p_0(ll_backend__call_gen__FailHandlingCode_9, ll_backend__call_gen__STATE_VARIABLE_CI_0_17, ll_backend__call_gen__STATE_VARIABLE_CI_18, ll_backend__call_gen__STATE_VARIABLE_CLD_0_19);
            }
          else
            {
              MR_Word ll_backend__call_gen__TypeCtorInfo_35_35;
              MR_Word ll_backend__call_gen__ContLab_13;
              MR_Word ll_backend__call_gen__FailTestCode_14;
              MR_Word ll_backend__call_gen__FailCode_15;
              MR_Word ll_backend__call_gen__ContLabelCode_16;
              MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_21_21;
              MR_Word ll_backend__call_gen__V_22_22;
              MR_Word ll_backend__call_gen__V_23_23;
              MR_Word ll_backend__call_gen__V_28_28;
              MR_Word ll_backend__call_gen__V_31_31;
              MR_Word ll_backend__call_gen__V_32_32;
              MR_Word ll_backend__call_gen__V_34_34;

              {
                ll_backend__code_info__get_next_label_3_p_0(&ll_backend__call_gen__ContLab_13, ll_backend__call_gen__STATE_VARIABLE_CI_0_17, &ll_backend__call_gen__STATE_VARIABLE_CI_21_21);
              }
              ll_backend__call_gen__TypeCtorInfo_35_35 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              {
                ll_backend__call_gen__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_28_28, 0) = ((MR_Box) (ll_backend__call_gen__ContLab_13));
              }
              {
                ll_backend__call_gen__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_23_23, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_4[0]));
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_23_23, 2) = ((MR_Box) (ll_backend__call_gen__V_28_28));
              }
              {
                ll_backend__call_gen__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_22_22, 0) = ((MR_Box) (ll_backend__call_gen__V_23_23));
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_22_22, 1) = ((MR_Box) ((MR_String) "test for success"));
              }
              {
                ll_backend__call_gen__FailTestCode_14 = mercury__cord__singleton_1_f_0(ll_backend__call_gen__TypeCtorInfo_35_35, ((MR_Box) (ll_backend__call_gen__V_22_22)));
              }
              {
                ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__call_gen__FailCode_15, ll_backend__call_gen__STATE_VARIABLE_CI_21_21, ll_backend__call_gen__STATE_VARIABLE_CI_18, ll_backend__call_gen__STATE_VARIABLE_CLD_0_19);
              }
              {
                ll_backend__call_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_32_32, 1) = ((MR_Box) (ll_backend__call_gen__ContLab_13));
              }
              {
                ll_backend__call_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_31_31, 0) = ((MR_Box) (ll_backend__call_gen__V_32_32));
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_31_31, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ll_backend__call_gen__ContLabelCode_16 = mercury__cord__singleton_1_f_0(ll_backend__call_gen__TypeCtorInfo_35_35, ((MR_Box) (ll_backend__call_gen__V_31_31)));
              }
              {
                ll_backend__call_gen__V_34_34 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_35_35, ll_backend__call_gen__FailCode_15, ll_backend__call_gen__ContLabelCode_16);
              }
              {
                *ll_backend__call_gen__FailHandlingCode_9 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_35_35, ll_backend__call_gen__FailTestCode_14, ll_backend__call_gen__V_34_34);
              }
            }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__call_gen__prepare_for_call_8_p_0(
  MR_Word ll_backend__call_gen__CodeModel_9,
  MR_Word ll_backend__call_gen__GoalInfo_10,
  MR_Word * ll_backend__call_gen__CallModel_11,
  MR_Word * ll_backend__call_gen__TraceCode_12,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_17,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_18,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_19,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_20)
{
  {
    MR_bool ll_backend__call_gen__succeeded;
    MR_Word ll_backend__call_gen__AllowLCO_15;

    {
      ll_backend__code_info__succip_is_used_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_17, ll_backend__call_gen__STATE_VARIABLE_CI_18);
    }
    {
      ll_backend__call_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__call_gen__GoalInfo_10, (MR_Integer) 22);
    }
    if (ll_backend__call_gen__succeeded)
      ll_backend__call_gen__AllowLCO_15 = (MR_Integer) 0;
    else
      ll_backend__call_gen__AllowLCO_15 = (MR_Integer) 1;
    switch (ll_backend__call_gen__CodeModel_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *ll_backend__call_gen__CallModel_11 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__call_gen__AllowLCO_15));
          }
          *ll_backend__call_gen__STATE_VARIABLE_CLD_20 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_19;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__call_gen__TailCallStatus_16;

          {
            ll_backend__code_loc_dep__may_use_nondet_tailcall_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_0_19, &ll_backend__call_gen__TailCallStatus_16);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__call_gen__CallModel_11 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__call_gen__TailCallStatus_16));
          }
          {
            ll_backend__code_loc_dep__set_resume_point_and_frame_to_unknown_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_0_19, ll_backend__call_gen__STATE_VARIABLE_CLD_20);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__call_gen__CallModel_11 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__AllowLCO_15));
          }
          *ll_backend__call_gen__STATE_VARIABLE_CLD_20 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_19;
        }
        break;
    }
    {
      ll_backend__trace_gen__trace_prepare_for_call_2_p_0(*ll_backend__call_gen__STATE_VARIABLE_CI_18, ll_backend__call_gen__TraceCode_12);
    }
  }
}

static void MR_CALL 
ll_backend__call_gen__generic_call_nonvar_setup_7_p_0(
  MR_Word ll_backend__call_gen__HeadVar__1_1,
  MR_Word ll_backend__call_gen__HoCallVariant_2,
  MR_Word ll_backend__call_gen__InVarsR_3,
  MR_Word ll_backend__call_gen__InVarsF_4,
  MR_Word * ll_backend__call_gen__Code_5,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_6,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_7)
{
  {
    MR_bool ll_backend__call_gen__succeeded;

    switch (MR_tag((MR_Word) ll_backend__call_gen__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (ll_backend__call_gen__HoCallVariant_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                *ll_backend__call_gen__Code_5 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              *ll_backend__call_gen__STATE_VARIABLE_CLD_7 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_6;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__call_gen__TypeInfo_117_117;
              MR_Integer ll_backend__call_gen__NumInVarsR_17;
              MR_Integer ll_backend__call_gen__NumInVarsF_18;
              MR_Integer ll_backend__call_gen__NumInVars_19;
              MR_Word ll_backend__call_gen__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[3]);
              MR_Word ll_backend__call_gen__V_26_26;
              MR_Word ll_backend__call_gen__V_27_27;
              MR_Word ll_backend__call_gen__V_31_31;
              MR_Word ll_backend__call_gen__V_32_32;

              {
                ll_backend__code_loc_dep__clobber_reg_3_p_0(ll_backend__call_gen__V_22_22, ll_backend__call_gen__STATE_VARIABLE_CLD_0_6, ll_backend__call_gen__STATE_VARIABLE_CLD_7);
              }
              ll_backend__call_gen__TypeInfo_117_117 = (MR_Word) &ll_backend__call_gen_scalar_common_1[0];
              {
                mercury__list__length_2_p_0(ll_backend__call_gen__TypeInfo_117_117, ll_backend__call_gen__InVarsR_3, &ll_backend__call_gen__NumInVarsR_17);
              }
              {
                mercury__list__length_2_p_0(ll_backend__call_gen__TypeInfo_117_117, ll_backend__call_gen__InVarsF_4, &ll_backend__call_gen__NumInVarsF_18);
              }
              {
                ll_backend__call_gen__NumInVars_19 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(ll_backend__call_gen__NumInVarsR_17, ll_backend__call_gen__NumInVarsF_18);
              }
              {
                ll_backend__call_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_32_32, 0) = ((MR_Box) (ll_backend__call_gen__NumInVars_19));
              }
              {
                ll_backend__call_gen__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_31_31, 1) = ((MR_Box) (ll_backend__call_gen__V_32_32));
              }
              {
                ll_backend__call_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_27_27, 1) = ((MR_Box) (ll_backend__call_gen__V_22_22));
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_27_27, 2) = ((MR_Box) (ll_backend__call_gen__V_31_31));
              }
              {
                ll_backend__call_gen__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_26_26, 0) = ((MR_Box) (ll_backend__call_gen__V_27_27));
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_26_26, 1) = ((MR_Box) ((MR_String) "Assign number of immediate input arguments"));
              }
              {
                *ll_backend__call_gen__Code_5 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__call_gen__V_26_26)));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ll_backend__call_gen__Method_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word ll_backend__call_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ll_backend__call_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word ll_backend__call_gen__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 3)));

          if ((ll_backend__call_gen__InVarsF_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/7", (MR_String) "float input reg");
                return;
              }
            }
          switch (ll_backend__call_gen__HoCallVariant_2) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ll_backend__call_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[3]);
                MR_Word ll_backend__call_gen__V_86_86;
                MR_Word ll_backend__call_gen__V_87_87;
                MR_Word ll_backend__call_gen__V_91_91;
                MR_Word ll_backend__call_gen__V_92_92;

                {
                  ll_backend__code_loc_dep__clobber_reg_3_p_0(ll_backend__call_gen__V_82_82, ll_backend__call_gen__STATE_VARIABLE_CLD_0_6, ll_backend__call_gen__STATE_VARIABLE_CLD_7);
                }
                {
                  ll_backend__call_gen__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_92_92, 0) = ((MR_Box) (ll_backend__call_gen__Method_35));
                }
                {
                  ll_backend__call_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_91_91, 1) = ((MR_Box) (ll_backend__call_gen__V_92_92));
                }
                {
                  ll_backend__call_gen__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_87_87, 1) = ((MR_Box) (ll_backend__call_gen__V_82_82));
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_87_87, 2) = ((MR_Box) (ll_backend__call_gen__V_91_91));
                }
                {
                  ll_backend__call_gen__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_86_86, 0) = ((MR_Box) (ll_backend__call_gen__V_87_87));
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_86_86, 1) = ((MR_Box) ((MR_String) "Index of class method in typeclass info"));
                }
                {
                  *ll_backend__call_gen__Code_5 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__call_gen__V_86_86)));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ll_backend__call_gen__NumInVarsR_45;
                MR_Integer ll_backend__call_gen__NumInVars_47;
                MR_Word ll_backend__call_gen__V_63_63;
                MR_Word ll_backend__call_gen__V_64_64;
                MR_Word ll_backend__call_gen__V_65_65;
                MR_Word ll_backend__call_gen__V_69_69;
                MR_Word ll_backend__call_gen__V_70_70;
                MR_Word ll_backend__call_gen__V_72_72;
                MR_Word ll_backend__call_gen__V_73_73;
                MR_Word ll_backend__call_gen__V_74_74;
                MR_Word ll_backend__call_gen__V_78_78;
                MR_Word ll_backend__call_gen__V_79_79;

                {
                  ll_backend__code_loc_dep__clobber_regs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[4]), ll_backend__call_gen__STATE_VARIABLE_CLD_0_6, ll_backend__call_gen__STATE_VARIABLE_CLD_7);
                }
                {
                  mercury__list__length_2_p_0((MR_Word) &ll_backend__call_gen_scalar_common_1[0], ll_backend__call_gen__InVarsR_3, &ll_backend__call_gen__NumInVarsR_45);
                }
                {
                  ll_backend__call_gen__NumInVars_47 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(ll_backend__call_gen__NumInVarsR_45, (MR_Integer) 0);
                }
                {
                  ll_backend__call_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_70_70, 0) = ((MR_Box) (ll_backend__call_gen__Method_35));
                }
                {
                  ll_backend__call_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_69_69, 1) = ((MR_Box) (ll_backend__call_gen__V_70_70));
                }
                {
                  ll_backend__call_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[3])));
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_65_65, 2) = ((MR_Box) (ll_backend__call_gen__V_69_69));
                }
                {
                  ll_backend__call_gen__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_64_64, 0) = ((MR_Box) (ll_backend__call_gen__V_65_65));
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_64_64, 1) = ((MR_Box) ((MR_String) "Index of class method in typeclass info"));
                }
                {
                  ll_backend__call_gen__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_79_79, 0) = ((MR_Box) (ll_backend__call_gen__NumInVars_47));
                }
                {
                  ll_backend__call_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_78_78, 1) = ((MR_Box) (ll_backend__call_gen__V_79_79));
                }
                {
                  ll_backend__call_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[1])));
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_74_74, 2) = ((MR_Box) (ll_backend__call_gen__V_78_78));
                }
                {
                  ll_backend__call_gen__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_73_73, 0) = ((MR_Box) (ll_backend__call_gen__V_74_74));
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_73_73, 1) = ((MR_Box) ((MR_String) "Assign number of immediate regular input arguments"));
                }
                {
                  ll_backend__call_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_72_72, 0) = ((MR_Box) (ll_backend__call_gen__V_73_73));
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  ll_backend__call_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_63_63, 0) = ((MR_Box) (ll_backend__call_gen__V_64_64));
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_63_63, 1) = ((MR_Box) (ll_backend__call_gen__V_72_72));
                }
                {
                  *ll_backend__call_gen__Code_5 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__call_gen__V_63_63);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/7", (MR_String) "event_call");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/7", (MR_String) "cast");
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__call_gen__extra_livevals_from_3_p_0(
  MR_Integer ll_backend__call_gen__Reg_4,
  MR_Integer ll_backend__call_gen__FirstInput_5,
  MR_Word * ll_backend__call_gen__ExtraLiveVals_6)
{
  {
    MR_bool ll_backend__call_gen__succeeded = (ll_backend__call_gen__Reg_4 < ll_backend__call_gen__FirstInput_5);

    if (ll_backend__call_gen__succeeded)
      {
        MR_Word ll_backend__call_gen__ExtraLiveVals1_7;
        MR_Integer ll_backend__call_gen__NextReg_8;
        MR_Word ll_backend__call_gen__V_9_9;

        {
          ll_backend__call_gen__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_9_9, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_9_9, 1) = ((MR_Box) (ll_backend__call_gen__Reg_4));
        }
        ll_backend__call_gen__NextReg_8 = (ll_backend__call_gen__Reg_4 + (MR_Integer) 1);
        {
          ll_backend__call_gen__extra_livevals_from_3_p_0(ll_backend__call_gen__NextReg_8, ll_backend__call_gen__FirstInput_5, &ll_backend__call_gen__ExtraLiveVals1_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__call_gen__ExtraLiveVals_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_9_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__ExtraLiveVals1_7));
        }
      }
    else
      *ll_backend__call_gen__ExtraLiveVals_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
ll_backend__call_gen__extra_livevals_2_p_0(
  MR_Integer ll_backend__call_gen__FirstInput_3,
  MR_Word * ll_backend__call_gen__ExtraLiveVals_4)
{
  {
    MR_bool ll_backend__call_gen__succeeded;

    {
      ll_backend__call_gen__extra_livevals_from_3_p_0((MR_Integer) 1, ll_backend__call_gen__FirstInput_3, ll_backend__call_gen__ExtraLiveVals_4);
    }
  }
}

static void MR_CALL 
ll_backend__call_gen__generate_event_attributes_7_p_0(
  MR_Word ll_backend__call_gen__HeadVar__1_1,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_Vars_0_2,
  MR_Word * ll_backend__call_gen__HeadVar__3_3,
  MR_Word * ll_backend__call_gen__HeadVar__4_4,
  MR_Word ll_backend__call_gen__HeadVar__5_5,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_6,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_7)
{
  {
    MR_bool ll_backend__call_gen__succeeded;

    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__call_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__call_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        if ((ll_backend__call_gen__STATE_VARIABLE_Vars_0_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_event_attributes\'/7", (MR_String) "var");
              return;
            }
          }
        *ll_backend__call_gen__STATE_VARIABLE_CLD_7 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_6;
      }
    else
      {
        MR_Word ll_backend__call_gen__Attribute_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__call_gen__Attributes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__call_gen__MaybeUserAttr_22;
        MR_Word ll_backend__call_gen__MaybeUserAttrs_23;
        MR_Word ll_backend__call_gen__Code_24;
        MR_Word ll_backend__call_gen__Codes_25;
        MR_Word ll_backend__call_gen__SynthCall_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_19, (MR_Integer) 4)));
        MR_Word ll_backend__call_gen__STATE_VARIABLE_Vars_39_39;
        MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_40_40;
        MR_Integer ll_backend__call_gen__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_19, (MR_Integer) 0)));
        MR_String ll_backend__call_gen__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_19, (MR_Integer) 1)));
        MR_Word ll_backend__call_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_19, (MR_Integer) 2)));
        MR_Word ll_backend__call_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_19, (MR_Integer) 3)));

        if ((ll_backend__call_gen__SynthCall_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((ll_backend__call_gen__STATE_VARIABLE_Vars_0_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_event_attributes\'/7", (MR_String) "no var");
                return;
              }
            }
          else
            {
              MR_Word ll_backend__call_gen__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__STATE_VARIABLE_Vars_0_2, (MR_Integer) 0)));
              MR_Word ll_backend__call_gen__Rval_30;
              MR_Word ll_backend__call_gen__UserAttr_31;

              ll_backend__call_gen__STATE_VARIABLE_Vars_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__STATE_VARIABLE_Vars_0_2, (MR_Integer) 1)));
              {
                ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__call_gen__Var_29, &ll_backend__call_gen__Code_24, &ll_backend__call_gen__Rval_30, ll_backend__call_gen__HeadVar__5_5, ll_backend__call_gen__STATE_VARIABLE_CLD_0_6, &ll_backend__call_gen__STATE_VARIABLE_CLD_40_40);
              }
              {
                ll_backend__call_gen__UserAttr_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__UserAttr_31, 0) = ((MR_Box) (ll_backend__call_gen__Rval_30));
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__UserAttr_31, 1) = ((MR_Box) (ll_backend__call_gen__Var_29));
              }
              {
                ll_backend__call_gen__MaybeUserAttr_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeUserAttr_22, 0) = ((MR_Box) (ll_backend__call_gen__UserAttr_31));
              }
            }
        else
          {
            ll_backend__call_gen__MaybeUserAttr_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              ll_backend__call_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
            ll_backend__call_gen__STATE_VARIABLE_Vars_39_39 = ll_backend__call_gen__STATE_VARIABLE_Vars_0_2;
            ll_backend__call_gen__STATE_VARIABLE_CLD_40_40 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_6;
          }
        {
          ll_backend__call_gen__generate_event_attributes_7_p_0(ll_backend__call_gen__Attributes_20, ll_backend__call_gen__STATE_VARIABLE_Vars_39_39, &ll_backend__call_gen__MaybeUserAttrs_23, &ll_backend__call_gen__Codes_25, ll_backend__call_gen__HeadVar__5_5, ll_backend__call_gen__STATE_VARIABLE_CLD_40_40, ll_backend__call_gen__STATE_VARIABLE_CLD_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__call_gen__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__MaybeUserAttr_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__MaybeUserAttrs_23));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__call_gen__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__Code_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__Codes_25));
        }
      }
  }
}

void MR_CALL 
ll_backend__call_gen__output_arg_locs_2_p_0(
  MR_Word ll_backend__call_gen__HeadVar__1_1,
  MR_Word * ll_backend__call_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__call_gen__succeeded;

    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__call_gen__Var_3;
        MR_Word ll_backend__call_gen__Loc_4;
        MR_Word ll_backend__call_gen__Mode_5;
        MR_Word ll_backend__call_gen__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__call_gen__Vs0_8;
        MR_Word ll_backend__call_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__call_gen__V_10_10;

        ll_backend__call_gen__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_9_9, (MR_Integer) 0)));
        ll_backend__call_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_9_9, (MR_Integer) 1)));
        ll_backend__call_gen__Loc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_10_10, (MR_Integer) 0)));
        ll_backend__call_gen__Mode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_10_10, (MR_Integer) 1)));
        {
          ll_backend__call_gen__output_arg_locs_2_p_0(ll_backend__call_gen__Args_6, &ll_backend__call_gen__Vs0_8);
        }
        switch (ll_backend__call_gen__Mode_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *ll_backend__call_gen__HeadVar__2_2 = ll_backend__call_gen__Vs0_8;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__call_gen__V_11_11;

              {
                ll_backend__call_gen__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_11_11, 0) = ((MR_Box) (ll_backend__call_gen__Var_3));
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_11_11, 1) = ((MR_Box) (ll_backend__call_gen__Loc_4));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__call_gen__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_11_11));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__Vs0_8));
              }
            }
            break;
        }
      }
  }
}

void MR_CALL 
ll_backend__call_gen__input_arg_locs_2_p_0(
  MR_Word ll_backend__call_gen__HeadVar__1_1,
  MR_Word * ll_backend__call_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__call_gen__succeeded;

    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__call_gen__Var_3;
        MR_Word ll_backend__call_gen__Loc_4;
        MR_Word ll_backend__call_gen__Mode_5;
        MR_Word ll_backend__call_gen__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__call_gen__Vs0_8;
        MR_Word ll_backend__call_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__call_gen__V_10_10;

        ll_backend__call_gen__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_9_9, (MR_Integer) 0)));
        ll_backend__call_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_9_9, (MR_Integer) 1)));
        ll_backend__call_gen__Loc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_10_10, (MR_Integer) 0)));
        ll_backend__call_gen__Mode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_10_10, (MR_Integer) 1)));
        {
          ll_backend__call_gen__input_arg_locs_2_p_0(ll_backend__call_gen__Args_6, &ll_backend__call_gen__Vs0_8);
        }
        switch (ll_backend__call_gen__Mode_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__call_gen__V_11_11;

              {
                ll_backend__call_gen__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_11_11, 0) = ((MR_Box) (ll_backend__call_gen__Var_3));
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_11_11, 1) = ((MR_Box) (ll_backend__call_gen__Loc_4));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__call_gen__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_11_11));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__Vs0_8));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *ll_backend__call_gen__HeadVar__2_2 = ll_backend__call_gen__Vs0_8;
            break;
        }
      }
  }
}

void MR_CALL 
ll_backend__call_gen__generic_call_info_8_p_0(
  MR_Word ll_backend__call_gen__Globals_9,
  MR_Word ll_backend__call_gen__GenericCall_10,
  MR_Integer ll_backend__call_gen__NumInputArgsR_11,
  MR_Integer ll_backend__call_gen__NumInputArgsF_12,
  MR_Word * ll_backend__call_gen__CodeAddr_13,
  MR_Word * ll_backend__call_gen__SpecifierArgInfos_14,
  MR_Integer * ll_backend__call_gen__FirstImmediateInputReg_15,
  MR_Word * ll_backend__call_gen__HoCallVariant_16)
{
  {
    MR_bool ll_backend__call_gen__succeeded;

    switch (MR_tag((MR_Word) ll_backend__call_gen__GenericCall_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__call_gen__PredVar_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__GenericCall_10, (MR_Integer) 0)));
          MR_Integer ll_backend__call_gen__MaxSpec_22;
          MR_Word ll_backend__call_gen__V_44_44;
          MR_Word ll_backend__call_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__GenericCall_10, (MR_Integer) 1)));
          MR_Word ll_backend__call_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__GenericCall_10, (MR_Integer) 2)));
          MR_Integer ll_backend__call_gen__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__GenericCall_10, (MR_Integer) 3)));

          {
            ll_backend__call_gen__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_44_44, 0) = ((MR_Box) (ll_backend__call_gen__PredVar_17));
            MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_44_44, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_1[6]));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__call_gen__SpecifierArgInfos_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_44_44));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            libs__globals__lookup_int_option_3_p_0(ll_backend__call_gen__Globals_9, (MR_Integer) 310, &ll_backend__call_gen__MaxSpec_22);
          }
          ll_backend__call_gen__succeeded = (ll_backend__call_gen__MaxSpec_22 >= (MR_Integer) 0);
          if (ll_backend__call_gen__succeeded)
            {
              ll_backend__call_gen__succeeded = (ll_backend__call_gen__NumInputArgsR_11 <= ll_backend__call_gen__MaxSpec_22);
              if (ll_backend__call_gen__succeeded)
                ll_backend__call_gen__succeeded = (ll_backend__call_gen__NumInputArgsF_12 == (MR_Integer) 0);
            }
          if (ll_backend__call_gen__succeeded)
            {
              MR_Word ll_backend__call_gen__V_50_50;

              {
                ll_backend__call_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_50_50, 0) = ((MR_Box) (ll_backend__call_gen__NumInputArgsR_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__call_gen__CodeAddr_13 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__call_gen__V_50_50));
              }
              *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 0;
              *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 2;
            }
          else
            {
              *ll_backend__call_gen__CodeAddr_13 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__call_gen_scalar_common_1[8]);
              *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 1;
              *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 3;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__call_gen__TCVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__GenericCall_10, (MR_Integer) 0)));
          MR_Word ll_backend__call_gen__V_31_31;
          MR_Integer ll_backend__call_gen__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__GenericCall_10, (MR_Integer) 1)));
          MR_Word ll_backend__call_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__GenericCall_10, (MR_Integer) 2)));
          MR_Word ll_backend__call_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__GenericCall_10, (MR_Integer) 3)));

          {
            ll_backend__call_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_31_31, 0) = ((MR_Box) (ll_backend__call_gen__TCVar_23));
            MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_31_31, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_1[6]));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__call_gen__SpecifierArgInfos_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_31_31));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          ll_backend__call_gen__succeeded = (ll_backend__call_gen__NumInputArgsF_12 == (MR_Integer) 0);
          if (ll_backend__call_gen__succeeded)
            {
              MR_Integer ll_backend__call_gen__MaxSpec_52;

              {
                libs__globals__lookup_int_option_3_p_0(ll_backend__call_gen__Globals_9, (MR_Integer) 311, &ll_backend__call_gen__MaxSpec_52);
              }
              ll_backend__call_gen__succeeded = (ll_backend__call_gen__MaxSpec_52 >= (MR_Integer) 0);
              if (ll_backend__call_gen__succeeded)
                ll_backend__call_gen__succeeded = (ll_backend__call_gen__NumInputArgsR_11 <= ll_backend__call_gen__MaxSpec_52);
              if (ll_backend__call_gen__succeeded)
                {
                  MR_Word ll_backend__call_gen__V_37_37;

                  {
                    ll_backend__call_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_37_37, 0) = ((MR_Box) (ll_backend__call_gen__NumInputArgsR_11));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__call_gen__CodeAddr_13 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__call_gen__V_37_37));
                  }
                  *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 0;
                  *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 3;
                }
              else
                {
                  *ll_backend__call_gen__CodeAddr_13 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__call_gen_scalar_common_1[7]);
                  *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 1;
                  *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 4;
                }
            }
          else
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generic_call_info\'/8", (MR_String) "float reg inputs");
                return;
              }
            }
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          *ll_backend__call_gen__CodeAddr_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
          *ll_backend__call_gen__SpecifierArgInfos_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 1;
          *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 1;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__call_gen__generate_builtin_9_p_0_1(
  MR_Box ll_backend__call_gen__closure_arg,
  MR_Box ll_backend__call_gen__wrapper_arg_1,
  MR_Box ll_backend__call_gen__wrapper_arg_2,
  MR_Box * ll_backend__call_gen__wrapper_arg_3)
{
  {
    MR_Box ll_backend__call_gen__closure = ll_backend__call_gen__closure_arg;
    MR_Word ll_backend__call_gen__conv0_HeadVar__3_3;

    {
      ll_backend__code_loc_dep__magically_put_var_in_unused_reg_3_p_0(((MR_Word) ll_backend__call_gen__wrapper_arg_1), ((MR_Word) ll_backend__call_gen__wrapper_arg_2), &ll_backend__call_gen__conv0_HeadVar__3_3);
    }
    *ll_backend__call_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__call_gen__conv0_HeadVar__3_3));
  }
}

void MR_CALL 
ll_backend__call_gen__generate_builtin_9_p_0(
  MR_Word ll_backend__call_gen__CodeModel_10,
  MR_Word ll_backend__call_gen__PredId_11,
  MR_Integer ll_backend__call_gen__ProcId_12,
  MR_Word ll_backend__call_gen__Args_13,
  MR_Word * ll_backend__call_gen__Code_14,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_42,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_43,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_44,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_45)
{
  {
    MR_bool ll_backend__call_gen__succeeded;
    MR_Word ll_backend__call_gen__TypeInfo_73_73;
    MR_Word ll_backend__call_gen__ModuleInfo_17;
    MR_Word ll_backend__call_gen__ModuleName_18;
    MR_String ll_backend__call_gen__PredName_19;
    MR_Word ll_backend__call_gen__SimpleCode_20;

    {
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_42, &ll_backend__call_gen__ModuleInfo_17);
    }
    {
      ll_backend__call_gen__ModuleName_18 = hlds__hlds_module__predicate_module_2_f_0(ll_backend__call_gen__ModuleInfo_17, ll_backend__call_gen__PredId_11);
    }
    {
      ll_backend__call_gen__PredName_19 = hlds__hlds_module__predicate_name_2_f_0(ll_backend__call_gen__ModuleInfo_17, ll_backend__call_gen__PredId_11);
    }
    ll_backend__call_gen__TypeInfo_73_73 = (MR_Word) &ll_backend__call_gen_scalar_common_1[0];
    {
      backend_libs__builtin_ops__translate_builtin_5_p_0(ll_backend__call_gen__TypeInfo_73_73, ll_backend__call_gen__ModuleName_18, ll_backend__call_gen__PredName_19, ll_backend__call_gen__ProcId_12, ll_backend__call_gen__Args_13, &ll_backend__call_gen__SimpleCode_20);
    }
    switch (ll_backend__call_gen__CodeModel_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          switch (MR_tag((MR_Word) ll_backend__call_gen__SimpleCode_20)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ll_backend__call_gen__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__SimpleCode_20, (MR_Integer) 0)));
                MR_Word ll_backend__call_gen__AssignExpr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__SimpleCode_20, (MR_Integer) 1)));

                {
                  ll_backend__call_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_0_44, ll_backend__call_gen__Var_21);
                }
                if (ll_backend__call_gen__succeeded)
                  {
                    MR_Word ll_backend__call_gen__Rval_87;

                    {
                      ll_backend__call_gen__Rval_87 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__AssignExpr_22);
                    }
                    {
                      ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ll_backend__call_gen__Var_21, ll_backend__call_gen__Rval_87, ll_backend__call_gen__Code_14, ll_backend__call_gen__STATE_VARIABLE_CLD_0_44, ll_backend__call_gen__STATE_VARIABLE_CLD_45);
                    }
                  }
                else
                  {
                    {
                      *ll_backend__call_gen__Code_14 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                    }
                    *ll_backend__call_gen__STATE_VARIABLE_CLD_45 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_44;
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ll_backend__call_gen__TypeCtorInfo_74_74;
                MR_Word ll_backend__call_gen__AddrVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__SimpleCode_20, (MR_Integer) 0)));
                MR_Word ll_backend__call_gen__ValueVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__SimpleCode_20, (MR_Integer) 1)));
                MR_Word ll_backend__call_gen__AddrVarCode_25;
                MR_Word ll_backend__call_gen__AddrRval_26;
                MR_Word ll_backend__call_gen__ValueVarCode_27;
                MR_Word ll_backend__call_gen__ValueRval_28;
                MR_Word ll_backend__call_gen__StoreInstr_29;
                MR_Word ll_backend__call_gen__StoreCode_30;
                MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_66_66;
                MR_Word ll_backend__call_gen__V_68_68;
                MR_Word ll_backend__call_gen__V_69_69;
                MR_Word ll_backend__call_gen__V_71_71;

                {
                  ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__call_gen__AddrVar_23, &ll_backend__call_gen__AddrVarCode_25, &ll_backend__call_gen__AddrRval_26, ll_backend__call_gen__STATE_VARIABLE_CI_0_42, ll_backend__call_gen__STATE_VARIABLE_CLD_0_44, &ll_backend__call_gen__STATE_VARIABLE_CLD_66_66);
                }
                {
                  ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__call_gen__ValueVar_24, &ll_backend__call_gen__ValueVarCode_27, &ll_backend__call_gen__ValueRval_28, ll_backend__call_gen__STATE_VARIABLE_CI_0_42, ll_backend__call_gen__STATE_VARIABLE_CLD_66_66, ll_backend__call_gen__STATE_VARIABLE_CLD_45);
                }
                {
                  ll_backend__call_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_69_69, 1) = ((MR_Box) (ll_backend__call_gen__AddrRval_26));
                }
                {
                  ll_backend__call_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_68_68, 1) = ((MR_Box) (ll_backend__call_gen__V_69_69));
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_68_68, 2) = ((MR_Box) (ll_backend__call_gen__ValueRval_28));
                }
                {
                  ll_backend__call_gen__StoreInstr_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__StoreInstr_29, 0) = ((MR_Box) (ll_backend__call_gen__V_68_68));
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__StoreInstr_29, 1) = ((MR_Box) ((MR_String) ""));
                }
                ll_backend__call_gen__TypeCtorInfo_74_74 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                {
                  ll_backend__call_gen__StoreCode_30 = mercury__cord__singleton_1_f_0(ll_backend__call_gen__TypeCtorInfo_74_74, ((MR_Box) (ll_backend__call_gen__StoreInstr_29)));
                }
                {
                  ll_backend__call_gen__V_71_71 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_74_74, ll_backend__call_gen__ValueVarCode_27, ll_backend__call_gen__StoreCode_30);
                }
                {
                  *ll_backend__call_gen__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_74_74, ll_backend__call_gen__AddrVarCode_25, ll_backend__call_gen__V_71_71);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/9", (MR_String) "malformed model_det builtin predicate");
                  return;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ll_backend__call_gen__DefinedVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__SimpleCode_20, (MR_Integer) 0)));
                MR_Box ll_backend__call_gen__conv1_STATE_VARIABLE_CLD_45;

                {
                  mercury__list__foldl_4_p_0(ll_backend__call_gen__TypeInfo_73_73, (MR_Word) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0, (MR_Word) &ll_backend__call_gen_scalar_common_2[1], ll_backend__call_gen__DefinedVars_32, ((MR_Box) (ll_backend__call_gen__STATE_VARIABLE_CLD_0_44)), &ll_backend__call_gen__conv1_STATE_VARIABLE_CLD_45);
                }
                *ll_backend__call_gen__STATE_VARIABLE_CLD_45 = ((MR_Word) ll_backend__call_gen__conv1_STATE_VARIABLE_CLD_45);
                {
                  *ll_backend__call_gen__Code_14 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
              }
              break;
          }
          *ll_backend__call_gen__STATE_VARIABLE_CI_43 = ll_backend__call_gen__STATE_VARIABLE_CI_0_42;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/9", (MR_String) "model_non builtin predicate");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) ll_backend__call_gen__SimpleCode_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__call_gen__TestExpr_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__call_gen__SimpleCode_20, (MR_Integer) 0)));
              MR_Word ll_backend__call_gen__Rval_34;
              MR_Word ll_backend__call_gen__ArgCode_35;
              MR_Word ll_backend__call_gen__TestCode_36;
              MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_58_58;

              {
                ll_backend__call_gen__generate_simple_test_6_p_0(ll_backend__call_gen__TestExpr_33, &ll_backend__call_gen__Rval_34, &ll_backend__call_gen__ArgCode_35, ll_backend__call_gen__STATE_VARIABLE_CI_0_42, ll_backend__call_gen__STATE_VARIABLE_CLD_0_44, &ll_backend__call_gen__STATE_VARIABLE_CLD_58_58);
              }
              {
                ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(ll_backend__call_gen__Rval_34, &ll_backend__call_gen__TestCode_36, ll_backend__call_gen__STATE_VARIABLE_CI_0_42, ll_backend__call_gen__STATE_VARIABLE_CI_43, ll_backend__call_gen__STATE_VARIABLE_CLD_58_58, ll_backend__call_gen__STATE_VARIABLE_CLD_45);
              }
              {
                *ll_backend__call_gen__Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__call_gen__ArgCode_35, ll_backend__call_gen__TestCode_36);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__call_gen__generate_generic_call_12_p_0(
  MR_Word ll_backend__call_gen__OuterCodeModel_13,
  MR_Word ll_backend__call_gen__GenericCall_14,
  MR_Word ll_backend__call_gen__Args_15,
  MR_Word ll_backend__call_gen__Modes_16,
  MR_Word ll_backend__call_gen__MaybeRegTypes_17,
  MR_Word ll_backend__call_gen__Det_18,
  MR_Word ll_backend__call_gen__GoalInfo_19,
  MR_Word * ll_backend__call_gen__Code_20,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_39,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_40,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_41,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_42)
{
  {
    MR_bool ll_backend__call_gen__succeeded;

    {
      ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(ll_backend__call_gen__GenericCall_14, ll_backend__call_gen__Args_15, ll_backend__call_gen__Modes_16, ll_backend__call_gen__MaybeRegTypes_17, ll_backend__call_gen__Det_18, ll_backend__call_gen__GoalInfo_19, ll_backend__call_gen__Code_20, ll_backend__call_gen__STATE_VARIABLE_CI_0_39, ll_backend__call_gen__STATE_VARIABLE_CI_40, ll_backend__call_gen__STATE_VARIABLE_CLD_0_41, ll_backend__call_gen__STATE_VARIABLE_CLD_42);
    }
  }
}

void MR_CALL 
ll_backend__call_gen__generate_call_10_p_0(
  MR_Word ll_backend__call_gen__CodeModel_11,
  MR_Word ll_backend__call_gen__PredId_12,
  MR_Integer ll_backend__call_gen__ProcId_13,
  MR_Word ll_backend__call_gen__ArgVars_14,
  MR_Word ll_backend__call_gen__GoalInfo_15,
  MR_Word * ll_backend__call_gen__Code_16,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_48,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_49,
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_50,
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_51)
{
  {
    MR_bool ll_backend__call_gen__succeeded;
    MR_Word ll_backend__call_gen__TypeCtorInfo_92_92;
    MR_Word ll_backend__call_gen__ArgInfo_19;
    MR_Word ll_backend__call_gen__ArgsInfos_20;
    MR_Word ll_backend__call_gen__LiveVals_21;
    MR_Word ll_backend__call_gen__SetupCode_22;
    MR_Word ll_backend__call_gen__CallModel_24;
    MR_Word ll_backend__call_gen__TraceResetCode_25;
    MR_Word ll_backend__call_gen__ModuleInfo_26;
    MR_Word ll_backend__call_gen__Address_27;
    MR_Word ll_backend__call_gen__ReturnLabel_28;
    MR_String ll_backend__call_gen__CallComment_29;
    MR_Word ll_backend__call_gen__Context_30;
    MR_Word ll_backend__call_gen__GoalId_31;
    MR_Word ll_backend__call_gen__MaybeContainingGoalMap_32;
    MR_Word ll_backend__call_gen__MaybeGoalPath_35;
    MR_Word ll_backend__call_gen__CallCode_36;
    MR_Word ll_backend__call_gen__ReturnLiveLvalues_37;
    MR_Word ll_backend__call_gen__InstMap_38;
    MR_Word ll_backend__call_gen__InstMapDelta_39;
    MR_Word ll_backend__call_gen__ReturnInstMap_40;
    MR_Word ll_backend__call_gen__AfterReturn_41;
    MR_Word ll_backend__call_gen__FailHandlingCode_42;
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_52_52;
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_53_53;
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_54_54;
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_55_55;
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_57_57;
    MR_Word ll_backend__call_gen__V_58_58;
    MR_Word ll_backend__call_gen__V_59_59;
    MR_Word ll_backend__call_gen__V_60_60;
    MR_Word ll_backend__call_gen__V_62_62;
    MR_Word ll_backend__call_gen__V_63_63;
    MR_Word ll_backend__call_gen__V_64_64;
    MR_Word ll_backend__call_gen__V_65_65;
    MR_Word ll_backend__call_gen__V_66_66;
    MR_Word ll_backend__call_gen__V_67_67;
    MR_Word ll_backend__call_gen__V_68_68;
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_71_71;
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_72_72;
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_73_73;
    MR_Word ll_backend__call_gen__NonLiveOutputs_23;
    MR_Word ll_backend__call_gen__TraceInfo_44;
    MR_Word ll_backend__call_gen__MaybeTraceInfo_43;

    {
      ll_backend__call_gen__ArgInfo_19 = ll_backend__code_info__get_pred_proc_arginfo_3_f_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_48, ll_backend__call_gen__PredId_12, ll_backend__call_gen__ProcId_13);
    }
    {
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &ll_backend__call_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, ll_backend__call_gen__ArgVars_14, ll_backend__call_gen__ArgInfo_19, &ll_backend__call_gen__ArgsInfos_20);
    }
    {
      ll_backend__code_loc_dep__setup_call_7_p_0(ll_backend__call_gen__GoalInfo_15, ll_backend__call_gen__ArgsInfos_20, &ll_backend__call_gen__LiveVals_21, &ll_backend__call_gen__SetupCode_22, ll_backend__call_gen__STATE_VARIABLE_CI_0_48, ll_backend__call_gen__STATE_VARIABLE_CLD_0_50, &ll_backend__call_gen__STATE_VARIABLE_CLD_52_52);
    }
    {
      ll_backend__call_gen__kill_dead_input_vars_5_p_0(ll_backend__call_gen__ArgsInfos_20, ll_backend__call_gen__GoalInfo_15, &ll_backend__call_gen__NonLiveOutputs_23, ll_backend__call_gen__STATE_VARIABLE_CLD_52_52, &ll_backend__call_gen__STATE_VARIABLE_CLD_53_53);
    }
    {
      ll_backend__call_gen__prepare_for_call_8_p_0(ll_backend__call_gen__CodeModel_11, ll_backend__call_gen__GoalInfo_15, &ll_backend__call_gen__CallModel_24, &ll_backend__call_gen__TraceResetCode_25, ll_backend__call_gen__STATE_VARIABLE_CI_0_48, &ll_backend__call_gen__STATE_VARIABLE_CI_54_54, ll_backend__call_gen__STATE_VARIABLE_CLD_53_53, &ll_backend__call_gen__STATE_VARIABLE_CLD_55_55);
    }
    {
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_54_54, &ll_backend__call_gen__ModuleInfo_26);
    }
    {
      ll_backend__call_gen__Address_27 = ll_backend__code_info__make_proc_entry_label_5_f_0(ll_backend__call_gen__STATE_VARIABLE_CI_54_54, ll_backend__call_gen__ModuleInfo_26, ll_backend__call_gen__PredId_12, ll_backend__call_gen__ProcId_13, (MR_Integer) 1);
    }
    {
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__call_gen__ReturnLabel_28, ll_backend__call_gen__STATE_VARIABLE_CI_54_54, &ll_backend__call_gen__STATE_VARIABLE_CI_57_57);
    }
    {
      ll_backend__call_gen__call_comment_4_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_57_57, ll_backend__call_gen__PredId_12, ll_backend__call_gen__CodeModel_11, &ll_backend__call_gen__CallComment_29);
    }
    {
      ll_backend__call_gen__Context_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__call_gen__GoalInfo_15);
    }
    {
      ll_backend__call_gen__GoalId_31 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__call_gen__GoalInfo_15);
    }
    {
      ll_backend__code_info__get_maybe_containing_goal_map_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_57_57, &ll_backend__call_gen__MaybeContainingGoalMap_32);
    }
    if ((ll_backend__call_gen__MaybeContainingGoalMap_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__call_gen__MaybeGoalPath_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__call_gen__ContainingGoalMap_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeContainingGoalMap_32, (MR_Integer) 0)));
        MR_Word ll_backend__call_gen__GoalPath_34;

        {
          ll_backend__call_gen__GoalPath_34 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__call_gen__ContainingGoalMap_33, ll_backend__call_gen__GoalId_31);
        }
        {
          ll_backend__call_gen__MaybeGoalPath_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeGoalPath_35, 0) = ((MR_Box) (ll_backend__call_gen__GoalPath_34));
        }
      }
    ll_backend__call_gen__TypeCtorInfo_92_92 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__call_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ll_backend__call_gen__V_60_60, 0) = ((MR_Box) (ll_backend__call_gen__LiveVals_21));
    }
    {
      ll_backend__call_gen__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_59_59, 0) = ((MR_Box) (ll_backend__call_gen__V_60_60));
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_59_59, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      ll_backend__call_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_65_65, 0) = ((MR_Box) (ll_backend__call_gen__ReturnLabel_28));
    }
    {
      ll_backend__call_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_68_68, 1) = ((MR_Box) (ll_backend__call_gen__ReturnLabel_28));
    }
    {
      ll_backend__call_gen__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_67_67, 0) = ((MR_Box) (ll_backend__call_gen__V_68_68));
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_67_67, 1) = ((MR_Box) ((MR_String) "continuation label"));
    }
    {
      ll_backend__call_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_66_66, 0) = ((MR_Box) (ll_backend__call_gen__V_67_67));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_55_55, &ll_backend__call_gen__InstMap_38);
    }
    {
      ll_backend__call_gen__InstMapDelta_39 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__call_gen__GoalInfo_15);
    }
    {
      hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__call_gen__InstMap_38, ll_backend__call_gen__InstMapDelta_39, &ll_backend__call_gen__ReturnInstMap_40);
    }
    {
      ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_8_p_0(ll_backend__call_gen__ArgsInfos_20, ll_backend__call_gen__GoalInfo_15, ll_backend__call_gen__ReturnInstMap_40, &ll_backend__call_gen__ReturnLiveLvalues_37, ll_backend__call_gen__STATE_VARIABLE_CI_57_57, ll_backend__call_gen__STATE_VARIABLE_CLD_55_55, &ll_backend__call_gen__STATE_VARIABLE_CLD_71_71);
    }
    {
      ll_backend__call_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 1) = ((MR_Box) (ll_backend__call_gen__Address_27));
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 2) = ((MR_Box) (ll_backend__call_gen__V_65_65));
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 3) = ((MR_Box) (ll_backend__call_gen__ReturnLiveLvalues_37));
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 4) = ((MR_Box) (ll_backend__call_gen__Context_30));
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 5) = ((MR_Box) (ll_backend__call_gen__MaybeGoalPath_35));
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 6) = ((MR_Box) (ll_backend__call_gen__CallModel_24));
    }
    {
      ll_backend__call_gen__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_63_63, 0) = ((MR_Box) (ll_backend__call_gen__V_64_64));
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_63_63, 1) = ((MR_Box) (ll_backend__call_gen__CallComment_29));
    }
    {
      ll_backend__call_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_62_62, 0) = ((MR_Box) (ll_backend__call_gen__V_63_63));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_62_62, 1) = ((MR_Box) (ll_backend__call_gen__V_66_66));
    }
    {
      ll_backend__call_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_58_58, 0) = ((MR_Box) (ll_backend__call_gen__V_59_59));
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_58_58, 1) = ((MR_Box) (ll_backend__call_gen__V_62_62));
    }
    {
      ll_backend__call_gen__CallCode_36 = mercury__cord__from_list_1_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__V_58_58);
    }
    {
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_71_71, &ll_backend__call_gen__AfterReturn_41);
    }
    {
      ll_backend__call_gen__handle_call_failure_6_p_0(ll_backend__call_gen__CodeModel_11, ll_backend__call_gen__GoalInfo_15, &ll_backend__call_gen__FailHandlingCode_42, ll_backend__call_gen__STATE_VARIABLE_CI_57_57, &ll_backend__call_gen__STATE_VARIABLE_CI_72_72, ll_backend__call_gen__STATE_VARIABLE_CLD_71_71);
    }
    {
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__call_gen__AfterReturn_41, ll_backend__call_gen__STATE_VARIABLE_CI_72_72, &ll_backend__call_gen__STATE_VARIABLE_CLD_73_73);
    }
    {
      ll_backend__call_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__call_gen__GoalInfo_15, (MR_Integer) 10);
    }
    if (ll_backend__call_gen__succeeded)
      {
        {
          ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_72_72, &ll_backend__call_gen__MaybeTraceInfo_43);
        }
        ll_backend__call_gen__succeeded = ((MR_tag((MR_Word) ll_backend__call_gen__MaybeTraceInfo_43)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__call_gen__succeeded)
          ll_backend__call_gen__TraceInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeTraceInfo_43, (MR_Integer) 0)));
      }
    if (ll_backend__call_gen__succeeded)
      {
        MR_Word ll_backend__call_gen__TraceTailRecResetAndEventCode_45;
        MR_Word ll_backend__call_gen__TailRecLabel_46;
        MR_Word ll_backend__call_gen__JumpCode_47;
        MR_Word ll_backend__call_gen__V_77_77;
        MR_Word ll_backend__call_gen__V_81_81;
        MR_Word ll_backend__call_gen__V_82_82;
        MR_Word ll_backend__call_gen__V_83_83;
        MR_Word ll_backend__call_gen__V_84_84;
        MR_Word ll_backend__call_gen__V_87_87;

        {
          ll_backend__trace_gen__generate_tailrec_event_code_10_p_0(ll_backend__call_gen__TraceInfo_44, ll_backend__call_gen__ArgsInfos_20, ll_backend__call_gen__GoalId_31, ll_backend__call_gen__Context_30, &ll_backend__call_gen__TraceTailRecResetAndEventCode_45, &ll_backend__call_gen__TailRecLabel_46, ll_backend__call_gen__STATE_VARIABLE_CI_72_72, ll_backend__call_gen__STATE_VARIABLE_CI_49, ll_backend__call_gen__STATE_VARIABLE_CLD_73_73, ll_backend__call_gen__STATE_VARIABLE_CLD_51);
        }
        {
          ll_backend__call_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_84_84, 0) = ((MR_Box) (ll_backend__call_gen__TailRecLabel_46));
        }
        {
          ll_backend__call_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_83_83, 1) = ((MR_Box) (ll_backend__call_gen__V_84_84));
        }
        {
          ll_backend__call_gen__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_82_82, 0) = ((MR_Box) (ll_backend__call_gen__V_83_83));
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_82_82, 1) = ((MR_Box) ((MR_String) "tail recursive jump"));
        }
        {
          ll_backend__call_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_81_81, 0) = ((MR_Box) (ll_backend__call_gen__V_82_82));
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__call_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_77_77, 0) = ((MR_Box) (ll_backend__call_gen__V_59_59));
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_77_77, 1) = ((MR_Box) (ll_backend__call_gen__V_81_81));
        }
        {
          ll_backend__call_gen__JumpCode_47 = mercury__cord__from_list_1_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__V_77_77);
        }
        {
          ll_backend__call_gen__V_87_87 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__TraceTailRecResetAndEventCode_45, ll_backend__call_gen__JumpCode_47);
        }
        {
          *ll_backend__call_gen__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__SetupCode_22, ll_backend__call_gen__V_87_87);
        }
      }
    else
      {
        MR_Word ll_backend__call_gen__V_88_88;
        MR_Word ll_backend__call_gen__V_89_89;

        {
          ll_backend__call_gen__V_89_89 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__CallCode_36, ll_backend__call_gen__FailHandlingCode_42);
        }
        {
          ll_backend__call_gen__V_88_88 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__TraceResetCode_25, ll_backend__call_gen__V_89_89);
        }
        {
          *ll_backend__call_gen__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__SetupCode_22, ll_backend__call_gen__V_88_88);
        }
        *ll_backend__call_gen__STATE_VARIABLE_CLD_51 = ll_backend__call_gen__STATE_VARIABLE_CLD_73_73;
        *ll_backend__call_gen__STATE_VARIABLE_CI_49 = ll_backend__call_gen__STATE_VARIABLE_CI_72_72;
      }
  }
}

void mercury__ll_backend__call_gen__init(void)
{
}

void mercury__ll_backend__call_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__call_gen__ll_backend__call_gen__type_ctor_info_known_call_variant_0);
}

void mercury__ll_backend__call_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.call_gen. */
