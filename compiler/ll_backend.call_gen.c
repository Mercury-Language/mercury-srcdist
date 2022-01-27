/*
** Automatically generated from `call_gen.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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




#line 157 "ll_backend.call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "ll_backend.call_gen.c"
static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0;

#line 163 "ll_backend.call_gen.c"
static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1;

#line 166 "ll_backend.call_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_value_ordered_known_call_variant_0[2];

#line 169 "ll_backend.call_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_name_ordered_known_call_variant_0[2];

#line 172 "ll_backend.call_gen.c"
static const MR_Integer ll_backend__call_gen__ll_backend__call_gen__functor_number_map_known_call_variant_0[2];

#line 175 "ll_backend.call_gen.c"
static MR_bool MR_CALL 
ll_backend__call_gen____Unify____known_call_variant_0_0_10001(
#line 178 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_1,
#line 180 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_2);

#line 183 "ll_backend.call_gen.c"
static void MR_CALL 
ll_backend__call_gen____Compare____known_call_variant_0_0_10001(
#line 186 "ll_backend.call_gen.c"
  MR_Box * ll_backend__call_gen__wrapper_arg_1,
#line 188 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_2,
#line 190 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_3);

#line 619 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_8_p_0(
#line 619 "call_gen.m"
  MR_Word ll_backend__call_gen__ArgsInfos_9,
#line 619 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_10,
#line 619 "call_gen.m"
  MR_Word ll_backend__call_gen__ReturnInstMap_12,
#line 619 "call_gen.m"
  MR_Word * ll_backend__call_gen__ReturnLiveLvalues_13,
#line 619 "call_gen.m"
  MR_Word ll_backend__call_gen__CI_14,
#line 619 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_20,
#line 619 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_21);

#line 210 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(
#line 210 "call_gen.m"
  MR_Word ll_backend__call_gen__GenericCall_14,
#line 210 "call_gen.m"
  MR_Word ll_backend__call_gen__Args_15,
#line 210 "call_gen.m"
  MR_Word ll_backend__call_gen__Modes_16,
#line 210 "call_gen.m"
  MR_Word ll_backend__call_gen__MaybeRegTypes_17,
#line 210 "call_gen.m"
  MR_Word ll_backend__call_gen__Det_18,
#line 210 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_19,
#line 210 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_20,
#line 210 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_68,
#line 210 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_69,
#line 210 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_70,
#line 210 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_71);

#line 821 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(
#line 821 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 821 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__2_2,
#line 821 "call_gen.m"
  MR_Integer ll_backend__call_gen__HeadVar__3_3,
#line 821 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__4_4,
#line 821 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__5_5);

#line 750 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_simple_test_6_p_0(
#line 750 "call_gen.m"
  MR_Word ll_backend__call_gen__TestExpr_7,
#line 750 "call_gen.m"
  MR_Word * ll_backend__call_gen__Rval_8,
#line 750 "call_gen.m"
  MR_Word * ll_backend__call_gen__ArgCode_9,
#line 750 "call_gen.m"
  MR_Word ll_backend__call_gen__CI_10,
#line 750 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_22,
#line 750 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_23);

#line 740 "call_gen.m"
static MR_Word MR_CALL 
ll_backend__call_gen__convert_simple_expr_1_f_0(
#line 740 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1);

#line 657 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__rebuild_registers_5_p_0(
#line 657 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 657 "call_gen.m"
  MR_Word ll_backend__call_gen__Liveness_2,
#line 657 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__3_3,
#line 657 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_4,
#line 657 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_5);

#line 637 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__find_nonlive_outputs_4_p_0(
#line 637 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 637 "call_gen.m"
  MR_Word ll_backend__call_gen__Liveness_2,
#line 637 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3,
#line 637 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_4);

#line 608 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__kill_dead_input_vars_5_p_0(
#line 608 "call_gen.m"
  MR_Word ll_backend__call_gen__ArgsInfos_6,
#line 608 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_7,
#line 608 "call_gen.m"
  MR_Word * ll_backend__call_gen__NonLiveOutputs_8,
#line 608 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_13,
#line 608 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_14);

#line 561 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__call_comment_4_p_0(
#line 561 "call_gen.m"
  MR_Word ll_backend__call_gen__CI_5,
#line 561 "call_gen.m"
  MR_Word ll_backend__call_gen__PredId_6,
#line 561 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_7,
#line 561 "call_gen.m"
  MR_String * ll_backend__call_gen__Msg_8);

#line 533 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__handle_call_failure_6_p_0(
#line 533 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_7,
#line 533 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_8,
#line 533 "call_gen.m"
  MR_Word * ll_backend__call_gen__FailHandlingCode_9,
#line 533 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_17,
#line 533 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_18,
#line 533 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_19);

#line 508 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__prepare_for_call_8_p_0(
#line 508 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_9,
#line 508 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_10,
#line 508 "call_gen.m"
  MR_Word * ll_backend__call_gen__CallModel_11,
#line 508 "call_gen.m"
  MR_Word * ll_backend__call_gen__TraceCode_12,
#line 508 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_17,
#line 508 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_18,
#line 508 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_19,
#line 508 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_20);

#line 452 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generic_call_nonvar_setup_7_p_0(
#line 452 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 452 "call_gen.m"
  MR_Word ll_backend__call_gen__HoCallVariant_2,
#line 452 "call_gen.m"
  MR_Word ll_backend__call_gen__InVarsR_3,
#line 452 "call_gen.m"
  MR_Word ll_backend__call_gen__InVarsF_4,
#line 452 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_5,
#line 452 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_6,
#line 452 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_7);

#line 373 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__extra_livevals_from_3_p_0(
#line 373 "call_gen.m"
  MR_Integer ll_backend__call_gen__Reg_4,
#line 373 "call_gen.m"
  MR_Integer ll_backend__call_gen__FirstInput_5,
#line 373 "call_gen.m"
  MR_Word * ll_backend__call_gen__ExtraLiveVals_6);

#line 368 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__extra_livevals_2_p_0(
#line 368 "call_gen.m"
  MR_Integer ll_backend__call_gen__FirstInput_3,
#line 368 "call_gen.m"
  MR_Word * ll_backend__call_gen__ExtraLiveVals_4);

#line 331 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_event_attributes_7_p_0(
#line 331 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 331 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_Vars_0_2,
#line 331 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__3_3,
#line 331 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__4_4,
#line 331 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__5_5,
#line 331 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_6,
#line 331 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_7);

#line 701 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_builtin_9_p_0_1(
#line 701 "call_gen.m"
  MR_Box ll_backend__call_gen__closure_arg,
#line 701 "call_gen.m"
  MR_Box ll_backend__call_gen__wrapper_arg_1,
#line 701 "call_gen.m"
  MR_Box ll_backend__call_gen__wrapper_arg_2,
#line 701 "call_gen.m"
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



#line 534 "ll_backend.call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 542 "ll_backend.call_gen.c"
static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0 = {
  (MR_String) "ho_call_known_num",
  (MR_Integer) 0
};

#line 548 "ll_backend.call_gen.c"
static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1 = {
  (MR_String) "ho_call_unknown",
  (MR_Integer) 1
};

#line 554 "ll_backend.call_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_value_ordered_known_call_variant_0[2] = {
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0,
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1
};

#line 560 "ll_backend.call_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_name_ordered_known_call_variant_0[2] = {
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0,
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1
};

#line 566 "ll_backend.call_gen.c"
static const MR_Integer ll_backend__call_gen__ll_backend__call_gen__functor_number_map_known_call_variant_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 572 "ll_backend.call_gen.c"
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

#line 589 "ll_backend.call_gen.c"
static MR_bool MR_CALL 
ll_backend__call_gen____Unify____known_call_variant_0_0_10001(
#line 592 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_1,
#line 594 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_2)
#line 596 "ll_backend.call_gen.c"
{
#line 598 "ll_backend.call_gen.c"
  {
#line 600 "ll_backend.call_gen.c"
    MR_bool ll_backend__call_gen__succeeded;

#line 603 "ll_backend.call_gen.c"
    {
#line 605 "ll_backend.call_gen.c"
      ll_backend__call_gen__succeeded = ll_backend__call_gen____Unify____known_call_variant_0_0(((MR_Word) ll_backend__call_gen__wrapper_arg_1), ((MR_Word) ll_backend__call_gen__wrapper_arg_2));
    }
#line 608 "ll_backend.call_gen.c"
    return ll_backend__call_gen__succeeded;
#line 610 "ll_backend.call_gen.c"
  }
#line 612 "ll_backend.call_gen.c"
}

#line 615 "ll_backend.call_gen.c"
static void MR_CALL 
ll_backend__call_gen____Compare____known_call_variant_0_0_10001(
#line 618 "ll_backend.call_gen.c"
  MR_Box * ll_backend__call_gen__wrapper_arg_1,
#line 620 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_2,
#line 622 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_3)
#line 624 "ll_backend.call_gen.c"
{
#line 626 "ll_backend.call_gen.c"
  {
#line 628 "ll_backend.call_gen.c"
    MR_Word ll_backend__call_gen__conv0_HeadVar__1_1;

#line 631 "ll_backend.call_gen.c"
    {
#line 633 "ll_backend.call_gen.c"
      ll_backend__call_gen____Compare____known_call_variant_0_0(&ll_backend__call_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__call_gen__wrapper_arg_2), ((MR_Word) ll_backend__call_gen__wrapper_arg_3));
    }
#line 636 "ll_backend.call_gen.c"
    *ll_backend__call_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__call_gen__conv0_HeadVar__1_1));
#line 638 "ll_backend.call_gen.c"
  }
#line 640 "ll_backend.call_gen.c"
}

#line 619 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_8_p_0(
#line 619 "call_gen.m"
  MR_Word ll_backend__call_gen__ArgsInfos_9,
#line 619 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_10,
#line 619 "call_gen.m"
  MR_Word ll_backend__call_gen__ReturnInstMap_12,
#line 619 "call_gen.m"
  MR_Word * ll_backend__call_gen__ReturnLiveLvalues_13,
#line 619 "call_gen.m"
  MR_Word ll_backend__call_gen__CI_14,
#line 619 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_20,
#line 619 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_21)
#line 619 "call_gen.m"
{
#line 624 "call_gen.m"
  {
#line 624 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 624 "call_gen.m"
    MR_Word ll_backend__call_gen__InstMapDelta_16;
#line 624 "call_gen.m"
    MR_Word ll_backend__call_gen__OkToDeleteAny_17;
#line 624 "call_gen.m"
    MR_Word ll_backend__call_gen__Liveness_18;
#line 624 "call_gen.m"
    MR_Word ll_backend__call_gen__OutputArgLocs_19;
#line 624 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_22_22;

#line 625 "call_gen.m"
    {
#line 625 "call_gen.m"
      ll_backend__call_gen__InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__call_gen__GoalInfo_10);
    }
#line 626 "call_gen.m"
    {
#line 626 "call_gen.m"
      ll_backend__call_gen__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__call_gen__InstMapDelta_16);
    }
#line 628 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 627 "call_gen.m"
      ll_backend__call_gen__OkToDeleteAny_17 = (MR_Integer) 0;
#line 628 "call_gen.m"
    else
#line 629 "call_gen.m"
      ll_backend__call_gen__OkToDeleteAny_17 = (MR_Integer) 1;
#line 631 "call_gen.m"
    {
#line 631 "call_gen.m"
      ll_backend__code_loc_dep__clear_all_registers_3_p_0(ll_backend__call_gen__OkToDeleteAny_17, ll_backend__call_gen__STATE_VARIABLE_CLD_0_20, &ll_backend__call_gen__STATE_VARIABLE_CLD_22_22);
    }
#line 632 "call_gen.m"
    {
#line 632 "call_gen.m"
      ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_22_22, &ll_backend__call_gen__Liveness_18);
    }
#line 633 "call_gen.m"
    {
#line 633 "call_gen.m"
      ll_backend__call_gen__rebuild_registers_5_p_0(ll_backend__call_gen__ArgsInfos_9, ll_backend__call_gen__Liveness_18, &ll_backend__call_gen__OutputArgLocs_19, ll_backend__call_gen__STATE_VARIABLE_CLD_22_22, ll_backend__call_gen__STATE_VARIABLE_CLD_21);
    }
#line 634 "call_gen.m"
    {
#line 634 "call_gen.m"
      ll_backend__code_loc_dep__generate_return_live_lvalues_6_p_0(ll_backend__call_gen__CI_14, *ll_backend__call_gen__STATE_VARIABLE_CLD_21, ll_backend__call_gen__OutputArgLocs_19, ll_backend__call_gen__ReturnInstMap_12, ll_backend__call_gen__OkToDeleteAny_17, ll_backend__call_gen__ReturnLiveLvalues_13);
#line 634 "call_gen.m"
      return;
    }
#line 624 "call_gen.m"
  }
#line 619 "call_gen.m"
}

#line 210 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(
#line 210 "call_gen.m"
  MR_Word ll_backend__call_gen__GenericCall_14,
#line 210 "call_gen.m"
  MR_Word ll_backend__call_gen__Args_15,
#line 210 "call_gen.m"
  MR_Word ll_backend__call_gen__Modes_16,
#line 210 "call_gen.m"
  MR_Word ll_backend__call_gen__MaybeRegTypes_17,
#line 210 "call_gen.m"
  MR_Word ll_backend__call_gen__Det_18,
#line 210 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_19,
#line 210 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_20,
#line 210 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_68,
#line 210 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_69,
#line 210 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_70,
#line 210 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_71)
#line 210 "call_gen.m"
{
#line 216 "call_gen.m"
  {
#line 216 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeInfo_114_114;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeInfo_115_115;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeCtorInfo_117_117;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__ModuleInfo_23;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__VarTypes_24;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__Types_25;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__ArgRegTypes_26;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__InVarsR_27;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__InVarsF_28;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__OutVarsR_29;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__OutVarsF_30;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__Globals_31;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__CodeAddr_32;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__SpecifierArgInfos_33;
#line 216 "call_gen.m"
    MR_Integer ll_backend__call_gen__FirstImmInputR_34;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__HoCallVariant_35;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__CodeModel_37;
#line 216 "call_gen.m"
    MR_Integer ll_backend__call_gen__FirstOutputR_38;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__InVarArgInfosR_40;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__InVarArgInfosF_41;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__OutArgsInfosR_42;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__OutArgsInfosF_43;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__ArgInfos_44;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__LiveVals0_45;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__SetupCode_46;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__NonVarCode_48;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__ExtraLiveVals_49;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__LiveVals_50;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__CallModel_51;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__TraceCode_52;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnLabel_53;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__Context_54;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__GoalId_55;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__InstMap_56;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__InstMapDelta_57;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnInstMap_58;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__OutArgsInfos_59;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnLiveLvalues_60;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__MaybeContainingGoalMap_61;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__MaybeGoalPath_64;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__CallCode_65;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__AfterReturn_66;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__FailHandlingCode_67;
#line 216 "call_gen.m"
    MR_Integer ll_backend__call_gen__V_72_72;
#line 216 "call_gen.m"
    MR_Integer ll_backend__call_gen__V_73_73;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__V_82_82;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__V_83_83;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__V_84_84;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__V_85_85;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__V_86_86;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_88_88;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_89_89;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_90_90;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_91_91;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_92_92;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_93_93;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_94_94;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__V_95_95;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__V_96_96;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__V_97_97;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__V_99_99;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__V_100_100;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__V_101_101;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__V_102_102;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__V_104_104;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__V_105_105;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__V_106_106;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__V_111_111;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__V_112_112;
#line 216 "call_gen.m"
    MR_Word ll_backend__call_gen__V_113_113;
#line 254 "call_gen.m"
    MR_Word ll_backend__call_gen__NonLiveOutputs_47;

#line 217 "call_gen.m"
    {
#line 217 "call_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_68, &ll_backend__call_gen__ModuleInfo_23);
    }
#line 218 "call_gen.m"
    {
#line 218 "call_gen.m"
      ll_backend__code_info__get_vartypes_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_68, &ll_backend__call_gen__VarTypes_24);
    }
#line 219 "call_gen.m"
    {
#line 219 "call_gen.m"
      hlds__vartypes__lookup_var_types_3_p_0(ll_backend__call_gen__VarTypes_24, ll_backend__call_gen__Args_15, &ll_backend__call_gen__Types_25);
    }
#line 220 "call_gen.m"
    {
#line 220 "call_gen.m"
      hlds__arg_info__generic_call_arg_reg_types_6_p_0(ll_backend__call_gen__ModuleInfo_23, ll_backend__call_gen__VarTypes_24, ll_backend__call_gen__GenericCall_14, ll_backend__call_gen__Args_15, ll_backend__call_gen__MaybeRegTypes_17, &ll_backend__call_gen__ArgRegTypes_26);
    }
#line 222 "call_gen.m"
    {
#line 222 "call_gen.m"
      hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(ll_backend__call_gen__ModuleInfo_23, ll_backend__call_gen__Args_15, ll_backend__call_gen__Modes_16, ll_backend__call_gen__Types_25, ll_backend__call_gen__ArgRegTypes_26, &ll_backend__call_gen__InVarsR_27, &ll_backend__call_gen__InVarsF_28, &ll_backend__call_gen__OutVarsR_29, &ll_backend__call_gen__OutVarsF_30);
    }
#line 224 "call_gen.m"
    {
#line 224 "call_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__call_gen__ModuleInfo_23, &ll_backend__call_gen__Globals_31);
    }
#line 926 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeInfo_114_114 = (MR_Word) &ll_backend__call_gen_scalar_common_1[0];
#line 225 "call_gen.m"
    {
#line 225 "call_gen.m"
      ll_backend__call_gen__V_72_72 = mercury__list__length_1_f_0(ll_backend__call_gen__TypeInfo_114_114, ll_backend__call_gen__InVarsR_27);
    }
#line 225 "call_gen.m"
    {
#line 225 "call_gen.m"
      ll_backend__call_gen__V_73_73 = mercury__list__length_1_f_0(ll_backend__call_gen__TypeInfo_114_114, ll_backend__call_gen__InVarsF_28);
    }
#line 225 "call_gen.m"
    {
#line 225 "call_gen.m"
      ll_backend__call_gen__generic_call_info_8_p_0(ll_backend__call_gen__Globals_31, ll_backend__call_gen__GenericCall_14, ll_backend__call_gen__V_72_72, ll_backend__call_gen__V_73_73, &ll_backend__call_gen__CodeAddr_32, &ll_backend__call_gen__SpecifierArgInfos_33, &ll_backend__call_gen__FirstImmInputR_34, &ll_backend__call_gen__HoCallVariant_35);
    }
#line 228 "call_gen.m"
    {
#line 228 "call_gen.m"
      hlds__code_model__determinism_to_code_model_2_p_0(ll_backend__call_gen__Det_18, &ll_backend__call_gen__CodeModel_37);
    }
#line 232 "call_gen.m"
#line 232 "call_gen.m"
    switch (ll_backend__call_gen__CodeModel_37) {
#line 232 "call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 232 "call_gen.m"
      case (MR_Integer) 0:
#line 232 "call_gen.m"
      case (MR_Integer) 2:
#line 236 "call_gen.m"
        ll_backend__call_gen__FirstOutputR_38 = (MR_Integer) 1;
#line 232 "call_gen.m"
        break;
#line 232 "call_gen.m"
      case (MR_Integer) 1:
#line 231 "call_gen.m"
        ll_backend__call_gen__FirstOutputR_38 = (MR_Integer) 2;
#line 232 "call_gen.m"
        break;
#line 232 "call_gen.m"
    }
#line 240 "call_gen.m"
    {
#line 240 "call_gen.m"
      ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__InVarsR_27, (MR_Integer) 0, ll_backend__call_gen__FirstImmInputR_34, (MR_Integer) 0, &ll_backend__call_gen__InVarArgInfosR_40);
    }
#line 242 "call_gen.m"
    {
#line 242 "call_gen.m"
      ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__InVarsF_28, (MR_Integer) 1, (MR_Integer) 1, (MR_Integer) 0, &ll_backend__call_gen__InVarArgInfosF_41);
    }
#line 244 "call_gen.m"
    {
#line 244 "call_gen.m"
      ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__OutVarsR_29, (MR_Integer) 0, ll_backend__call_gen__FirstOutputR_38, (MR_Integer) 1, &ll_backend__call_gen__OutArgsInfosR_42);
    }
#line 246 "call_gen.m"
    {
#line 246 "call_gen.m"
      ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__OutVarsF_30, (MR_Integer) 1, (MR_Integer) 1, (MR_Integer) 1, &ll_backend__call_gen__OutArgsInfosF_43);
    }
#line 989 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeInfo_115_115 = (MR_Word) &ll_backend__call_gen_scalar_common_2[0];
#line 249 "call_gen.m"
    {
#line 249 "call_gen.m"
      ll_backend__call_gen__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_86_86, 0) = ((MR_Box) (ll_backend__call_gen__OutArgsInfosF_43));
#line 249 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 249 "call_gen.m"
    }
#line 249 "call_gen.m"
    {
#line 249 "call_gen.m"
      ll_backend__call_gen__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_85_85, 0) = ((MR_Box) (ll_backend__call_gen__OutArgsInfosR_42));
#line 249 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_85_85, 1) = ((MR_Box) (ll_backend__call_gen__V_86_86));
#line 249 "call_gen.m"
    }
#line 249 "call_gen.m"
    {
#line 249 "call_gen.m"
      ll_backend__call_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_84_84, 0) = ((MR_Box) (ll_backend__call_gen__InVarArgInfosF_41));
#line 249 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_84_84, 1) = ((MR_Box) (ll_backend__call_gen__V_85_85));
#line 249 "call_gen.m"
    }
#line 249 "call_gen.m"
    {
#line 249 "call_gen.m"
      ll_backend__call_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_83_83, 0) = ((MR_Box) (ll_backend__call_gen__InVarArgInfosR_40));
#line 249 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_83_83, 1) = ((MR_Box) (ll_backend__call_gen__V_84_84));
#line 249 "call_gen.m"
    }
#line 248 "call_gen.m"
    {
#line 248 "call_gen.m"
      ll_backend__call_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_82_82, 0) = ((MR_Box) (ll_backend__call_gen__SpecifierArgInfos_33));
#line 248 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_82_82, 1) = ((MR_Box) (ll_backend__call_gen__V_83_83));
#line 248 "call_gen.m"
    }
#line 248 "call_gen.m"
    {
#line 248 "call_gen.m"
      ll_backend__call_gen__ArgInfos_44 = mercury__list__condense_1_f_0(ll_backend__call_gen__TypeInfo_115_115, ll_backend__call_gen__V_82_82);
    }
#line 253 "call_gen.m"
    {
#line 253 "call_gen.m"
      ll_backend__code_loc_dep__setup_call_7_p_0(ll_backend__call_gen__GoalInfo_19, ll_backend__call_gen__ArgInfos_44, &ll_backend__call_gen__LiveVals0_45, &ll_backend__call_gen__SetupCode_46, ll_backend__call_gen__STATE_VARIABLE_CI_0_68, ll_backend__call_gen__STATE_VARIABLE_CLD_0_70, &ll_backend__call_gen__STATE_VARIABLE_CLD_88_88);
    }
#line 254 "call_gen.m"
    {
#line 254 "call_gen.m"
      ll_backend__call_gen__kill_dead_input_vars_5_p_0(ll_backend__call_gen__ArgInfos_44, ll_backend__call_gen__GoalInfo_19, &ll_backend__call_gen__NonLiveOutputs_47, ll_backend__call_gen__STATE_VARIABLE_CLD_88_88, &ll_backend__call_gen__STATE_VARIABLE_CLD_89_89);
    }
#line 259 "call_gen.m"
    {
#line 259 "call_gen.m"
      ll_backend__call_gen__generic_call_nonvar_setup_7_p_0(ll_backend__call_gen__GenericCall_14, ll_backend__call_gen__HoCallVariant_35, ll_backend__call_gen__InVarsR_27, ll_backend__call_gen__InVarsF_28, &ll_backend__call_gen__NonVarCode_48, ll_backend__call_gen__STATE_VARIABLE_CLD_89_89, &ll_backend__call_gen__STATE_VARIABLE_CLD_90_90);
    }
#line 262 "call_gen.m"
    {
#line 262 "call_gen.m"
      ll_backend__call_gen__extra_livevals_2_p_0(ll_backend__call_gen__FirstImmInputR_34, &ll_backend__call_gen__ExtraLiveVals_49);
    }
#line 263 "call_gen.m"
    {
#line 263 "call_gen.m"
      mercury__set__insert_list_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__call_gen__ExtraLiveVals_49, ll_backend__call_gen__LiveVals0_45, &ll_backend__call_gen__LiveVals_50);
    }
#line 265 "call_gen.m"
    {
#line 265 "call_gen.m"
      ll_backend__call_gen__prepare_for_call_8_p_0(ll_backend__call_gen__CodeModel_37, ll_backend__call_gen__GoalInfo_19, &ll_backend__call_gen__CallModel_51, &ll_backend__call_gen__TraceCode_52, ll_backend__call_gen__STATE_VARIABLE_CI_0_68, &ll_backend__call_gen__STATE_VARIABLE_CI_91_91, ll_backend__call_gen__STATE_VARIABLE_CLD_90_90, &ll_backend__call_gen__STATE_VARIABLE_CLD_92_92);
    }
#line 268 "call_gen.m"
    {
#line 268 "call_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__call_gen__ReturnLabel_53, ll_backend__call_gen__STATE_VARIABLE_CI_91_91, &ll_backend__call_gen__STATE_VARIABLE_CI_93_93);
    }
#line 269 "call_gen.m"
    {
#line 269 "call_gen.m"
      ll_backend__call_gen__Context_54 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__call_gen__GoalInfo_19);
    }
#line 270 "call_gen.m"
    {
#line 270 "call_gen.m"
      ll_backend__call_gen__GoalId_55 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__call_gen__GoalInfo_19);
    }
#line 274 "call_gen.m"
    {
#line 274 "call_gen.m"
      ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_92_92, &ll_backend__call_gen__InstMap_56);
    }
#line 275 "call_gen.m"
    {
#line 275 "call_gen.m"
      ll_backend__call_gen__InstMapDelta_57 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__call_gen__GoalInfo_19);
    }
#line 276 "call_gen.m"
    {
#line 276 "call_gen.m"
      hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__call_gen__InstMap_56, ll_backend__call_gen__InstMapDelta_57, &ll_backend__call_gen__ReturnInstMap_58);
    }
#line 279 "call_gen.m"
    {
#line 279 "call_gen.m"
      ll_backend__call_gen__OutArgsInfos_59 = mercury__list__f_43_43_2_f_0(ll_backend__call_gen__TypeInfo_115_115, ll_backend__call_gen__OutArgsInfosR_42, ll_backend__call_gen__OutArgsInfosF_43);
    }
#line 280 "call_gen.m"
    {
#line 280 "call_gen.m"
      ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_8_p_0(ll_backend__call_gen__OutArgsInfos_59, ll_backend__call_gen__GoalInfo_19, ll_backend__call_gen__ReturnInstMap_58, &ll_backend__call_gen__ReturnLiveLvalues_60, ll_backend__call_gen__STATE_VARIABLE_CI_93_93, ll_backend__call_gen__STATE_VARIABLE_CLD_92_92, &ll_backend__call_gen__STATE_VARIABLE_CLD_94_94);
    }
#line 283 "call_gen.m"
    {
#line 283 "call_gen.m"
      ll_backend__code_info__get_maybe_containing_goal_map_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_93_93, &ll_backend__call_gen__MaybeContainingGoalMap_61);
    }
#line 288 "call_gen.m"
    if ((ll_backend__call_gen__MaybeContainingGoalMap_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 290 "call_gen.m"
      ll_backend__call_gen__MaybeGoalPath_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 288 "call_gen.m"
    else
#line 285 "call_gen.m"
      {
#line 285 "call_gen.m"
        MR_Word ll_backend__call_gen__ContainingGoalMap_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeContainingGoalMap_61, (MR_Integer) 0)));
#line 285 "call_gen.m"
        MR_Word ll_backend__call_gen__GoalPath_63;

#line 286 "call_gen.m"
        {
#line 286 "call_gen.m"
          ll_backend__call_gen__GoalPath_63 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__call_gen__ContainingGoalMap_62, ll_backend__call_gen__GoalId_55);
        }
#line 287 "call_gen.m"
        {
#line 287 "call_gen.m"
          ll_backend__call_gen__MaybeGoalPath_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 287 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeGoalPath_64, 0) = ((MR_Box) (ll_backend__call_gen__GoalPath_63));
#line 287 "call_gen.m"
        }
#line 285 "call_gen.m"
      }
#line 1149 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeCtorInfo_117_117 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 293 "call_gen.m"
    {
#line 293 "call_gen.m"
      ll_backend__call_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 293 "call_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__call_gen__V_97_97, 0) = ((MR_Box) (ll_backend__call_gen__LiveVals_50));
#line 293 "call_gen.m"
    }
#line 293 "call_gen.m"
    {
#line 293 "call_gen.m"
      ll_backend__call_gen__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 293 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_96_96, 0) = ((MR_Box) (ll_backend__call_gen__V_97_97));
#line 293 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_96_96, 1) = ((MR_Box) ((MR_String) ""));
#line 293 "call_gen.m"
    }
#line 294 "call_gen.m"
    {
#line 294 "call_gen.m"
      ll_backend__call_gen__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 294 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_102_102, 0) = ((MR_Box) (ll_backend__call_gen__ReturnLabel_53));
#line 294 "call_gen.m"
    }
#line 294 "call_gen.m"
    {
#line 294 "call_gen.m"
      ll_backend__call_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 294 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 294 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 1) = ((MR_Box) (ll_backend__call_gen__CodeAddr_32));
#line 294 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 2) = ((MR_Box) (ll_backend__call_gen__V_102_102));
#line 294 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 3) = ((MR_Box) (ll_backend__call_gen__ReturnLiveLvalues_60));
#line 294 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 4) = ((MR_Box) (ll_backend__call_gen__Context_54));
#line 294 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 5) = ((MR_Box) (ll_backend__call_gen__MaybeGoalPath_64));
#line 294 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 6) = ((MR_Box) (ll_backend__call_gen__CallModel_51));
#line 294 "call_gen.m"
    }
#line 294 "call_gen.m"
    {
#line 294 "call_gen.m"
      ll_backend__call_gen__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 294 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_100_100, 0) = ((MR_Box) (ll_backend__call_gen__V_101_101));
#line 294 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_100_100, 1) = ((MR_Box) ((MR_String) "Setup and call"));
#line 294 "call_gen.m"
    }
#line 296 "call_gen.m"
    {
#line 296 "call_gen.m"
      ll_backend__call_gen__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 296 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_106_106, 1) = ((MR_Box) (ll_backend__call_gen__ReturnLabel_53));
#line 296 "call_gen.m"
    }
#line 296 "call_gen.m"
    {
#line 296 "call_gen.m"
      ll_backend__call_gen__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 296 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_105_105, 0) = ((MR_Box) (ll_backend__call_gen__V_106_106));
#line 296 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_105_105, 1) = ((MR_Box) ((MR_String) "Continuation label"));
#line 296 "call_gen.m"
    }
#line 297 "call_gen.m"
    {
#line 297 "call_gen.m"
      ll_backend__call_gen__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_104_104, 0) = ((MR_Box) (ll_backend__call_gen__V_105_105));
#line 297 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 297 "call_gen.m"
    }
#line 295 "call_gen.m"
    {
#line 295 "call_gen.m"
      ll_backend__call_gen__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_99_99, 0) = ((MR_Box) (ll_backend__call_gen__V_100_100));
#line 295 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_99_99, 1) = ((MR_Box) (ll_backend__call_gen__V_104_104));
#line 295 "call_gen.m"
    }
#line 293 "call_gen.m"
    {
#line 293 "call_gen.m"
      ll_backend__call_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_95_95, 0) = ((MR_Box) (ll_backend__call_gen__V_96_96));
#line 293 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_95_95, 1) = ((MR_Box) (ll_backend__call_gen__V_99_99));
#line 293 "call_gen.m"
    }
#line 292 "call_gen.m"
    {
#line 292 "call_gen.m"
      ll_backend__call_gen__CallCode_65 = mercury__cord__from_list_1_f_0(ll_backend__call_gen__TypeCtorInfo_117_117, ll_backend__call_gen__V_95_95);
    }
#line 300 "call_gen.m"
    {
#line 300 "call_gen.m"
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_94_94, &ll_backend__call_gen__AfterReturn_66);
    }
#line 301 "call_gen.m"
    {
#line 301 "call_gen.m"
      ll_backend__call_gen__handle_call_failure_6_p_0(ll_backend__call_gen__CodeModel_37, ll_backend__call_gen__GoalInfo_19, &ll_backend__call_gen__FailHandlingCode_67, ll_backend__call_gen__STATE_VARIABLE_CI_93_93, ll_backend__call_gen__STATE_VARIABLE_CI_69, ll_backend__call_gen__STATE_VARIABLE_CLD_94_94);
    }
#line 302 "call_gen.m"
    {
#line 302 "call_gen.m"
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__call_gen__AfterReturn_66, *ll_backend__call_gen__STATE_VARIABLE_CI_69, ll_backend__call_gen__STATE_VARIABLE_CLD_71);
    }
#line 304 "call_gen.m"
    {
#line 304 "call_gen.m"
      ll_backend__call_gen__V_113_113 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_117_117, ll_backend__call_gen__CallCode_65, ll_backend__call_gen__FailHandlingCode_67);
    }
#line 304 "call_gen.m"
    {
#line 304 "call_gen.m"
      ll_backend__call_gen__V_112_112 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_117_117, ll_backend__call_gen__TraceCode_52, ll_backend__call_gen__V_113_113);
    }
#line 304 "call_gen.m"
    {
#line 304 "call_gen.m"
      ll_backend__call_gen__V_111_111 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_117_117, ll_backend__call_gen__NonVarCode_48, ll_backend__call_gen__V_112_112);
    }
#line 304 "call_gen.m"
    {
#line 304 "call_gen.m"
      *ll_backend__call_gen__Code_20 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_117_117, ll_backend__call_gen__SetupCode_46, ll_backend__call_gen__V_111_111);
    }
#line 216 "call_gen.m"
  }
#line 210 "call_gen.m"
}

#line 38 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(
#line 38 "call_gen.m"
  MR_Word ll_backend__call_gen__GenericCall_14,
#line 38 "call_gen.m"
  MR_Word ll_backend__call_gen__Args_15,
#line 38 "call_gen.m"
  MR_Word ll_backend__call_gen__Modes_16,
#line 38 "call_gen.m"
  MR_Word ll_backend__call_gen__MaybeRegTypes_17,
#line 38 "call_gen.m"
  MR_Word ll_backend__call_gen__Det_18,
#line 38 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_19,
#line 38 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_20,
#line 38 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_39,
#line 38 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_40,
#line 38 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_41,
#line 38 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_42)
#line 38 "call_gen.m"
{
#line 182 "call_gen.m"
  {
#line 182 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 182 "call_gen.m"
#line 182 "call_gen.m"
    switch (MR_tag((MR_Word) ll_backend__call_gen__GenericCall_14)) {
#line 182 "call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 182 "call_gen.m"
      case (MR_Integer) 0:
#line 182 "call_gen.m"
      case (MR_Integer) 1:
#line 183 "call_gen.m"
        {
#line 183 "call_gen.m"
          ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(ll_backend__call_gen__GenericCall_14, ll_backend__call_gen__Args_15, ll_backend__call_gen__Modes_16, ll_backend__call_gen__MaybeRegTypes_17, ll_backend__call_gen__Det_18, ll_backend__call_gen__GoalInfo_19, ll_backend__call_gen__Code_20, ll_backend__call_gen__STATE_VARIABLE_CI_0_39, ll_backend__call_gen__STATE_VARIABLE_CI_40, ll_backend__call_gen__STATE_VARIABLE_CLD_0_41, ll_backend__call_gen__STATE_VARIABLE_CLD_42);
#line 183 "call_gen.m"
          return;
        }
#line 182 "call_gen.m"
        break;
#line 182 "call_gen.m"
      case (MR_Integer) 2:
#line 186 "call_gen.m"
        {
#line 186 "call_gen.m"
          MR_String ll_backend__call_gen__EventName_31 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__call_gen__GenericCall_14, (MR_Integer) 0)));
#line 186 "call_gen.m"
          MR_Word ll_backend__call_gen__ModuleInfo_73;
#line 186 "call_gen.m"
          MR_Word ll_backend__call_gen__EventSet_74;
#line 186 "call_gen.m"
          MR_Word ll_backend__call_gen__EventSpecMap_75;
#line 316 "call_gen.m"
          MR_String ll_backend__call_gen__V_89_89;
#line 327 "call_gen.m"
          MR_Word ll_backend__call_gen__Attributes_76;
#line 327 "call_gen.m"
          MR_Integer ll_backend__call_gen__EventNumber_77;

#line 314 "call_gen.m"
          {
#line 314 "call_gen.m"
            ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_39, &ll_backend__call_gen__ModuleInfo_73);
          }
#line 315 "call_gen.m"
          {
#line 315 "call_gen.m"
            hlds__hlds_module__module_info_get_event_set_2_p_0(ll_backend__call_gen__ModuleInfo_73, &ll_backend__call_gen__EventSet_74);
          }
#line 316 "call_gen.m"
          ll_backend__call_gen__V_89_89 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__EventSet_74, (MR_Integer) 0)));
#line 316 "call_gen.m"
          ll_backend__call_gen__EventSpecMap_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__EventSet_74, (MR_Integer) 1)));
#line 318 "call_gen.m"
          {
#line 318 "call_gen.m"
            ll_backend__call_gen__succeeded = parse_tree__prog_event__event_attributes_3_p_0(ll_backend__call_gen__EventSpecMap_75, ll_backend__call_gen__EventName_31, &ll_backend__call_gen__Attributes_76);
          }
#line 318 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 319 "call_gen.m"
            {
#line 319 "call_gen.m"
              ll_backend__call_gen__succeeded = parse_tree__prog_event__event_number_3_p_0(ll_backend__call_gen__EventSpecMap_75, ll_backend__call_gen__EventName_31, &ll_backend__call_gen__EventNumber_77);
            }
#line 327 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 322 "call_gen.m"
            {
#line 322 "call_gen.m"
              MR_Word ll_backend__call_gen__TypeCtorInfo_36_90;
#line 322 "call_gen.m"
              MR_Word ll_backend__call_gen__MaybeUserAttributes_78;
#line 322 "call_gen.m"
              MR_Word ll_backend__call_gen__AttrCodes_79;
#line 322 "call_gen.m"
              MR_Word ll_backend__call_gen__UserEventInfo_80;
#line 322 "call_gen.m"
              MR_Word ll_backend__call_gen__EventCode_81;
#line 322 "call_gen.m"
              MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_28_82;
#line 322 "call_gen.m"
              MR_Word ll_backend__call_gen__V_85_85;

#line 321 "call_gen.m"
              {
#line 321 "call_gen.m"
                ll_backend__call_gen__generate_event_attributes_7_p_0(ll_backend__call_gen__Attributes_76, ll_backend__call_gen__Args_15, &ll_backend__call_gen__MaybeUserAttributes_78, &ll_backend__call_gen__AttrCodes_79, ll_backend__call_gen__STATE_VARIABLE_CI_0_39, ll_backend__call_gen__STATE_VARIABLE_CLD_0_41, &ll_backend__call_gen__STATE_VARIABLE_CLD_28_82);
              }
#line 323 "call_gen.m"
              {
#line 323 "call_gen.m"
                ll_backend__call_gen__UserEventInfo_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 323 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__UserEventInfo_80, 0) = ((MR_Box) (ll_backend__call_gen__EventNumber_77));
#line 323 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__UserEventInfo_80, 1) = ((MR_Box) (ll_backend__call_gen__MaybeUserAttributes_78));
#line 323 "call_gen.m"
              }
#line 324 "call_gen.m"
              {
#line 324 "call_gen.m"
                ll_backend__trace_gen__generate_user_event_code_7_p_0(ll_backend__call_gen__UserEventInfo_80, ll_backend__call_gen__GoalInfo_19, &ll_backend__call_gen__EventCode_81, ll_backend__call_gen__STATE_VARIABLE_CI_0_39, ll_backend__call_gen__STATE_VARIABLE_CI_40, ll_backend__call_gen__STATE_VARIABLE_CLD_28_82, ll_backend__call_gen__STATE_VARIABLE_CLD_42);
              }
#line 1436 "ll_backend.call_gen.c"
              ll_backend__call_gen__TypeCtorInfo_36_90 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 326 "call_gen.m"
              {
#line 326 "call_gen.m"
                ll_backend__call_gen__V_85_85 = mercury__cord__cord_list_to_cord_1_f_0(ll_backend__call_gen__TypeCtorInfo_36_90, ll_backend__call_gen__AttrCodes_79);
              }
#line 326 "call_gen.m"
              {
#line 326 "call_gen.m"
                *ll_backend__call_gen__Code_20 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_36_90, ll_backend__call_gen__V_85_85, ll_backend__call_gen__EventCode_81);
              }
#line 322 "call_gen.m"
            }
#line 327 "call_gen.m"
          else
#line 328 "call_gen.m"
            {
#line 328 "call_gen.m"
              {
#line 328 "call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_event_call\'/8", (MR_String) "bad event name");
#line 328 "call_gen.m"
                return;
              }
#line 328 "call_gen.m"
            }
#line 186 "call_gen.m"
        }
#line 182 "call_gen.m"
        break;
#line 182 "call_gen.m"
      case (MR_Integer) 3:
#line 189 "call_gen.m"
        {
#line 205 "call_gen.m"
          MR_Word ll_backend__call_gen__InputArg_33;
#line 205 "call_gen.m"
          MR_Word ll_backend__call_gen__OutputArg_34;
#line 190 "call_gen.m"
          MR_Word ll_backend__call_gen__V_43_43;
#line 190 "call_gen.m"
          MR_Word ll_backend__call_gen__V_44_44;

#line 190 "call_gen.m"
          ll_backend__call_gen__succeeded = ((MR_tag((MR_Word) ll_backend__call_gen__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 190 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 190 "call_gen.m"
            {
#line 190 "call_gen.m"
              ll_backend__call_gen__InputArg_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__Args_15, (MR_Integer) 0)));
#line 190 "call_gen.m"
              ll_backend__call_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__Args_15, (MR_Integer) 1)));
#line 190 "call_gen.m"
              ll_backend__call_gen__succeeded = ((MR_tag((MR_Word) ll_backend__call_gen__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 190 "call_gen.m"
              if (ll_backend__call_gen__succeeded)
#line 190 "call_gen.m"
                {
#line 190 "call_gen.m"
                  ll_backend__call_gen__OutputArg_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_43_43, (MR_Integer) 0)));
#line 190 "call_gen.m"
                  ll_backend__call_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_43_43, (MR_Integer) 1)));
#line 190 "call_gen.m"
                  ll_backend__call_gen__succeeded = (ll_backend__call_gen__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 190 "call_gen.m"
                }
#line 190 "call_gen.m"
            }
#line 205 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 191 "call_gen.m"
            {
#line 191 "call_gen.m"
              MR_Word ll_backend__call_gen__ModuleInfo_35;
#line 191 "call_gen.m"
              MR_Word ll_backend__call_gen__ProcInfo_36;
#line 191 "call_gen.m"
              MR_Word ll_backend__call_gen__VarTypes_37;
#line 191 "call_gen.m"
              MR_Word ll_backend__call_gen__Rval_38;

#line 191 "call_gen.m"
              {
#line 191 "call_gen.m"
                ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_39, &ll_backend__call_gen__ModuleInfo_35);
              }
#line 192 "call_gen.m"
              {
#line 192 "call_gen.m"
                ll_backend__code_info__get_proc_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_39, &ll_backend__call_gen__ProcInfo_36);
              }
#line 193 "call_gen.m"
              {
#line 193 "call_gen.m"
                hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__call_gen__ProcInfo_36, &ll_backend__call_gen__VarTypes_37);
              }
#line 194 "call_gen.m"
              {
#line 194 "call_gen.m"
                ll_backend__call_gen__succeeded = hlds__hlds_pred__var_is_of_dummy_type_3_p_0(ll_backend__call_gen__ModuleInfo_35, ll_backend__call_gen__VarTypes_37, ll_backend__call_gen__InputArg_33);
              }
#line 201 "call_gen.m"
              if (ll_backend__call_gen__succeeded)
#line 200 "call_gen.m"
                {
#line 200 "call_gen.m"
                  ll_backend__call_gen__Rval_38 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_4[1]);
#line 200 "call_gen.m"
                }
#line 201 "call_gen.m"
              else
#line 202 "call_gen.m"
                {
#line 202 "call_gen.m"
                  ll_backend__call_gen__Rval_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 202 "call_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__Rval_38, 0) = ((MR_Box) (ll_backend__call_gen__InputArg_33));
#line 202 "call_gen.m"
                }
#line 733 "call_gen.m"
              {
#line 733 "call_gen.m"
                ll_backend__call_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_0_41, ll_backend__call_gen__OutputArg_34);
              }
#line 736 "call_gen.m"
              if (ll_backend__call_gen__succeeded)
#line 734 "call_gen.m"
                {
#line 734 "call_gen.m"
                  MR_Word ll_backend__call_gen__Rval_60;

#line 734 "call_gen.m"
                  {
#line 734 "call_gen.m"
                    ll_backend__call_gen__Rval_60 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Rval_38);
                  }
#line 735 "call_gen.m"
                  {
#line 735 "call_gen.m"
                    ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ll_backend__call_gen__OutputArg_34, ll_backend__call_gen__Rval_60, ll_backend__call_gen__Code_20, ll_backend__call_gen__STATE_VARIABLE_CLD_0_41, ll_backend__call_gen__STATE_VARIABLE_CLD_42);
                  }
#line 734 "call_gen.m"
                }
#line 736 "call_gen.m"
              else
#line 737 "call_gen.m"
                {
#line 737 "call_gen.m"
                  {
#line 737 "call_gen.m"
                    *ll_backend__call_gen__Code_20 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 737 "call_gen.m"
                  *ll_backend__call_gen__STATE_VARIABLE_CLD_42 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_41;
#line 737 "call_gen.m"
                }
#line 191 "call_gen.m"
            }
#line 205 "call_gen.m"
          else
#line 206 "call_gen.m"
            {
#line 206 "call_gen.m"
              {
#line 206 "call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_generic_call\'/12", (MR_String) "invalid type/inst cast call");
#line 206 "call_gen.m"
                return;
              }
#line 206 "call_gen.m"
            }
#line 189 "call_gen.m"
          *ll_backend__call_gen__STATE_VARIABLE_CI_40 = ll_backend__call_gen__STATE_VARIABLE_CI_0_39;
#line 189 "call_gen.m"
        }
#line 182 "call_gen.m"
        break;
#line 182 "call_gen.m"
    }
#line 182 "call_gen.m"
  }
#line 38 "call_gen.m"
}

#line 47 "call_gen.m"
void MR_CALL 
ll_backend__call_gen____Compare____known_call_variant_0_0(
#line 47 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__1_1,
#line 47 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__2_2,
#line 47 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__3_3)
#line 47 "call_gen.m"
{
#line 47 "call_gen.m"
  {
#line 47 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 47 "call_gen.m"
    MR_Integer ll_backend__call_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__call_gen__HeadVar__2_2;
#line 47 "call_gen.m"
    MR_Integer ll_backend__call_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__call_gen__HeadVar__3_3;

#line 47 "call_gen.m"
    {
#line 47 "call_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__call_gen__HeadVar__1_1, ll_backend__call_gen__Cast_HeadVar1_4, ll_backend__call_gen__Cast_HeadVar2_5);
#line 47 "call_gen.m"
      return;
    }
#line 47 "call_gen.m"
  }
#line 47 "call_gen.m"
}

#line 47 "call_gen.m"
MR_bool MR_CALL 
ll_backend__call_gen____Unify____known_call_variant_0_0(
#line 47 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__2_1,
#line 47 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__2_2)
#line 47 "call_gen.m"
{
#line 1663 "ll_backend.call_gen.c"
  {
#line 1665 "ll_backend.call_gen.c"
    MR_bool ll_backend__call_gen__succeeded = (ll_backend__call_gen__HeadVar__2_1 == ll_backend__call_gen__HeadVar__2_2);

#line 1668 "ll_backend.call_gen.c"
    return ll_backend__call_gen__succeeded;
#line 1670 "ll_backend.call_gen.c"
  }
#line 47 "call_gen.m"
}

#line 821 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(
#line 821 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 821 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__2_2,
#line 821 "call_gen.m"
  MR_Integer ll_backend__call_gen__HeadVar__3_3,
#line 821 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__4_4,
#line 821 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__5_5)
#line 821 "call_gen.m"
{
#line 825 "call_gen.m"
  {
#line 825 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 825 "call_gen.m"
    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 825 "call_gen.m"
      *ll_backend__call_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 825 "call_gen.m"
    else
#line 827 "call_gen.m"
      {
#line 827 "call_gen.m"
        MR_Word ll_backend__call_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 827 "call_gen.m"
        MR_Word ll_backend__call_gen__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 827 "call_gen.m"
        MR_Word ll_backend__call_gen__ArgInfo_14;
#line 827 "call_gen.m"
        MR_Word ll_backend__call_gen__ArgInfos_15;
#line 827 "call_gen.m"
        MR_Word ll_backend__call_gen__V_16_16;
#line 827 "call_gen.m"
        MR_Word ll_backend__call_gen__V_17_17;
#line 827 "call_gen.m"
        MR_Integer ll_backend__call_gen__V_18_18;

#line 828 "call_gen.m"
        {
#line 828 "call_gen.m"
          ll_backend__call_gen__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 828 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_17_17, 0) = ((MR_Box) (ll_backend__call_gen__HeadVar__2_2));
#line 828 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_17_17, 1) = ((MR_Box) (ll_backend__call_gen__HeadVar__3_3));
#line 828 "call_gen.m"
        }
#line 828 "call_gen.m"
        {
#line 828 "call_gen.m"
          ll_backend__call_gen__ArgInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 828 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__ArgInfo_14, 0) = ((MR_Box) (ll_backend__call_gen__V_17_17));
#line 828 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__ArgInfo_14, 1) = ((MR_Box) (ll_backend__call_gen__HeadVar__4_4));
#line 828 "call_gen.m"
        }
#line 827 "call_gen.m"
        {
#line 827 "call_gen.m"
          ll_backend__call_gen__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 827 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_16_16, 0) = ((MR_Box) (ll_backend__call_gen__Var_9));
#line 827 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_16_16, 1) = ((MR_Box) (ll_backend__call_gen__ArgInfo_14));
#line 827 "call_gen.m"
        }
#line 829 "call_gen.m"
        ll_backend__call_gen__V_18_18 = (ll_backend__call_gen__HeadVar__3_3 + (MR_Integer) 1);
#line 829 "call_gen.m"
        {
#line 829 "call_gen.m"
          ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__Vars_10, ll_backend__call_gen__HeadVar__2_2, ll_backend__call_gen__V_18_18, ll_backend__call_gen__HeadVar__4_4, &ll_backend__call_gen__ArgInfos_15);
        }
#line 827 "call_gen.m"
        {
#line 827 "call_gen.m"
          MR_Word base;
#line 827 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 827 "call_gen.m"
          *ll_backend__call_gen__HeadVar__5_5 = base;
#line 827 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_16_16));
#line 827 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__ArgInfos_15));
#line 827 "call_gen.m"
        }
#line 827 "call_gen.m"
      }
#line 825 "call_gen.m"
  }
#line 821 "call_gen.m"
}

#line 750 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_simple_test_6_p_0(
#line 750 "call_gen.m"
  MR_Word ll_backend__call_gen__TestExpr_7,
#line 750 "call_gen.m"
  MR_Word * ll_backend__call_gen__Rval_8,
#line 750 "call_gen.m"
  MR_Word * ll_backend__call_gen__ArgCode_9,
#line 750 "call_gen.m"
  MR_Word ll_backend__call_gen__CI_10,
#line 750 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_22,
#line 750 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_23)
#line 750 "call_gen.m"
{
#line 756 "call_gen.m"
  {
#line 756 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 756 "call_gen.m"
    if (((((MR_tag((MR_Word) ll_backend__call_gen__TestExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 756 "call_gen.m"
      {
#line 756 "call_gen.m"
        MR_Word ll_backend__call_gen__BinOp_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_7, (MR_Integer) 1)));
#line 756 "call_gen.m"
        MR_Word ll_backend__call_gen__X0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_7, (MR_Integer) 2)));
#line 756 "call_gen.m"
        MR_Word ll_backend__call_gen__Y0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_7, (MR_Integer) 3)));
#line 756 "call_gen.m"
        MR_Word ll_backend__call_gen__X1_15;
#line 756 "call_gen.m"
        MR_Word ll_backend__call_gen__Y1_16;
#line 756 "call_gen.m"
        MR_Word ll_backend__call_gen__X_17;
#line 756 "call_gen.m"
        MR_Word ll_backend__call_gen__CodeX_18;
#line 756 "call_gen.m"
        MR_Word ll_backend__call_gen__Y_19;
#line 756 "call_gen.m"
        MR_Word ll_backend__call_gen__CodeY_20;
#line 756 "call_gen.m"
        MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_25_25;

#line 757 "call_gen.m"
        {
#line 757 "call_gen.m"
          ll_backend__call_gen__X1_15 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__X0_13);
        }
#line 758 "call_gen.m"
        {
#line 758 "call_gen.m"
          ll_backend__call_gen__Y1_16 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Y0_14);
        }
#line 775 "call_gen.m"
#line 775 "call_gen.m"
        switch (MR_tag((MR_Word) ll_backend__call_gen__X1_15)) {
#line 775 "call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 775 "call_gen.m"
          case (MR_Integer) 0:
#line 775 "call_gen.m"
          case (MR_Integer) 2:
#line 785 "call_gen.m"
            {
#line 786 "call_gen.m"
              ll_backend__call_gen__X_17 = ll_backend__call_gen__X1_15;
#line 787 "call_gen.m"
              {
#line 787 "call_gen.m"
                ll_backend__call_gen__CodeX_18 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 785 "call_gen.m"
              ll_backend__call_gen__STATE_VARIABLE_CLD_25_25 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_22;
#line 785 "call_gen.m"
            }
#line 775 "call_gen.m"
            break;
#line 775 "call_gen.m"
          case (MR_Integer) 1:
#line 775 "call_gen.m"
            {
#line 775 "call_gen.m"
              MR_Word ll_backend__call_gen__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__X1_15, (MR_Integer) 0)));

#line 776 "call_gen.m"
              {
#line 776 "call_gen.m"
                ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__call_gen__Var_38, &ll_backend__call_gen__CodeX_18, &ll_backend__call_gen__X_17, ll_backend__call_gen__CI_10, ll_backend__call_gen__STATE_VARIABLE_CLD_0_22, &ll_backend__call_gen__STATE_VARIABLE_CLD_25_25);
              }
#line 775 "call_gen.m"
            }
#line 775 "call_gen.m"
            break;
#line 775 "call_gen.m"
          case (MR_Integer) 3:
#line 785 "call_gen.m"
            {
#line 786 "call_gen.m"
              ll_backend__call_gen__X_17 = ll_backend__call_gen__X1_15;
#line 787 "call_gen.m"
              {
#line 787 "call_gen.m"
                ll_backend__call_gen__CodeX_18 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 785 "call_gen.m"
              ll_backend__call_gen__STATE_VARIABLE_CLD_25_25 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_22;
#line 785 "call_gen.m"
            }
#line 775 "call_gen.m"
            break;
#line 775 "call_gen.m"
        }
#line 775 "call_gen.m"
#line 775 "call_gen.m"
        switch (MR_tag((MR_Word) ll_backend__call_gen__Y1_16)) {
#line 775 "call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 775 "call_gen.m"
          case (MR_Integer) 0:
#line 775 "call_gen.m"
          case (MR_Integer) 2:
#line 785 "call_gen.m"
            {
#line 786 "call_gen.m"
              ll_backend__call_gen__Y_19 = ll_backend__call_gen__Y1_16;
#line 787 "call_gen.m"
              {
#line 787 "call_gen.m"
                ll_backend__call_gen__CodeY_20 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 785 "call_gen.m"
              *ll_backend__call_gen__STATE_VARIABLE_CLD_23 = ll_backend__call_gen__STATE_VARIABLE_CLD_25_25;
#line 785 "call_gen.m"
            }
#line 775 "call_gen.m"
            break;
#line 775 "call_gen.m"
          case (MR_Integer) 1:
#line 775 "call_gen.m"
            {
#line 775 "call_gen.m"
              MR_Word ll_backend__call_gen__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__Y1_16, (MR_Integer) 0)));

#line 776 "call_gen.m"
              {
#line 776 "call_gen.m"
                ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__call_gen__Var_59, &ll_backend__call_gen__CodeY_20, &ll_backend__call_gen__Y_19, ll_backend__call_gen__CI_10, ll_backend__call_gen__STATE_VARIABLE_CLD_25_25, ll_backend__call_gen__STATE_VARIABLE_CLD_23);
              }
#line 775 "call_gen.m"
            }
#line 775 "call_gen.m"
            break;
#line 775 "call_gen.m"
          case (MR_Integer) 3:
#line 785 "call_gen.m"
            {
#line 786 "call_gen.m"
              ll_backend__call_gen__Y_19 = ll_backend__call_gen__Y1_16;
#line 787 "call_gen.m"
              {
#line 787 "call_gen.m"
                ll_backend__call_gen__CodeY_20 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 785 "call_gen.m"
              *ll_backend__call_gen__STATE_VARIABLE_CLD_23 = ll_backend__call_gen__STATE_VARIABLE_CLD_25_25;
#line 785 "call_gen.m"
            }
#line 775 "call_gen.m"
            break;
#line 775 "call_gen.m"
        }
#line 761 "call_gen.m"
        {
#line 761 "call_gen.m"
          MR_Word base;
#line 761 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 761 "call_gen.m"
          *ll_backend__call_gen__Rval_8 = base;
#line 761 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 761 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__call_gen__BinOp_12));
#line 761 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__call_gen__X_17));
#line 761 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__call_gen__Y_19));
#line 761 "call_gen.m"
        }
#line 762 "call_gen.m"
        {
#line 762 "call_gen.m"
          *ll_backend__call_gen__ArgCode_9 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__call_gen__CodeX_18, ll_backend__call_gen__CodeY_20);
        }
#line 756 "call_gen.m"
      }
#line 756 "call_gen.m"
    else
#line 764 "call_gen.m"
      {
#line 764 "call_gen.m"
        MR_Word ll_backend__call_gen__UnOp_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_7, (MR_Integer) 1)));
#line 764 "call_gen.m"
        MR_Word ll_backend__call_gen__X0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_7, (MR_Integer) 2)));
#line 764 "call_gen.m"
        MR_Word ll_backend__call_gen__X1_28;
#line 764 "call_gen.m"
        MR_Word ll_backend__call_gen__X_29;

#line 765 "call_gen.m"
        {
#line 765 "call_gen.m"
          ll_backend__call_gen__X1_28 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__X0_27);
        }
#line 775 "call_gen.m"
#line 775 "call_gen.m"
        switch (MR_tag((MR_Word) ll_backend__call_gen__X1_28)) {
#line 775 "call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 775 "call_gen.m"
          case (MR_Integer) 0:
#line 775 "call_gen.m"
          case (MR_Integer) 2:
#line 785 "call_gen.m"
            {
#line 786 "call_gen.m"
              ll_backend__call_gen__X_29 = ll_backend__call_gen__X1_28;
#line 787 "call_gen.m"
              {
#line 787 "call_gen.m"
                *ll_backend__call_gen__ArgCode_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 785 "call_gen.m"
              *ll_backend__call_gen__STATE_VARIABLE_CLD_23 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_22;
#line 785 "call_gen.m"
            }
#line 775 "call_gen.m"
            break;
#line 775 "call_gen.m"
          case (MR_Integer) 1:
#line 775 "call_gen.m"
            {
#line 775 "call_gen.m"
              MR_Word ll_backend__call_gen__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__X1_28, (MR_Integer) 0)));

#line 776 "call_gen.m"
              {
#line 776 "call_gen.m"
                ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__call_gen__Var_80, ll_backend__call_gen__ArgCode_9, &ll_backend__call_gen__X_29, ll_backend__call_gen__CI_10, ll_backend__call_gen__STATE_VARIABLE_CLD_0_22, ll_backend__call_gen__STATE_VARIABLE_CLD_23);
              }
#line 775 "call_gen.m"
            }
#line 775 "call_gen.m"
            break;
#line 775 "call_gen.m"
          case (MR_Integer) 3:
#line 785 "call_gen.m"
            {
#line 786 "call_gen.m"
              ll_backend__call_gen__X_29 = ll_backend__call_gen__X1_28;
#line 787 "call_gen.m"
              {
#line 787 "call_gen.m"
                *ll_backend__call_gen__ArgCode_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 785 "call_gen.m"
              *ll_backend__call_gen__STATE_VARIABLE_CLD_23 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_22;
#line 785 "call_gen.m"
            }
#line 775 "call_gen.m"
            break;
#line 775 "call_gen.m"
        }
#line 767 "call_gen.m"
        {
#line 767 "call_gen.m"
          MR_Word base;
#line 767 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 767 "call_gen.m"
          *ll_backend__call_gen__Rval_8 = base;
#line 767 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 767 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__call_gen__UnOp_21));
#line 767 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__call_gen__X_29));
#line 767 "call_gen.m"
        }
#line 764 "call_gen.m"
      }
#line 756 "call_gen.m"
  }
#line 750 "call_gen.m"
}

#line 740 "call_gen.m"
static MR_Word MR_CALL 
ll_backend__call_gen__convert_simple_expr_1_f_0(
#line 740 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1)
#line 740 "call_gen.m"
{
#line 742 "call_gen.m"
  {
#line 742 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 742 "call_gen.m"
    MR_Word ll_backend__call_gen__HeadVar__2_2;

#line 742 "call_gen.m"
#line 742 "call_gen.m"
    switch (MR_tag((MR_Word) ll_backend__call_gen__HeadVar__1_1)) {
#line 742 "call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 742 "call_gen.m"
      case (MR_Integer) 0:
#line 742 "call_gen.m"
        {
#line 742 "call_gen.m"
          MR_Word ll_backend__call_gen__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));

#line 742 "call_gen.m"
          {
#line 742 "call_gen.m"
            ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 742 "call_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (ll_backend__call_gen__Var_3));
#line 742 "call_gen.m"
          }
#line 742 "call_gen.m"
        }
#line 742 "call_gen.m"
        break;
#line 742 "call_gen.m"
      case (MR_Integer) 1:
#line 743 "call_gen.m"
        {
#line 743 "call_gen.m"
          MR_Integer ll_backend__call_gen__Int_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 743 "call_gen.m"
          MR_Word ll_backend__call_gen__V_5_5;

#line 743 "call_gen.m"
          {
#line 743 "call_gen.m"
            ll_backend__call_gen__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 743 "call_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_5_5, 0) = ((MR_Box) (ll_backend__call_gen__Int_4));
#line 743 "call_gen.m"
          }
#line 743 "call_gen.m"
          {
#line 743 "call_gen.m"
            ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "call_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 743 "call_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__call_gen__V_5_5));
#line 743 "call_gen.m"
          }
#line 743 "call_gen.m"
        }
#line 742 "call_gen.m"
        break;
#line 742 "call_gen.m"
      case (MR_Integer) 2:
#line 744 "call_gen.m"
        {
#line 744 "call_gen.m"
          MR_Float ll_backend__call_gen__Float_6 = MR_unbox_float((MR_hl_field(MR_mktag(2), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 744 "call_gen.m"
          MR_Word ll_backend__call_gen__V_7_7;

#line 744 "call_gen.m"
          {
#line 744 "call_gen.m"
            ll_backend__call_gen__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "call_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 744 "call_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_7_7, 1) = MR_box_float(ll_backend__call_gen__Float_6);
#line 744 "call_gen.m"
          }
#line 744 "call_gen.m"
          {
#line 744 "call_gen.m"
            ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "call_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 744 "call_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__call_gen__V_7_7));
#line 744 "call_gen.m"
          }
#line 744 "call_gen.m"
        }
#line 742 "call_gen.m"
        break;
#line 742 "call_gen.m"
      case (MR_Integer) 3:
#line 742 "call_gen.m"
#line 742 "call_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)))) {
#line 742 "call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 742 "call_gen.m"
          case (MR_Integer) 0:
#line 745 "call_gen.m"
            {
#line 745 "call_gen.m"
              MR_Word ll_backend__call_gen__UnOp_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 745 "call_gen.m"
              MR_Word ll_backend__call_gen__Expr_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 745 "call_gen.m"
              MR_Word ll_backend__call_gen__V_10_10;

#line 746 "call_gen.m"
              {
#line 746 "call_gen.m"
                ll_backend__call_gen__V_10_10 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Expr_9);
              }
#line 746 "call_gen.m"
              {
#line 746 "call_gen.m"
                ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 746 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 746 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__call_gen__UnOp_8));
#line 746 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 2) = ((MR_Box) (ll_backend__call_gen__V_10_10));
#line 746 "call_gen.m"
              }
#line 745 "call_gen.m"
            }
#line 742 "call_gen.m"
            break;
#line 742 "call_gen.m"
          case (MR_Integer) 1:
#line 747 "call_gen.m"
            {
#line 747 "call_gen.m"
              MR_Word ll_backend__call_gen__BinOp_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 747 "call_gen.m"
              MR_Word ll_backend__call_gen__Expr1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 747 "call_gen.m"
              MR_Word ll_backend__call_gen__Expr2_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 747 "call_gen.m"
              MR_Word ll_backend__call_gen__V_14_14;
#line 747 "call_gen.m"
              MR_Word ll_backend__call_gen__V_15_15;

#line 748 "call_gen.m"
              {
#line 748 "call_gen.m"
                ll_backend__call_gen__V_14_14 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Expr1_12);
              }
#line 748 "call_gen.m"
              {
#line 748 "call_gen.m"
                ll_backend__call_gen__V_15_15 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Expr2_13);
              }
#line 748 "call_gen.m"
              {
#line 748 "call_gen.m"
                ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 748 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 748 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__call_gen__BinOp_11));
#line 748 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 2) = ((MR_Box) (ll_backend__call_gen__V_14_14));
#line 748 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 3) = ((MR_Box) (ll_backend__call_gen__V_15_15));
#line 748 "call_gen.m"
              }
#line 747 "call_gen.m"
            }
#line 742 "call_gen.m"
            break;
#line 742 "call_gen.m"
        }
#line 742 "call_gen.m"
        break;
#line 742 "call_gen.m"
    }
#line 742 "call_gen.m"
    return ll_backend__call_gen__HeadVar__2_2;
#line 742 "call_gen.m"
  }
#line 740 "call_gen.m"
}

#line 657 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__rebuild_registers_5_p_0(
#line 657 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 657 "call_gen.m"
  MR_Word ll_backend__call_gen__Liveness_2,
#line 657 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__3_3,
#line 657 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_4,
#line 657 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_5)
#line 657 "call_gen.m"
{
#line 661 "call_gen.m"
  {
#line 661 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 661 "call_gen.m"
    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 661 "call_gen.m"
      {
#line 661 "call_gen.m"
        *ll_backend__call_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 661 "call_gen.m"
        *ll_backend__call_gen__STATE_VARIABLE_CLD_5 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_4;
#line 661 "call_gen.m"
      }
#line 661 "call_gen.m"
    else
#line 663 "call_gen.m"
      {
#line 663 "call_gen.m"
        MR_Word ll_backend__call_gen__Var_10;
#line 663 "call_gen.m"
        MR_Word ll_backend__call_gen__ArgLoc_11;
#line 663 "call_gen.m"
        MR_Word ll_backend__call_gen__Mode_12;
#line 663 "call_gen.m"
        MR_Word ll_backend__call_gen__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 663 "call_gen.m"
        MR_Word ll_backend__call_gen__OutputArgLocs1_17;
#line 663 "call_gen.m"
        MR_Word ll_backend__call_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 663 "call_gen.m"
        MR_Word ll_backend__call_gen__V_22_22;
#line 663 "call_gen.m"
        MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_23_23;
#line 666 "call_gen.m"
        MR_Word ll_backend__call_gen__TypeCtorInfo_26_26;

#line 662 "call_gen.m"
        ll_backend__call_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_21_21, (MR_Integer) 0)));
#line 662 "call_gen.m"
        ll_backend__call_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_21_21, (MR_Integer) 1)));
#line 662 "call_gen.m"
        ll_backend__call_gen__ArgLoc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_22_22, (MR_Integer) 0)));
#line 662 "call_gen.m"
        ll_backend__call_gen__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_22_22, (MR_Integer) 1)));
#line 664 "call_gen.m"
        {
#line 664 "call_gen.m"
          ll_backend__call_gen__rebuild_registers_5_p_0(ll_backend__call_gen__Args_13, ll_backend__call_gen__Liveness_2, &ll_backend__call_gen__OutputArgLocs1_17, ll_backend__call_gen__STATE_VARIABLE_CLD_0_4, &ll_backend__call_gen__STATE_VARIABLE_CLD_23_23);
        }
#line 666 "call_gen.m"
        ll_backend__call_gen__succeeded = (ll_backend__call_gen__Mode_12 == (MR_Integer) 1);
#line 666 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 666 "call_gen.m"
          {
#line 2345 "ll_backend.call_gen.c"
            ll_backend__call_gen__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 667 "call_gen.m"
            {
#line 667 "call_gen.m"
              ll_backend__call_gen__succeeded = parse_tree__set_of_var__member_2_p_0(ll_backend__call_gen__TypeCtorInfo_26_26, ll_backend__call_gen__Liveness_2, ll_backend__call_gen__Var_10);
            }
#line 666 "call_gen.m"
          }
#line 672 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 669 "call_gen.m"
          {
#line 669 "call_gen.m"
            MR_Word ll_backend__call_gen__Register_18;
#line 669 "call_gen.m"
            MR_Word ll_backend__call_gen__V_25_25;

#line 669 "call_gen.m"
            {
#line 669 "call_gen.m"
              ll_backend__code_util__arg_loc_to_register_2_p_0(ll_backend__call_gen__ArgLoc_11, &ll_backend__call_gen__Register_18);
            }
#line 670 "call_gen.m"
            {
#line 670 "call_gen.m"
              ll_backend__code_loc_dep__set_var_location_4_p_0(ll_backend__call_gen__Var_10, ll_backend__call_gen__Register_18, ll_backend__call_gen__STATE_VARIABLE_CLD_23_23, ll_backend__call_gen__STATE_VARIABLE_CLD_5);
            }
#line 671 "call_gen.m"
            {
#line 671 "call_gen.m"
              ll_backend__call_gen__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 671 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_25_25, 0) = ((MR_Box) (ll_backend__call_gen__Var_10));
#line 671 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_25_25, 1) = ((MR_Box) (ll_backend__call_gen__ArgLoc_11));
#line 671 "call_gen.m"
            }
#line 671 "call_gen.m"
            {
#line 671 "call_gen.m"
              MR_Word base;
#line 671 "call_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "call_gen.m"
              *ll_backend__call_gen__HeadVar__3_3 = base;
#line 671 "call_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_25_25));
#line 671 "call_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__OutputArgLocs1_17));
#line 671 "call_gen.m"
            }
#line 669 "call_gen.m"
          }
#line 672 "call_gen.m"
        else
#line 673 "call_gen.m"
          {
#line 673 "call_gen.m"
            *ll_backend__call_gen__HeadVar__3_3 = ll_backend__call_gen__OutputArgLocs1_17;
#line 673 "call_gen.m"
            *ll_backend__call_gen__STATE_VARIABLE_CLD_5 = ll_backend__call_gen__STATE_VARIABLE_CLD_23_23;
#line 673 "call_gen.m"
          }
#line 663 "call_gen.m"
      }
#line 661 "call_gen.m"
  }
#line 657 "call_gen.m"
}

#line 637 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__find_nonlive_outputs_4_p_0(
#line 637 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 637 "call_gen.m"
  MR_Word ll_backend__call_gen__Liveness_2,
#line 637 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3,
#line 637 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_4)
#line 637 "call_gen.m"
{
#line 640 "call_gen.m"
  while (MR_TRUE)
#line 640 "call_gen.m"
    {
#line 640 "call_gen.m"
      /* tailcall optimized into a loop */
#line 640 "call_gen.m"
      {
#line 640 "call_gen.m"
        MR_bool ll_backend__call_gen__succeeded;

#line 640 "call_gen.m"
        if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 640 "call_gen.m"
          *ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_4 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3;
#line 640 "call_gen.m"
        else
#line 642 "call_gen.m"
          {
#line 642 "call_gen.m"
            MR_Word ll_backend__call_gen__Var_9;
#line 642 "call_gen.m"
            MR_Word ll_backend__call_gen__Mode_11;
#line 642 "call_gen.m"
            MR_Word ll_backend__call_gen__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 642 "call_gen.m"
            MR_Word ll_backend__call_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 642 "call_gen.m"
            MR_Word ll_backend__call_gen__V_18_18;
#line 642 "call_gen.m"
            MR_Word ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19;
#line 641 "call_gen.m"
            MR_Word ll_backend__call_gen___ArgLoc_10;

#line 641 "call_gen.m"
            ll_backend__call_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_17_17, (MR_Integer) 0)));
#line 641 "call_gen.m"
            ll_backend__call_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_17_17, (MR_Integer) 1)));
#line 641 "call_gen.m"
            ll_backend__call_gen___ArgLoc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_18_18, (MR_Integer) 0)));
#line 641 "call_gen.m"
            ll_backend__call_gen__Mode_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_18_18, (MR_Integer) 1)));
#line 650 "call_gen.m"
#line 650 "call_gen.m"
            switch (ll_backend__call_gen__Mode_11) {
#line 650 "call_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 650 "call_gen.m"
              case (MR_Integer) 0:
#line 651 "call_gen.m"
                ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3;
#line 650 "call_gen.m"
                break;
#line 650 "call_gen.m"
              case (MR_Integer) 1:
#line 647 "call_gen.m"
                {
#line 645 "call_gen.m"
                  {
#line 645 "call_gen.m"
                    ll_backend__call_gen__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__call_gen__Liveness_2, ll_backend__call_gen__Var_9);
                  }
#line 647 "call_gen.m"
                  if (ll_backend__call_gen__succeeded)
#line 647 "call_gen.m"
                    ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3;
#line 647 "call_gen.m"
                  else
#line 648 "call_gen.m"
                    {
#line 648 "call_gen.m"
                      {
#line 648 "call_gen.m"
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__call_gen__Var_9, ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3, &ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19);
                      }
#line 648 "call_gen.m"
                    }
#line 647 "call_gen.m"
                }
#line 650 "call_gen.m"
                break;
#line 650 "call_gen.m"
              case (MR_Integer) 2:
#line 652 "call_gen.m"
                ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3;
#line 650 "call_gen.m"
                break;
#line 650 "call_gen.m"
            }
#line 655 "call_gen.m"
            /* direct tailcall eliminated */
#line 655 "call_gen.m"
            {
#line 655 "call_gen.m"
              MR_Word ll_backend__call_gen__HeadVar__1__tmp_copy_1 = ll_backend__call_gen__Args_12;
#line 655 "call_gen.m"
              MR_Word ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0__tmp_copy_3 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19;

#line 655 "call_gen.m"
              ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0__tmp_copy_3;
#line 655 "call_gen.m"
              ll_backend__call_gen__HeadVar__1_1 = ll_backend__call_gen__HeadVar__1__tmp_copy_1;
#line 655 "call_gen.m"
            }
#line 655 "call_gen.m"
            continue;
#line 642 "call_gen.m"
          }
#line 640 "call_gen.m"
      }
#line 640 "call_gen.m"
      break;
#line 640 "call_gen.m"
    }
#line 637 "call_gen.m"
}

#line 608 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__kill_dead_input_vars_5_p_0(
#line 608 "call_gen.m"
  MR_Word ll_backend__call_gen__ArgsInfos_6,
#line 608 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_7,
#line 608 "call_gen.m"
  MR_Word * ll_backend__call_gen__NonLiveOutputs_8,
#line 608 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_13,
#line 608 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_14)
#line 608 "call_gen.m"
{
#line 612 "call_gen.m"
  {
#line 612 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 612 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeCtorInfo_17_17;
#line 612 "call_gen.m"
    MR_Word ll_backend__call_gen__Liveness_10;
#line 612 "call_gen.m"
    MR_Word ll_backend__call_gen__PostDeaths_11;
#line 612 "call_gen.m"
    MR_Word ll_backend__call_gen__ImmediatePostDeaths_12;
#line 612 "call_gen.m"
    MR_Word ll_backend__call_gen__V_15_15;

#line 613 "call_gen.m"
    {
#line 613 "call_gen.m"
      ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_0_13, &ll_backend__call_gen__Liveness_10);
    }
#line 2581 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 614 "call_gen.m"
    {
#line 614 "call_gen.m"
      ll_backend__call_gen__V_15_15 = parse_tree__set_of_var__init_0_f_0(ll_backend__call_gen__TypeCtorInfo_17_17);
    }
#line 614 "call_gen.m"
    {
#line 614 "call_gen.m"
      ll_backend__call_gen__find_nonlive_outputs_4_p_0(ll_backend__call_gen__ArgsInfos_6, ll_backend__call_gen__Liveness_10, ll_backend__call_gen__V_15_15, ll_backend__call_gen__NonLiveOutputs_8);
    }
#line 615 "call_gen.m"
    {
#line 615 "call_gen.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__call_gen__GoalInfo_7, &ll_backend__call_gen__PostDeaths_11);
    }
#line 616 "call_gen.m"
    {
#line 616 "call_gen.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__call_gen__TypeCtorInfo_17_17, ll_backend__call_gen__PostDeaths_11, *ll_backend__call_gen__NonLiveOutputs_8, &ll_backend__call_gen__ImmediatePostDeaths_12);
    }
#line 617 "call_gen.m"
    {
#line 617 "call_gen.m"
      ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__call_gen__ImmediatePostDeaths_12, ll_backend__call_gen__STATE_VARIABLE_CLD_0_13, ll_backend__call_gen__STATE_VARIABLE_CLD_14);
#line 617 "call_gen.m"
      return;
    }
#line 612 "call_gen.m"
  }
#line 608 "call_gen.m"
}

#line 561 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__call_comment_4_p_0(
#line 561 "call_gen.m"
  MR_Word ll_backend__call_gen__CI_5,
#line 561 "call_gen.m"
  MR_Word ll_backend__call_gen__PredId_6,
#line 561 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_7,
#line 561 "call_gen.m"
  MR_String * ll_backend__call_gen__Msg_8)
#line 561 "call_gen.m"
{
#line 564 "call_gen.m"
  {
#line 564 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 564 "call_gen.m"
    MR_String ll_backend__call_gen__BaseMsg_9;
#line 564 "call_gen.m"
    MR_Word ll_backend__call_gen__AutoComments_10;

#line 568 "call_gen.m"
#line 568 "call_gen.m"
    switch (ll_backend__call_gen__CodeModel_7) {
#line 568 "call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 568 "call_gen.m"
      case (MR_Integer) 0:
#line 567 "call_gen.m"
        ll_backend__call_gen__BaseMsg_9 = (MR_String) "branch to det procedure";
#line 568 "call_gen.m"
        break;
#line 568 "call_gen.m"
      case (MR_Integer) 2:
#line 573 "call_gen.m"
        ll_backend__call_gen__BaseMsg_9 = (MR_String) "branch to nondet procedure";
#line 568 "call_gen.m"
        break;
#line 568 "call_gen.m"
      case (MR_Integer) 1:
#line 570 "call_gen.m"
        ll_backend__call_gen__BaseMsg_9 = (MR_String) "branch to semidet procedure";
#line 568 "call_gen.m"
        break;
#line 568 "call_gen.m"
    }
#line 575 "call_gen.m"
    {
#line 575 "call_gen.m"
      ll_backend__code_info__get_auto_comments_2_p_0(ll_backend__call_gen__CI_5, &ll_backend__call_gen__AutoComments_10);
    }
#line 582 "call_gen.m"
#line 582 "call_gen.m"
    switch (ll_backend__call_gen__AutoComments_10) {
#line 582 "call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 582 "call_gen.m"
      case (MR_Integer) 0:
#line 584 "call_gen.m"
        *ll_backend__call_gen__Msg_8 = ll_backend__call_gen__BaseMsg_9;
#line 582 "call_gen.m"
        break;
#line 582 "call_gen.m"
      case (MR_Integer) 1:
#line 577 "call_gen.m"
        {
#line 577 "call_gen.m"
          MR_Word ll_backend__call_gen__ModuleInfo_11;
#line 577 "call_gen.m"
          MR_Word ll_backend__call_gen__PredInfo_12;
#line 577 "call_gen.m"
          MR_String ll_backend__call_gen__PredName_13;
#line 577 "call_gen.m"
          MR_String ll_backend__call_gen__V_14_14;

#line 578 "call_gen.m"
          {
#line 578 "call_gen.m"
            ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__CI_5, &ll_backend__call_gen__ModuleInfo_11);
          }
#line 579 "call_gen.m"
          {
#line 579 "call_gen.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__call_gen__ModuleInfo_11, ll_backend__call_gen__PredId_6, &ll_backend__call_gen__PredInfo_12);
          }
#line 580 "call_gen.m"
          {
#line 580 "call_gen.m"
            ll_backend__call_gen__PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__call_gen__PredInfo_12);
          }
#line 581 "call_gen.m"
          {
#line 581 "call_gen.m"
            ll_backend__call_gen__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__call_gen__PredName_13);
          }
#line 581 "call_gen.m"
          {
#line 581 "call_gen.m"
            *ll_backend__call_gen__Msg_8 = mercury__string__f_43_43_2_f_0(ll_backend__call_gen__BaseMsg_9, ll_backend__call_gen__V_14_14);
          }
#line 577 "call_gen.m"
        }
#line 582 "call_gen.m"
        break;
#line 582 "call_gen.m"
    }
#line 564 "call_gen.m"
  }
#line 561 "call_gen.m"
}

#line 533 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__handle_call_failure_6_p_0(
#line 533 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_7,
#line 533 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_8,
#line 533 "call_gen.m"
  MR_Word * ll_backend__call_gen__FailHandlingCode_9,
#line 533 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_17,
#line 533 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_18,
#line 533 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_19)
#line 533 "call_gen.m"
{
#line 538 "call_gen.m"
  {
#line 538 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 538 "call_gen.m"
#line 538 "call_gen.m"
    switch (ll_backend__call_gen__CodeModel_7) {
#line 538 "call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 538 "call_gen.m"
      case (MR_Integer) 0:
#line 538 "call_gen.m"
      case (MR_Integer) 2:
#line 557 "call_gen.m"
        {
#line 558 "call_gen.m"
          {
#line 558 "call_gen.m"
            *ll_backend__call_gen__FailHandlingCode_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
#line 557 "call_gen.m"
          *ll_backend__call_gen__STATE_VARIABLE_CI_18 = ll_backend__call_gen__STATE_VARIABLE_CI_0_17;
#line 557 "call_gen.m"
        }
#line 538 "call_gen.m"
        break;
#line 538 "call_gen.m"
      case (MR_Integer) 1:
#line 538 "call_gen.m"
        {
#line 538 "call_gen.m"
          MR_Word ll_backend__call_gen__Detism_12;

#line 539 "call_gen.m"
          {
#line 539 "call_gen.m"
            ll_backend__call_gen__Detism_12 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__call_gen__GoalInfo_8);
          }
#line 540 "call_gen.m"
          ll_backend__call_gen__succeeded = (ll_backend__call_gen__Detism_12 == (MR_Integer) 7);
#line 542 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 541 "call_gen.m"
            {
#line 541 "call_gen.m"
              ll_backend__code_loc_dep__generate_failure_4_p_0(ll_backend__call_gen__FailHandlingCode_9, ll_backend__call_gen__STATE_VARIABLE_CI_0_17, ll_backend__call_gen__STATE_VARIABLE_CI_18, ll_backend__call_gen__STATE_VARIABLE_CLD_0_19);
#line 541 "call_gen.m"
              return;
            }
#line 542 "call_gen.m"
          else
#line 543 "call_gen.m"
            {
#line 543 "call_gen.m"
              MR_Word ll_backend__call_gen__TypeCtorInfo_35_35;
#line 543 "call_gen.m"
              MR_Word ll_backend__call_gen__ContLab_13;
#line 543 "call_gen.m"
              MR_Word ll_backend__call_gen__FailTestCode_14;
#line 543 "call_gen.m"
              MR_Word ll_backend__call_gen__FailCode_15;
#line 543 "call_gen.m"
              MR_Word ll_backend__call_gen__ContLabelCode_16;
#line 543 "call_gen.m"
              MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_21_21;
#line 543 "call_gen.m"
              MR_Word ll_backend__call_gen__V_22_22;
#line 543 "call_gen.m"
              MR_Word ll_backend__call_gen__V_23_23;
#line 543 "call_gen.m"
              MR_Word ll_backend__call_gen__V_28_28;
#line 543 "call_gen.m"
              MR_Word ll_backend__call_gen__V_31_31;
#line 543 "call_gen.m"
              MR_Word ll_backend__call_gen__V_32_32;
#line 543 "call_gen.m"
              MR_Word ll_backend__call_gen__V_34_34;

#line 543 "call_gen.m"
              {
#line 543 "call_gen.m"
                ll_backend__code_info__get_next_label_3_p_0(&ll_backend__call_gen__ContLab_13, ll_backend__call_gen__STATE_VARIABLE_CI_0_17, &ll_backend__call_gen__STATE_VARIABLE_CI_21_21);
              }
#line 2828 "ll_backend.call_gen.c"
              ll_backend__call_gen__TypeCtorInfo_35_35 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 545 "call_gen.m"
              {
#line 545 "call_gen.m"
                ll_backend__call_gen__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 545 "call_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_28_28, 0) = ((MR_Box) (ll_backend__call_gen__ContLab_13));
#line 545 "call_gen.m"
              }
#line 545 "call_gen.m"
              {
#line 545 "call_gen.m"
                ll_backend__call_gen__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 545 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 545 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_23_23, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_4[0]));
#line 545 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_23_23, 2) = ((MR_Box) (ll_backend__call_gen__V_28_28));
#line 545 "call_gen.m"
              }
#line 545 "call_gen.m"
              {
#line 545 "call_gen.m"
                ll_backend__call_gen__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 545 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_22_22, 0) = ((MR_Box) (ll_backend__call_gen__V_23_23));
#line 545 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_22_22, 1) = ((MR_Box) ((MR_String) "test for success"));
#line 545 "call_gen.m"
              }
#line 544 "call_gen.m"
              {
#line 544 "call_gen.m"
                ll_backend__call_gen__FailTestCode_14 = mercury__cord__singleton_1_f_0(ll_backend__call_gen__TypeCtorInfo_35_35, ((MR_Box) (ll_backend__call_gen__V_22_22)));
              }
#line 548 "call_gen.m"
              {
#line 548 "call_gen.m"
                ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__call_gen__FailCode_15, ll_backend__call_gen__STATE_VARIABLE_CI_21_21, ll_backend__call_gen__STATE_VARIABLE_CI_18, ll_backend__call_gen__STATE_VARIABLE_CLD_0_19);
              }
#line 550 "call_gen.m"
              {
#line 550 "call_gen.m"
                ll_backend__call_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 550 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_32_32, 1) = ((MR_Box) (ll_backend__call_gen__ContLab_13));
#line 550 "call_gen.m"
              }
#line 550 "call_gen.m"
              {
#line 550 "call_gen.m"
                ll_backend__call_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 550 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_31_31, 0) = ((MR_Box) (ll_backend__call_gen__V_32_32));
#line 550 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_31_31, 1) = ((MR_Box) ((MR_String) ""));
#line 550 "call_gen.m"
              }
#line 549 "call_gen.m"
              {
#line 549 "call_gen.m"
                ll_backend__call_gen__ContLabelCode_16 = mercury__cord__singleton_1_f_0(ll_backend__call_gen__TypeCtorInfo_35_35, ((MR_Box) (ll_backend__call_gen__V_31_31)));
              }
#line 552 "call_gen.m"
              {
#line 552 "call_gen.m"
                ll_backend__call_gen__V_34_34 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_35_35, ll_backend__call_gen__FailCode_15, ll_backend__call_gen__ContLabelCode_16);
              }
#line 552 "call_gen.m"
              {
#line 552 "call_gen.m"
                *ll_backend__call_gen__FailHandlingCode_9 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_35_35, ll_backend__call_gen__FailTestCode_14, ll_backend__call_gen__V_34_34);
              }
#line 543 "call_gen.m"
            }
#line 538 "call_gen.m"
        }
#line 538 "call_gen.m"
        break;
#line 538 "call_gen.m"
    }
#line 538 "call_gen.m"
  }
#line 533 "call_gen.m"
}

#line 508 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__prepare_for_call_8_p_0(
#line 508 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_9,
#line 508 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_10,
#line 508 "call_gen.m"
  MR_Word * ll_backend__call_gen__CallModel_11,
#line 508 "call_gen.m"
  MR_Word * ll_backend__call_gen__TraceCode_12,
#line 508 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_17,
#line 508 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_18,
#line 508 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_19,
#line 508 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_20)
#line 508 "call_gen.m"
{
#line 512 "call_gen.m"
  {
#line 512 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 512 "call_gen.m"
    MR_Word ll_backend__call_gen__AllowLCO_15;

#line 513 "call_gen.m"
    {
#line 513 "call_gen.m"
      ll_backend__code_info__succip_is_used_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_17, ll_backend__call_gen__STATE_VARIABLE_CI_18);
    }
#line 514 "call_gen.m"
    {
#line 514 "call_gen.m"
      ll_backend__call_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__call_gen__GoalInfo_10, (MR_Integer) 22);
    }
#line 516 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 515 "call_gen.m"
      ll_backend__call_gen__AllowLCO_15 = (MR_Integer) 0;
#line 516 "call_gen.m"
    else
#line 517 "call_gen.m"
      ll_backend__call_gen__AllowLCO_15 = (MR_Integer) 1;
#line 522 "call_gen.m"
#line 522 "call_gen.m"
    switch (ll_backend__call_gen__CodeModel_9) {
#line 522 "call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 522 "call_gen.m"
      case (MR_Integer) 0:
#line 520 "call_gen.m"
        {
#line 521 "call_gen.m"
          {
#line 521 "call_gen.m"
            MR_Word base;
#line 521 "call_gen.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 521 "call_gen.m"
            *ll_backend__call_gen__CallModel_11 = base;
#line 521 "call_gen.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__call_gen__AllowLCO_15));
#line 521 "call_gen.m"
          }
#line 520 "call_gen.m"
          *ll_backend__call_gen__STATE_VARIABLE_CLD_20 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_19;
#line 520 "call_gen.m"
        }
#line 522 "call_gen.m"
        break;
#line 522 "call_gen.m"
      case (MR_Integer) 2:
#line 526 "call_gen.m"
        {
#line 526 "call_gen.m"
          MR_Word ll_backend__call_gen__TailCallStatus_16;

#line 527 "call_gen.m"
          {
#line 527 "call_gen.m"
            ll_backend__code_loc_dep__may_use_nondet_tailcall_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_0_19, &ll_backend__call_gen__TailCallStatus_16);
          }
#line 528 "call_gen.m"
          {
#line 528 "call_gen.m"
            MR_Word base;
#line 528 "call_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 528 "call_gen.m"
            *ll_backend__call_gen__CallModel_11 = base;
#line 528 "call_gen.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__call_gen__TailCallStatus_16));
#line 528 "call_gen.m"
          }
#line 529 "call_gen.m"
          {
#line 529 "call_gen.m"
            ll_backend__code_loc_dep__set_resume_point_and_frame_to_unknown_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_0_19, ll_backend__call_gen__STATE_VARIABLE_CLD_20);
          }
#line 526 "call_gen.m"
        }
#line 522 "call_gen.m"
        break;
#line 522 "call_gen.m"
      case (MR_Integer) 1:
#line 523 "call_gen.m"
        {
#line 524 "call_gen.m"
          {
#line 524 "call_gen.m"
            MR_Word base;
#line 524 "call_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 524 "call_gen.m"
            *ll_backend__call_gen__CallModel_11 = base;
#line 524 "call_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__AllowLCO_15));
#line 524 "call_gen.m"
          }
#line 523 "call_gen.m"
          *ll_backend__call_gen__STATE_VARIABLE_CLD_20 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_19;
#line 523 "call_gen.m"
        }
#line 522 "call_gen.m"
        break;
#line 522 "call_gen.m"
    }
#line 531 "call_gen.m"
    {
#line 531 "call_gen.m"
      ll_backend__trace_gen__trace_prepare_for_call_2_p_0(*ll_backend__call_gen__STATE_VARIABLE_CI_18, ll_backend__call_gen__TraceCode_12);
#line 531 "call_gen.m"
      return;
    }
#line 512 "call_gen.m"
  }
#line 508 "call_gen.m"
}

#line 452 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generic_call_nonvar_setup_7_p_0(
#line 452 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 452 "call_gen.m"
  MR_Word ll_backend__call_gen__HoCallVariant_2,
#line 452 "call_gen.m"
  MR_Word ll_backend__call_gen__InVarsR_3,
#line 452 "call_gen.m"
  MR_Word ll_backend__call_gen__InVarsF_4,
#line 452 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_5,
#line 452 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_6,
#line 452 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_7)
#line 452 "call_gen.m"
{
#line 457 "call_gen.m"
  {
#line 457 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 457 "call_gen.m"
#line 457 "call_gen.m"
    switch (MR_tag((MR_Word) ll_backend__call_gen__HeadVar__1_1)) {
#line 457 "call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 457 "call_gen.m"
      case (MR_Integer) 0:
#line 461 "call_gen.m"
#line 461 "call_gen.m"
        switch (ll_backend__call_gen__HoCallVariant_2) {
#line 461 "call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 461 "call_gen.m"
          case (MR_Integer) 0:
#line 459 "call_gen.m"
            {
#line 460 "call_gen.m"
              {
#line 460 "call_gen.m"
                *ll_backend__call_gen__Code_5 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 459 "call_gen.m"
              *ll_backend__call_gen__STATE_VARIABLE_CLD_7 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_6;
#line 459 "call_gen.m"
            }
#line 461 "call_gen.m"
            break;
#line 461 "call_gen.m"
          case (MR_Integer) 1:
#line 462 "call_gen.m"
            {
#line 462 "call_gen.m"
              MR_Word ll_backend__call_gen__TypeInfo_117_117;
#line 462 "call_gen.m"
              MR_Integer ll_backend__call_gen__NumInVarsR_17;
#line 462 "call_gen.m"
              MR_Integer ll_backend__call_gen__NumInVarsF_18;
#line 462 "call_gen.m"
              MR_Integer ll_backend__call_gen__NumInVars_19;
#line 462 "call_gen.m"
              MR_Word ll_backend__call_gen__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[3]);
#line 462 "call_gen.m"
              MR_Word ll_backend__call_gen__V_26_26;
#line 462 "call_gen.m"
              MR_Word ll_backend__call_gen__V_27_27;
#line 462 "call_gen.m"
              MR_Word ll_backend__call_gen__V_31_31;
#line 462 "call_gen.m"
              MR_Word ll_backend__call_gen__V_32_32;

#line 463 "call_gen.m"
              {
#line 463 "call_gen.m"
                ll_backend__code_loc_dep__clobber_reg_3_p_0(ll_backend__call_gen__V_22_22, ll_backend__call_gen__STATE_VARIABLE_CLD_0_6, ll_backend__call_gen__STATE_VARIABLE_CLD_7);
              }
#line 3139 "ll_backend.call_gen.c"
              ll_backend__call_gen__TypeInfo_117_117 = (MR_Word) &ll_backend__call_gen_scalar_common_1[0];
#line 464 "call_gen.m"
              {
#line 464 "call_gen.m"
                mercury__list__length_2_p_0(ll_backend__call_gen__TypeInfo_117_117, ll_backend__call_gen__InVarsR_3, &ll_backend__call_gen__NumInVarsR_17);
              }
#line 465 "call_gen.m"
              {
#line 465 "call_gen.m"
                mercury__list__length_2_p_0(ll_backend__call_gen__TypeInfo_117_117, ll_backend__call_gen__InVarsF_4, &ll_backend__call_gen__NumInVarsF_18);
              }
#line 466 "call_gen.m"
              {
#line 466 "call_gen.m"
                ll_backend__call_gen__NumInVars_19 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(ll_backend__call_gen__NumInVarsR_17, ll_backend__call_gen__NumInVarsF_18);
              }
#line 468 "call_gen.m"
              {
#line 468 "call_gen.m"
                ll_backend__call_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 468 "call_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_32_32, 0) = ((MR_Box) (ll_backend__call_gen__NumInVars_19));
#line 468 "call_gen.m"
              }
#line 468 "call_gen.m"
              {
#line 468 "call_gen.m"
                ll_backend__call_gen__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 468 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_31_31, 1) = ((MR_Box) (ll_backend__call_gen__V_32_32));
#line 468 "call_gen.m"
              }
#line 468 "call_gen.m"
              {
#line 468 "call_gen.m"
                ll_backend__call_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 468 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 468 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_27_27, 1) = ((MR_Box) (ll_backend__call_gen__V_22_22));
#line 468 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_27_27, 2) = ((MR_Box) (ll_backend__call_gen__V_31_31));
#line 468 "call_gen.m"
              }
#line 468 "call_gen.m"
              {
#line 468 "call_gen.m"
                ll_backend__call_gen__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 468 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_26_26, 0) = ((MR_Box) (ll_backend__call_gen__V_27_27));
#line 468 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_26_26, 1) = ((MR_Box) ((MR_String) "Assign number of immediate input arguments"));
#line 468 "call_gen.m"
              }
#line 467 "call_gen.m"
              {
#line 467 "call_gen.m"
                *ll_backend__call_gen__Code_5 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__call_gen__V_26_26)));
              }
#line 462 "call_gen.m"
            }
#line 461 "call_gen.m"
            break;
#line 461 "call_gen.m"
        }
#line 457 "call_gen.m"
        break;
#line 457 "call_gen.m"
      case (MR_Integer) 1:
#line 473 "call_gen.m"
        {
#line 473 "call_gen.m"
          MR_Integer ll_backend__call_gen__Method_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 472 "call_gen.m"
          MR_Word ll_backend__call_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 472 "call_gen.m"
          MR_Word ll_backend__call_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 472 "call_gen.m"
          MR_Word ll_backend__call_gen__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 3)));

#line 476 "call_gen.m"
          if ((ll_backend__call_gen__InVarsF_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "call_gen.m"
            {
#line 475 "call_gen.m"
            }
#line 476 "call_gen.m"
          else
#line 477 "call_gen.m"
            {
#line 478 "call_gen.m"
              {
#line 478 "call_gen.m"
                mercury__require__sorry_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/7", (MR_String) "float input reg");
#line 478 "call_gen.m"
                return;
              }
#line 477 "call_gen.m"
            }
#line 487 "call_gen.m"
#line 487 "call_gen.m"
          switch (ll_backend__call_gen__HoCallVariant_2) {
#line 487 "call_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 487 "call_gen.m"
            case (MR_Integer) 0:
#line 481 "call_gen.m"
              {
#line 481 "call_gen.m"
                MR_Word ll_backend__call_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[3]);
#line 481 "call_gen.m"
                MR_Word ll_backend__call_gen__V_86_86;
#line 481 "call_gen.m"
                MR_Word ll_backend__call_gen__V_87_87;
#line 481 "call_gen.m"
                MR_Word ll_backend__call_gen__V_91_91;
#line 481 "call_gen.m"
                MR_Word ll_backend__call_gen__V_92_92;

#line 482 "call_gen.m"
                {
#line 482 "call_gen.m"
                  ll_backend__code_loc_dep__clobber_reg_3_p_0(ll_backend__call_gen__V_82_82, ll_backend__call_gen__STATE_VARIABLE_CLD_0_6, ll_backend__call_gen__STATE_VARIABLE_CLD_7);
                }
#line 484 "call_gen.m"
                {
#line 484 "call_gen.m"
                  ll_backend__call_gen__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 484 "call_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_92_92, 0) = ((MR_Box) (ll_backend__call_gen__Method_35));
#line 484 "call_gen.m"
                }
#line 484 "call_gen.m"
                {
#line 484 "call_gen.m"
                  ll_backend__call_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 484 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_91_91, 1) = ((MR_Box) (ll_backend__call_gen__V_92_92));
#line 484 "call_gen.m"
                }
#line 484 "call_gen.m"
                {
#line 484 "call_gen.m"
                  ll_backend__call_gen__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 484 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 484 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_87_87, 1) = ((MR_Box) (ll_backend__call_gen__V_82_82));
#line 484 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_87_87, 2) = ((MR_Box) (ll_backend__call_gen__V_91_91));
#line 484 "call_gen.m"
                }
#line 484 "call_gen.m"
                {
#line 484 "call_gen.m"
                  ll_backend__call_gen__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 484 "call_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_86_86, 0) = ((MR_Box) (ll_backend__call_gen__V_87_87));
#line 484 "call_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_86_86, 1) = ((MR_Box) ((MR_String) "Index of class method in typeclass info"));
#line 484 "call_gen.m"
                }
#line 483 "call_gen.m"
                {
#line 483 "call_gen.m"
                  *ll_backend__call_gen__Code_5 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__call_gen__V_86_86)));
                }
#line 481 "call_gen.m"
              }
#line 487 "call_gen.m"
              break;
#line 487 "call_gen.m"
            case (MR_Integer) 1:
#line 488 "call_gen.m"
              {
#line 488 "call_gen.m"
                MR_Integer ll_backend__call_gen__NumInVarsR_45;
#line 488 "call_gen.m"
                MR_Integer ll_backend__call_gen__NumInVars_47;
#line 488 "call_gen.m"
                MR_Word ll_backend__call_gen__V_63_63;
#line 488 "call_gen.m"
                MR_Word ll_backend__call_gen__V_64_64;
#line 488 "call_gen.m"
                MR_Word ll_backend__call_gen__V_65_65;
#line 488 "call_gen.m"
                MR_Word ll_backend__call_gen__V_69_69;
#line 488 "call_gen.m"
                MR_Word ll_backend__call_gen__V_70_70;
#line 488 "call_gen.m"
                MR_Word ll_backend__call_gen__V_72_72;
#line 488 "call_gen.m"
                MR_Word ll_backend__call_gen__V_73_73;
#line 488 "call_gen.m"
                MR_Word ll_backend__call_gen__V_74_74;
#line 488 "call_gen.m"
                MR_Word ll_backend__call_gen__V_78_78;
#line 488 "call_gen.m"
                MR_Word ll_backend__call_gen__V_79_79;

#line 489 "call_gen.m"
                {
#line 489 "call_gen.m"
                  ll_backend__code_loc_dep__clobber_regs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[4]), ll_backend__call_gen__STATE_VARIABLE_CLD_0_6, ll_backend__call_gen__STATE_VARIABLE_CLD_7);
                }
#line 490 "call_gen.m"
                {
#line 490 "call_gen.m"
                  mercury__list__length_2_p_0((MR_Word) &ll_backend__call_gen_scalar_common_1[0], ll_backend__call_gen__InVarsR_3, &ll_backend__call_gen__NumInVarsR_45);
                }
#line 493 "call_gen.m"
                {
#line 493 "call_gen.m"
                  ll_backend__call_gen__NumInVars_47 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(ll_backend__call_gen__NumInVarsR_45, (MR_Integer) 0);
                }
#line 495 "call_gen.m"
                {
#line 495 "call_gen.m"
                  ll_backend__call_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 495 "call_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_70_70, 0) = ((MR_Box) (ll_backend__call_gen__Method_35));
#line 495 "call_gen.m"
                }
#line 495 "call_gen.m"
                {
#line 495 "call_gen.m"
                  ll_backend__call_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 495 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_69_69, 1) = ((MR_Box) (ll_backend__call_gen__V_70_70));
#line 495 "call_gen.m"
                }
#line 495 "call_gen.m"
                {
#line 495 "call_gen.m"
                  ll_backend__call_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 495 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 495 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[3])));
#line 495 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_65_65, 2) = ((MR_Box) (ll_backend__call_gen__V_69_69));
#line 495 "call_gen.m"
                }
#line 495 "call_gen.m"
                {
#line 495 "call_gen.m"
                  ll_backend__call_gen__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 495 "call_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_64_64, 0) = ((MR_Box) (ll_backend__call_gen__V_65_65));
#line 495 "call_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_64_64, 1) = ((MR_Box) ((MR_String) "Index of class method in typeclass info"));
#line 495 "call_gen.m"
                }
#line 497 "call_gen.m"
                {
#line 497 "call_gen.m"
                  ll_backend__call_gen__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 497 "call_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_79_79, 0) = ((MR_Box) (ll_backend__call_gen__NumInVars_47));
#line 497 "call_gen.m"
                }
#line 497 "call_gen.m"
                {
#line 497 "call_gen.m"
                  ll_backend__call_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 497 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_78_78, 1) = ((MR_Box) (ll_backend__call_gen__V_79_79));
#line 497 "call_gen.m"
                }
#line 497 "call_gen.m"
                {
#line 497 "call_gen.m"
                  ll_backend__call_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 497 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 497 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[1])));
#line 497 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_74_74, 2) = ((MR_Box) (ll_backend__call_gen__V_78_78));
#line 497 "call_gen.m"
                }
#line 497 "call_gen.m"
                {
#line 497 "call_gen.m"
                  ll_backend__call_gen__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 497 "call_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_73_73, 0) = ((MR_Box) (ll_backend__call_gen__V_74_74));
#line 497 "call_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_73_73, 1) = ((MR_Box) ((MR_String) "Assign number of immediate regular input arguments"));
#line 497 "call_gen.m"
                }
#line 499 "call_gen.m"
                {
#line 499 "call_gen.m"
                  ll_backend__call_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "call_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_72_72, 0) = ((MR_Box) (ll_backend__call_gen__V_73_73));
#line 499 "call_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 499 "call_gen.m"
                }
#line 496 "call_gen.m"
                {
#line 496 "call_gen.m"
                  ll_backend__call_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "call_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_63_63, 0) = ((MR_Box) (ll_backend__call_gen__V_64_64));
#line 496 "call_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_63_63, 1) = ((MR_Box) (ll_backend__call_gen__V_72_72));
#line 496 "call_gen.m"
                }
#line 494 "call_gen.m"
                {
#line 494 "call_gen.m"
                  *ll_backend__call_gen__Code_5 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__call_gen__V_63_63);
                }
#line 488 "call_gen.m"
              }
#line 487 "call_gen.m"
              break;
#line 487 "call_gen.m"
          }
#line 473 "call_gen.m"
        }
#line 457 "call_gen.m"
        break;
#line 457 "call_gen.m"
      case (MR_Integer) 2:
#line 501 "call_gen.m"
        {
#line 502 "call_gen.m"
          {
#line 502 "call_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/7", (MR_String) "event_call");
#line 502 "call_gen.m"
            return;
          }
#line 501 "call_gen.m"
        }
#line 457 "call_gen.m"
        break;
#line 457 "call_gen.m"
      case (MR_Integer) 3:
#line 503 "call_gen.m"
        {
#line 504 "call_gen.m"
          {
#line 504 "call_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/7", (MR_String) "cast");
#line 504 "call_gen.m"
            return;
          }
#line 503 "call_gen.m"
        }
#line 457 "call_gen.m"
        break;
#line 457 "call_gen.m"
    }
#line 457 "call_gen.m"
  }
#line 452 "call_gen.m"
}

#line 373 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__extra_livevals_from_3_p_0(
#line 373 "call_gen.m"
  MR_Integer ll_backend__call_gen__Reg_4,
#line 373 "call_gen.m"
  MR_Integer ll_backend__call_gen__FirstInput_5,
#line 373 "call_gen.m"
  MR_Word * ll_backend__call_gen__ExtraLiveVals_6)
#line 373 "call_gen.m"
{
#line 380 "call_gen.m"
  {
#line 380 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded = (ll_backend__call_gen__Reg_4 < ll_backend__call_gen__FirstInput_5);

#line 380 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 377 "call_gen.m"
      {
#line 377 "call_gen.m"
        MR_Word ll_backend__call_gen__ExtraLiveVals1_7;
#line 377 "call_gen.m"
        MR_Integer ll_backend__call_gen__NextReg_8;
#line 377 "call_gen.m"
        MR_Word ll_backend__call_gen__V_9_9;

#line 377 "call_gen.m"
        {
#line 377 "call_gen.m"
          ll_backend__call_gen__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_9_9, 0) = ((MR_Box) ((MR_Integer) 0));
#line 377 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_9_9, 1) = ((MR_Box) (ll_backend__call_gen__Reg_4));
#line 377 "call_gen.m"
        }
#line 378 "call_gen.m"
        ll_backend__call_gen__NextReg_8 = (ll_backend__call_gen__Reg_4 + (MR_Integer) 1);
#line 379 "call_gen.m"
        {
#line 379 "call_gen.m"
          ll_backend__call_gen__extra_livevals_from_3_p_0(ll_backend__call_gen__NextReg_8, ll_backend__call_gen__FirstInput_5, &ll_backend__call_gen__ExtraLiveVals1_7);
        }
#line 377 "call_gen.m"
        {
#line 377 "call_gen.m"
          MR_Word base;
#line 377 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "call_gen.m"
          *ll_backend__call_gen__ExtraLiveVals_6 = base;
#line 377 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_9_9));
#line 377 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__ExtraLiveVals1_7));
#line 377 "call_gen.m"
        }
#line 377 "call_gen.m"
      }
#line 380 "call_gen.m"
    else
#line 381 "call_gen.m"
      *ll_backend__call_gen__ExtraLiveVals_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 380 "call_gen.m"
  }
#line 373 "call_gen.m"
}

#line 368 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__extra_livevals_2_p_0(
#line 368 "call_gen.m"
  MR_Integer ll_backend__call_gen__FirstInput_3,
#line 368 "call_gen.m"
  MR_Word * ll_backend__call_gen__ExtraLiveVals_4)
#line 368 "call_gen.m"
{
#line 370 "call_gen.m"
  {
#line 370 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 371 "call_gen.m"
    {
#line 371 "call_gen.m"
      ll_backend__call_gen__extra_livevals_from_3_p_0((MR_Integer) 1, ll_backend__call_gen__FirstInput_3, ll_backend__call_gen__ExtraLiveVals_4);
#line 371 "call_gen.m"
      return;
    }
#line 370 "call_gen.m"
  }
#line 368 "call_gen.m"
}

#line 331 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_event_attributes_7_p_0(
#line 331 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 331 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_Vars_0_2,
#line 331 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__3_3,
#line 331 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__4_4,
#line 331 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__5_5,
#line 331 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_6,
#line 331 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_7)
#line 331 "call_gen.m"
{
#line 335 "call_gen.m"
  {
#line 335 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 335 "call_gen.m"
    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 335 "call_gen.m"
      {
#line 335 "call_gen.m"
        *ll_backend__call_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 335 "call_gen.m"
        *ll_backend__call_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 339 "call_gen.m"
        if ((ll_backend__call_gen__STATE_VARIABLE_Vars_0_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 340 "call_gen.m"
          {
#line 340 "call_gen.m"
          }
#line 339 "call_gen.m"
        else
#line 337 "call_gen.m"
          {
#line 338 "call_gen.m"
            {
#line 338 "call_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_event_attributes\'/7", (MR_String) "var");
#line 338 "call_gen.m"
              return;
            }
#line 337 "call_gen.m"
          }
#line 335 "call_gen.m"
        *ll_backend__call_gen__STATE_VARIABLE_CLD_7 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_6;
#line 335 "call_gen.m"
      }
#line 335 "call_gen.m"
    else
#line 343 "call_gen.m"
      {
#line 343 "call_gen.m"
        MR_Word ll_backend__call_gen__Attribute_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 343 "call_gen.m"
        MR_Word ll_backend__call_gen__Attributes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 343 "call_gen.m"
        MR_Word ll_backend__call_gen__MaybeUserAttr_22;
#line 343 "call_gen.m"
        MR_Word ll_backend__call_gen__MaybeUserAttrs_23;
#line 343 "call_gen.m"
        MR_Word ll_backend__call_gen__Code_24;
#line 343 "call_gen.m"
        MR_Word ll_backend__call_gen__Codes_25;
#line 343 "call_gen.m"
        MR_Word ll_backend__call_gen__SynthCall_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_19, (MR_Integer) 4)));
#line 343 "call_gen.m"
        MR_Word ll_backend__call_gen__STATE_VARIABLE_Vars_39_39;
#line 343 "call_gen.m"
        MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_40_40;
#line 344 "call_gen.m"
        MR_Integer ll_backend__call_gen__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_19, (MR_Integer) 0)));
#line 344 "call_gen.m"
        MR_String ll_backend__call_gen__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_19, (MR_Integer) 1)));
#line 344 "call_gen.m"
        MR_Word ll_backend__call_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_19, (MR_Integer) 2)));
#line 344 "call_gen.m"
        MR_Word ll_backend__call_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_19, (MR_Integer) 3)));

#line 356 "call_gen.m"
        if ((ll_backend__call_gen__SynthCall_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 352 "call_gen.m"
          if ((ll_backend__call_gen__STATE_VARIABLE_Vars_0_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 353 "call_gen.m"
            {
#line 354 "call_gen.m"
              {
#line 354 "call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_event_attributes\'/7", (MR_String) "no var");
#line 354 "call_gen.m"
                return;
              }
#line 353 "call_gen.m"
            }
#line 352 "call_gen.m"
          else
#line 348 "call_gen.m"
            {
#line 348 "call_gen.m"
              MR_Word ll_backend__call_gen__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__STATE_VARIABLE_Vars_0_2, (MR_Integer) 0)));
#line 348 "call_gen.m"
              MR_Word ll_backend__call_gen__Rval_30;
#line 348 "call_gen.m"
              MR_Word ll_backend__call_gen__UserAttr_31;

#line 348 "call_gen.m"
              ll_backend__call_gen__STATE_VARIABLE_Vars_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__STATE_VARIABLE_Vars_0_2, (MR_Integer) 1)));
#line 349 "call_gen.m"
              {
#line 349 "call_gen.m"
                ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__call_gen__Var_29, &ll_backend__call_gen__Code_24, &ll_backend__call_gen__Rval_30, ll_backend__call_gen__HeadVar__5_5, ll_backend__call_gen__STATE_VARIABLE_CLD_0_6, &ll_backend__call_gen__STATE_VARIABLE_CLD_40_40);
              }
#line 350 "call_gen.m"
              {
#line 350 "call_gen.m"
                ll_backend__call_gen__UserAttr_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 350 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__UserAttr_31, 0) = ((MR_Box) (ll_backend__call_gen__Rval_30));
#line 350 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__UserAttr_31, 1) = ((MR_Box) (ll_backend__call_gen__Var_29));
#line 350 "call_gen.m"
              }
#line 351 "call_gen.m"
              {
#line 351 "call_gen.m"
                ll_backend__call_gen__MaybeUserAttr_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 351 "call_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeUserAttr_22, 0) = ((MR_Box) (ll_backend__call_gen__UserAttr_31));
#line 351 "call_gen.m"
              }
#line 348 "call_gen.m"
            }
#line 356 "call_gen.m"
        else
#line 357 "call_gen.m"
          {
#line 358 "call_gen.m"
            ll_backend__call_gen__MaybeUserAttr_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 359 "call_gen.m"
            {
#line 359 "call_gen.m"
              ll_backend__call_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 357 "call_gen.m"
            ll_backend__call_gen__STATE_VARIABLE_Vars_39_39 = ll_backend__call_gen__STATE_VARIABLE_Vars_0_2;
#line 357 "call_gen.m"
            ll_backend__call_gen__STATE_VARIABLE_CLD_40_40 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_6;
#line 357 "call_gen.m"
          }
#line 361 "call_gen.m"
        {
#line 361 "call_gen.m"
          ll_backend__call_gen__generate_event_attributes_7_p_0(ll_backend__call_gen__Attributes_20, ll_backend__call_gen__STATE_VARIABLE_Vars_39_39, &ll_backend__call_gen__MaybeUserAttrs_23, &ll_backend__call_gen__Codes_25, ll_backend__call_gen__HeadVar__5_5, ll_backend__call_gen__STATE_VARIABLE_CLD_40_40, ll_backend__call_gen__STATE_VARIABLE_CLD_7);
        }
#line 343 "call_gen.m"
        {
#line 343 "call_gen.m"
          MR_Word base;
#line 343 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "call_gen.m"
          *ll_backend__call_gen__HeadVar__3_3 = base;
#line 343 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__MaybeUserAttr_22));
#line 343 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__MaybeUserAttrs_23));
#line 343 "call_gen.m"
        }
#line 343 "call_gen.m"
        {
#line 343 "call_gen.m"
          MR_Word base;
#line 343 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "call_gen.m"
          *ll_backend__call_gen__HeadVar__4_4 = base;
#line 343 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__Code_24));
#line 343 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__Codes_25));
#line 343 "call_gen.m"
        }
#line 343 "call_gen.m"
      }
#line 335 "call_gen.m"
  }
#line 331 "call_gen.m"
}

#line 62 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__output_arg_locs_2_p_0(
#line 62 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 62 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__2_2)
#line 62 "call_gen.m"
{
#line 806 "call_gen.m"
  {
#line 806 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 806 "call_gen.m"
    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 806 "call_gen.m"
      *ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 806 "call_gen.m"
    else
#line 807 "call_gen.m"
      {
#line 807 "call_gen.m"
        MR_Word ll_backend__call_gen__Var_3;
#line 807 "call_gen.m"
        MR_Word ll_backend__call_gen__Loc_4;
#line 807 "call_gen.m"
        MR_Word ll_backend__call_gen__Mode_5;
#line 807 "call_gen.m"
        MR_Word ll_backend__call_gen__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 807 "call_gen.m"
        MR_Word ll_backend__call_gen__Vs0_8;
#line 807 "call_gen.m"
        MR_Word ll_backend__call_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 807 "call_gen.m"
        MR_Word ll_backend__call_gen__V_10_10;

#line 807 "call_gen.m"
        ll_backend__call_gen__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_9_9, (MR_Integer) 0)));
#line 807 "call_gen.m"
        ll_backend__call_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_9_9, (MR_Integer) 1)));
#line 807 "call_gen.m"
        ll_backend__call_gen__Loc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_10_10, (MR_Integer) 0)));
#line 807 "call_gen.m"
        ll_backend__call_gen__Mode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_10_10, (MR_Integer) 1)));
#line 808 "call_gen.m"
        {
#line 808 "call_gen.m"
          ll_backend__call_gen__output_arg_locs_2_p_0(ll_backend__call_gen__Args_6, &ll_backend__call_gen__Vs0_8);
        }
#line 812 "call_gen.m"
#line 812 "call_gen.m"
        switch (ll_backend__call_gen__Mode_5) {
#line 812 "call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 812 "call_gen.m"
          case (MR_Integer) 0:
#line 812 "call_gen.m"
          case (MR_Integer) 2:
#line 816 "call_gen.m"
            *ll_backend__call_gen__HeadVar__2_2 = ll_backend__call_gen__Vs0_8;
#line 812 "call_gen.m"
            break;
#line 812 "call_gen.m"
          case (MR_Integer) 1:
#line 810 "call_gen.m"
            {
#line 810 "call_gen.m"
              MR_Word ll_backend__call_gen__V_11_11;

#line 811 "call_gen.m"
              {
#line 811 "call_gen.m"
                ll_backend__call_gen__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 811 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_11_11, 0) = ((MR_Box) (ll_backend__call_gen__Var_3));
#line 811 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_11_11, 1) = ((MR_Box) (ll_backend__call_gen__Loc_4));
#line 811 "call_gen.m"
              }
#line 811 "call_gen.m"
              {
#line 811 "call_gen.m"
                MR_Word base;
#line 811 "call_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "call_gen.m"
                *ll_backend__call_gen__HeadVar__2_2 = base;
#line 811 "call_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_11_11));
#line 811 "call_gen.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__Vs0_8));
#line 811 "call_gen.m"
              }
#line 810 "call_gen.m"
            }
#line 812 "call_gen.m"
            break;
#line 812 "call_gen.m"
        }
#line 807 "call_gen.m"
      }
#line 806 "call_gen.m"
  }
#line 62 "call_gen.m"
}

#line 59 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__input_arg_locs_2_p_0(
#line 59 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 59 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__2_2)
#line 59 "call_gen.m"
{
#line 793 "call_gen.m"
  {
#line 793 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 793 "call_gen.m"
    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 793 "call_gen.m"
      *ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 793 "call_gen.m"
    else
#line 794 "call_gen.m"
      {
#line 794 "call_gen.m"
        MR_Word ll_backend__call_gen__Var_3;
#line 794 "call_gen.m"
        MR_Word ll_backend__call_gen__Loc_4;
#line 794 "call_gen.m"
        MR_Word ll_backend__call_gen__Mode_5;
#line 794 "call_gen.m"
        MR_Word ll_backend__call_gen__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 794 "call_gen.m"
        MR_Word ll_backend__call_gen__Vs0_8;
#line 794 "call_gen.m"
        MR_Word ll_backend__call_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 794 "call_gen.m"
        MR_Word ll_backend__call_gen__V_10_10;

#line 794 "call_gen.m"
        ll_backend__call_gen__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_9_9, (MR_Integer) 0)));
#line 794 "call_gen.m"
        ll_backend__call_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_9_9, (MR_Integer) 1)));
#line 794 "call_gen.m"
        ll_backend__call_gen__Loc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_10_10, (MR_Integer) 0)));
#line 794 "call_gen.m"
        ll_backend__call_gen__Mode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_10_10, (MR_Integer) 1)));
#line 795 "call_gen.m"
        {
#line 795 "call_gen.m"
          ll_backend__call_gen__input_arg_locs_2_p_0(ll_backend__call_gen__Args_6, &ll_backend__call_gen__Vs0_8);
        }
#line 799 "call_gen.m"
#line 799 "call_gen.m"
        switch (ll_backend__call_gen__Mode_5) {
#line 799 "call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 799 "call_gen.m"
          case (MR_Integer) 0:
#line 797 "call_gen.m"
            {
#line 797 "call_gen.m"
              MR_Word ll_backend__call_gen__V_11_11;

#line 798 "call_gen.m"
              {
#line 798 "call_gen.m"
                ll_backend__call_gen__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 798 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_11_11, 0) = ((MR_Box) (ll_backend__call_gen__Var_3));
#line 798 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_11_11, 1) = ((MR_Box) (ll_backend__call_gen__Loc_4));
#line 798 "call_gen.m"
              }
#line 798 "call_gen.m"
              {
#line 798 "call_gen.m"
                MR_Word base;
#line 798 "call_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "call_gen.m"
                *ll_backend__call_gen__HeadVar__2_2 = base;
#line 798 "call_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_11_11));
#line 798 "call_gen.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__Vs0_8));
#line 798 "call_gen.m"
              }
#line 797 "call_gen.m"
            }
#line 799 "call_gen.m"
            break;
#line 799 "call_gen.m"
          case (MR_Integer) 1:
#line 799 "call_gen.m"
          case (MR_Integer) 2:
#line 803 "call_gen.m"
            *ll_backend__call_gen__HeadVar__2_2 = ll_backend__call_gen__Vs0_8;
#line 799 "call_gen.m"
            break;
#line 799 "call_gen.m"
        }
#line 794 "call_gen.m"
      }
#line 793 "call_gen.m"
  }
#line 59 "call_gen.m"
}

#line 55 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__generic_call_info_8_p_0(
#line 55 "call_gen.m"
  MR_Word ll_backend__call_gen__Globals_9,
#line 55 "call_gen.m"
  MR_Word ll_backend__call_gen__GenericCall_10,
#line 55 "call_gen.m"
  MR_Integer ll_backend__call_gen__NumInputArgsR_11,
#line 55 "call_gen.m"
  MR_Integer ll_backend__call_gen__NumInputArgsF_12,
#line 55 "call_gen.m"
  MR_Word * ll_backend__call_gen__CodeAddr_13,
#line 55 "call_gen.m"
  MR_Word * ll_backend__call_gen__SpecifierArgInfos_14,
#line 55 "call_gen.m"
  MR_Integer * ll_backend__call_gen__FirstImmediateInputReg_15,
#line 55 "call_gen.m"
  MR_Word * ll_backend__call_gen__HoCallVariant_16)
#line 55 "call_gen.m"
{
#line 387 "call_gen.m"
  {
#line 387 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 387 "call_gen.m"
#line 387 "call_gen.m"
    switch (MR_tag((MR_Word) ll_backend__call_gen__GenericCall_10)) {
#line 387 "call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 387 "call_gen.m"
      case (MR_Integer) 0:
#line 387 "call_gen.m"
        {
#line 387 "call_gen.m"
          MR_Word ll_backend__call_gen__PredVar_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__GenericCall_10, (MR_Integer) 0)));
#line 387 "call_gen.m"
          MR_Integer ll_backend__call_gen__MaxSpec_22;
#line 387 "call_gen.m"
          MR_Word ll_backend__call_gen__V_44_44;
#line 387 "call_gen.m"
          MR_Word ll_backend__call_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__GenericCall_10, (MR_Integer) 1)));
#line 387 "call_gen.m"
          MR_Word ll_backend__call_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__GenericCall_10, (MR_Integer) 2)));
#line 387 "call_gen.m"
          MR_Integer ll_backend__call_gen__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__GenericCall_10, (MR_Integer) 3)));

#line 389 "call_gen.m"
          {
#line 389 "call_gen.m"
            ll_backend__call_gen__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 389 "call_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_44_44, 0) = ((MR_Box) (ll_backend__call_gen__PredVar_17));
#line 389 "call_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_44_44, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_1[6]));
#line 389 "call_gen.m"
          }
#line 389 "call_gen.m"
          {
#line 389 "call_gen.m"
            MR_Word base;
#line 389 "call_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "call_gen.m"
            *ll_backend__call_gen__SpecifierArgInfos_14 = base;
#line 389 "call_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_44_44));
#line 389 "call_gen.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "call_gen.m"
          }
#line 390 "call_gen.m"
          {
#line 390 "call_gen.m"
            libs__globals__lookup_int_option_3_p_0(ll_backend__call_gen__Globals_9, (MR_Integer) 309, &ll_backend__call_gen__MaxSpec_22);
          }
#line 393 "call_gen.m"
          ll_backend__call_gen__succeeded = (ll_backend__call_gen__MaxSpec_22 >= (MR_Integer) 0);
#line 393 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 393 "call_gen.m"
            {
#line 394 "call_gen.m"
              ll_backend__call_gen__succeeded = (ll_backend__call_gen__NumInputArgsR_11 <= ll_backend__call_gen__MaxSpec_22);
#line 393 "call_gen.m"
              if (ll_backend__call_gen__succeeded)
#line 395 "call_gen.m"
                ll_backend__call_gen__succeeded = (ll_backend__call_gen__NumInputArgsF_12 == (MR_Integer) 0);
#line 393 "call_gen.m"
            }
#line 400 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 397 "call_gen.m"
            {
#line 397 "call_gen.m"
              MR_Word ll_backend__call_gen__V_50_50;

#line 397 "call_gen.m"
              {
#line 397 "call_gen.m"
                ll_backend__call_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 397 "call_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_50_50, 0) = ((MR_Box) (ll_backend__call_gen__NumInputArgsR_11));
#line 397 "call_gen.m"
              }
#line 397 "call_gen.m"
              {
#line 397 "call_gen.m"
                MR_Word base;
#line 397 "call_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "call_gen.m"
                *ll_backend__call_gen__CodeAddr_13 = base;
#line 397 "call_gen.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 397 "call_gen.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__call_gen__V_50_50));
#line 397 "call_gen.m"
              }
#line 398 "call_gen.m"
              *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 0;
#line 399 "call_gen.m"
              *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 2;
#line 397 "call_gen.m"
            }
#line 400 "call_gen.m"
          else
#line 401 "call_gen.m"
            {
#line 401 "call_gen.m"
              *ll_backend__call_gen__CodeAddr_13 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__call_gen_scalar_common_1[8]);
#line 402 "call_gen.m"
              *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 1;
#line 403 "call_gen.m"
              *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 3;
#line 401 "call_gen.m"
            }
#line 387 "call_gen.m"
        }
#line 387 "call_gen.m"
        break;
#line 387 "call_gen.m"
      case (MR_Integer) 1:
#line 406 "call_gen.m"
        {
#line 406 "call_gen.m"
          MR_Word ll_backend__call_gen__TCVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__GenericCall_10, (MR_Integer) 0)));
#line 406 "call_gen.m"
          MR_Word ll_backend__call_gen__V_31_31;
#line 406 "call_gen.m"
          MR_Integer ll_backend__call_gen__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__GenericCall_10, (MR_Integer) 1)));
#line 406 "call_gen.m"
          MR_Word ll_backend__call_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__GenericCall_10, (MR_Integer) 2)));
#line 406 "call_gen.m"
          MR_Word ll_backend__call_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__GenericCall_10, (MR_Integer) 3)));

#line 408 "call_gen.m"
          {
#line 408 "call_gen.m"
            ll_backend__call_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 408 "call_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_31_31, 0) = ((MR_Box) (ll_backend__call_gen__TCVar_23));
#line 408 "call_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_31_31, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_1[6]));
#line 408 "call_gen.m"
          }
#line 408 "call_gen.m"
          {
#line 408 "call_gen.m"
            MR_Word base;
#line 408 "call_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "call_gen.m"
            *ll_backend__call_gen__SpecifierArgInfos_14 = base;
#line 408 "call_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_31_31));
#line 408 "call_gen.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "call_gen.m"
          }
#line 410 "call_gen.m"
          ll_backend__call_gen__succeeded = (ll_backend__call_gen__NumInputArgsF_12 == (MR_Integer) 0);
#line 426 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 412 "call_gen.m"
            {
#line 412 "call_gen.m"
              MR_Integer ll_backend__call_gen__MaxSpec_52;

#line 411 "call_gen.m"
              {
#line 411 "call_gen.m"
                libs__globals__lookup_int_option_3_p_0(ll_backend__call_gen__Globals_9, (MR_Integer) 310, &ll_backend__call_gen__MaxSpec_52);
              }
#line 414 "call_gen.m"
              ll_backend__call_gen__succeeded = (ll_backend__call_gen__MaxSpec_52 >= (MR_Integer) 0);
#line 414 "call_gen.m"
              if (ll_backend__call_gen__succeeded)
#line 415 "call_gen.m"
                ll_backend__call_gen__succeeded = (ll_backend__call_gen__NumInputArgsR_11 <= ll_backend__call_gen__MaxSpec_52);
#line 421 "call_gen.m"
              if (ll_backend__call_gen__succeeded)
#line 418 "call_gen.m"
                {
#line 418 "call_gen.m"
                  MR_Word ll_backend__call_gen__V_37_37;

#line 418 "call_gen.m"
                  {
#line 418 "call_gen.m"
                    ll_backend__call_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 418 "call_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_37_37, 0) = ((MR_Box) (ll_backend__call_gen__NumInputArgsR_11));
#line 418 "call_gen.m"
                  }
#line 417 "call_gen.m"
                  {
#line 417 "call_gen.m"
                    MR_Word base;
#line 417 "call_gen.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "call_gen.m"
                    *ll_backend__call_gen__CodeAddr_13 = base;
#line 417 "call_gen.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 417 "call_gen.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__call_gen__V_37_37));
#line 417 "call_gen.m"
                  }
#line 419 "call_gen.m"
                  *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 0;
#line 420 "call_gen.m"
                  *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 3;
#line 418 "call_gen.m"
                }
#line 421 "call_gen.m"
              else
#line 422 "call_gen.m"
                {
#line 422 "call_gen.m"
                  *ll_backend__call_gen__CodeAddr_13 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__call_gen_scalar_common_1[7]);
#line 423 "call_gen.m"
                  *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 1;
#line 424 "call_gen.m"
                  *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 4;
#line 422 "call_gen.m"
                }
#line 412 "call_gen.m"
            }
#line 426 "call_gen.m"
          else
#line 427 "call_gen.m"
            {
#line 427 "call_gen.m"
              {
#line 427 "call_gen.m"
                mercury__require__sorry_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generic_call_info\'/8", (MR_String) "float reg inputs");
#line 427 "call_gen.m"
                return;
              }
#line 427 "call_gen.m"
            }
#line 406 "call_gen.m"
        }
#line 387 "call_gen.m"
        break;
#line 387 "call_gen.m"
      case (MR_Integer) 2:
#line 387 "call_gen.m"
      case (MR_Integer) 3:
#line 433 "call_gen.m"
        {
#line 434 "call_gen.m"
          *ll_backend__call_gen__CodeAddr_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 435 "call_gen.m"
          *ll_backend__call_gen__SpecifierArgInfos_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 436 "call_gen.m"
          *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 1;
#line 437 "call_gen.m"
          *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 1;
#line 433 "call_gen.m"
        }
#line 387 "call_gen.m"
        break;
#line 387 "call_gen.m"
    }
#line 387 "call_gen.m"
  }
#line 55 "call_gen.m"
}

#line 701 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_builtin_9_p_0_1(
#line 701 "call_gen.m"
  MR_Box ll_backend__call_gen__closure_arg,
#line 701 "call_gen.m"
  MR_Box ll_backend__call_gen__wrapper_arg_1,
#line 701 "call_gen.m"
  MR_Box ll_backend__call_gen__wrapper_arg_2,
#line 701 "call_gen.m"
  MR_Box * ll_backend__call_gen__wrapper_arg_3)
#line 701 "call_gen.m"
{
#line 701 "call_gen.m"
  {
#line 701 "call_gen.m"
    MR_Box ll_backend__call_gen__closure = ll_backend__call_gen__closure_arg;
#line 701 "call_gen.m"
    MR_Word ll_backend__call_gen__conv0_HeadVar__3_3;

#line 701 "call_gen.m"
    {
#line 701 "call_gen.m"
      ll_backend__code_loc_dep__magically_put_var_in_unused_reg_3_p_0(((MR_Word) ll_backend__call_gen__wrapper_arg_1), ((MR_Word) ll_backend__call_gen__wrapper_arg_2), &ll_backend__call_gen__conv0_HeadVar__3_3);
    }
#line 701 "call_gen.m"
    *ll_backend__call_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__call_gen__conv0_HeadVar__3_3));
#line 701 "call_gen.m"
  }
#line 701 "call_gen.m"
}

#line 43 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__generate_builtin_9_p_0(
#line 43 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_10,
#line 43 "call_gen.m"
  MR_Word ll_backend__call_gen__PredId_11,
#line 43 "call_gen.m"
  MR_Integer ll_backend__call_gen__ProcId_12,
#line 43 "call_gen.m"
  MR_Word ll_backend__call_gen__Args_13,
#line 43 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_14,
#line 43 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_42,
#line 43 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_43,
#line 43 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_44,
#line 43 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_45)
#line 43 "call_gen.m"
{
#line 678 "call_gen.m"
  {
#line 678 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 678 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeInfo_73_73;
#line 678 "call_gen.m"
    MR_Word ll_backend__call_gen__ModuleInfo_17;
#line 678 "call_gen.m"
    MR_Word ll_backend__call_gen__ModuleName_18;
#line 678 "call_gen.m"
    MR_String ll_backend__call_gen__PredName_19;
#line 678 "call_gen.m"
    MR_Word ll_backend__call_gen__SimpleCode_20;

#line 679 "call_gen.m"
    {
#line 679 "call_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_42, &ll_backend__call_gen__ModuleInfo_17);
    }
#line 680 "call_gen.m"
    {
#line 680 "call_gen.m"
      ll_backend__call_gen__ModuleName_18 = hlds__hlds_module__predicate_module_2_f_0(ll_backend__call_gen__ModuleInfo_17, ll_backend__call_gen__PredId_11);
    }
#line 681 "call_gen.m"
    {
#line 681 "call_gen.m"
      ll_backend__call_gen__PredName_19 = hlds__hlds_module__predicate_name_2_f_0(ll_backend__call_gen__ModuleInfo_17, ll_backend__call_gen__PredId_11);
    }
#line 4393 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeInfo_73_73 = (MR_Word) &ll_backend__call_gen_scalar_common_1[0];
#line 682 "call_gen.m"
    {
#line 682 "call_gen.m"
      backend_libs__builtin_ops__translate_builtin_5_p_0(ll_backend__call_gen__TypeInfo_73_73, ll_backend__call_gen__ModuleName_18, ll_backend__call_gen__PredName_19, ll_backend__call_gen__ProcId_12, ll_backend__call_gen__Args_13, &ll_backend__call_gen__SimpleCode_20);
    }
#line 704 "call_gen.m"
#line 704 "call_gen.m"
    switch (ll_backend__call_gen__CodeModel_10) {
#line 704 "call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 704 "call_gen.m"
      case (MR_Integer) 0:
#line 685 "call_gen.m"
        {
#line 689 "call_gen.m"
#line 689 "call_gen.m"
          switch (MR_tag((MR_Word) ll_backend__call_gen__SimpleCode_20)) {
#line 689 "call_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 689 "call_gen.m"
            case (MR_Integer) 0:
#line 687 "call_gen.m"
              {
#line 687 "call_gen.m"
                MR_Word ll_backend__call_gen__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__SimpleCode_20, (MR_Integer) 0)));
#line 687 "call_gen.m"
                MR_Word ll_backend__call_gen__AssignExpr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__SimpleCode_20, (MR_Integer) 1)));

#line 733 "call_gen.m"
                {
#line 733 "call_gen.m"
                  ll_backend__call_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_0_44, ll_backend__call_gen__Var_21);
                }
#line 736 "call_gen.m"
                if (ll_backend__call_gen__succeeded)
#line 734 "call_gen.m"
                  {
#line 734 "call_gen.m"
                    MR_Word ll_backend__call_gen__Rval_87;

#line 734 "call_gen.m"
                    {
#line 734 "call_gen.m"
                      ll_backend__call_gen__Rval_87 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__AssignExpr_22);
                    }
#line 735 "call_gen.m"
                    {
#line 735 "call_gen.m"
                      ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ll_backend__call_gen__Var_21, ll_backend__call_gen__Rval_87, ll_backend__call_gen__Code_14, ll_backend__call_gen__STATE_VARIABLE_CLD_0_44, ll_backend__call_gen__STATE_VARIABLE_CLD_45);
                    }
#line 734 "call_gen.m"
                  }
#line 736 "call_gen.m"
                else
#line 737 "call_gen.m"
                  {
#line 737 "call_gen.m"
                    {
#line 737 "call_gen.m"
                      *ll_backend__call_gen__Code_14 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                    }
#line 737 "call_gen.m"
                    *ll_backend__call_gen__STATE_VARIABLE_CLD_45 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_44;
#line 737 "call_gen.m"
                  }
#line 687 "call_gen.m"
              }
#line 689 "call_gen.m"
              break;
#line 689 "call_gen.m"
            case (MR_Integer) 1:
#line 690 "call_gen.m"
              {
#line 690 "call_gen.m"
                MR_Word ll_backend__call_gen__TypeCtorInfo_74_74;
#line 690 "call_gen.m"
                MR_Word ll_backend__call_gen__AddrVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__SimpleCode_20, (MR_Integer) 0)));
#line 690 "call_gen.m"
                MR_Word ll_backend__call_gen__ValueVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__SimpleCode_20, (MR_Integer) 1)));
#line 690 "call_gen.m"
                MR_Word ll_backend__call_gen__AddrVarCode_25;
#line 690 "call_gen.m"
                MR_Word ll_backend__call_gen__AddrRval_26;
#line 690 "call_gen.m"
                MR_Word ll_backend__call_gen__ValueVarCode_27;
#line 690 "call_gen.m"
                MR_Word ll_backend__call_gen__ValueRval_28;
#line 690 "call_gen.m"
                MR_Word ll_backend__call_gen__StoreInstr_29;
#line 690 "call_gen.m"
                MR_Word ll_backend__call_gen__StoreCode_30;
#line 690 "call_gen.m"
                MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_66_66;
#line 690 "call_gen.m"
                MR_Word ll_backend__call_gen__V_68_68;
#line 690 "call_gen.m"
                MR_Word ll_backend__call_gen__V_69_69;
#line 690 "call_gen.m"
                MR_Word ll_backend__call_gen__V_71_71;

#line 691 "call_gen.m"
                {
#line 691 "call_gen.m"
                  ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__call_gen__AddrVar_23, &ll_backend__call_gen__AddrVarCode_25, &ll_backend__call_gen__AddrRval_26, ll_backend__call_gen__STATE_VARIABLE_CI_0_42, ll_backend__call_gen__STATE_VARIABLE_CLD_0_44, &ll_backend__call_gen__STATE_VARIABLE_CLD_66_66);
                }
#line 692 "call_gen.m"
                {
#line 692 "call_gen.m"
                  ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__call_gen__ValueVar_24, &ll_backend__call_gen__ValueVarCode_27, &ll_backend__call_gen__ValueRval_28, ll_backend__call_gen__STATE_VARIABLE_CI_0_42, ll_backend__call_gen__STATE_VARIABLE_CLD_66_66, ll_backend__call_gen__STATE_VARIABLE_CLD_45);
                }
#line 693 "call_gen.m"
                {
#line 693 "call_gen.m"
                  ll_backend__call_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 693 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_69_69, 1) = ((MR_Box) (ll_backend__call_gen__AddrRval_26));
#line 693 "call_gen.m"
                }
#line 693 "call_gen.m"
                {
#line 693 "call_gen.m"
                  ll_backend__call_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 693 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 693 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_68_68, 1) = ((MR_Box) (ll_backend__call_gen__V_69_69));
#line 693 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_68_68, 2) = ((MR_Box) (ll_backend__call_gen__ValueRval_28));
#line 693 "call_gen.m"
                }
#line 693 "call_gen.m"
                {
#line 693 "call_gen.m"
                  ll_backend__call_gen__StoreInstr_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 693 "call_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__StoreInstr_29, 0) = ((MR_Box) (ll_backend__call_gen__V_68_68));
#line 693 "call_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__StoreInstr_29, 1) = ((MR_Box) ((MR_String) ""));
#line 693 "call_gen.m"
                }
#line 4537 "ll_backend.call_gen.c"
                ll_backend__call_gen__TypeCtorInfo_74_74 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 694 "call_gen.m"
                {
#line 694 "call_gen.m"
                  ll_backend__call_gen__StoreCode_30 = mercury__cord__singleton_1_f_0(ll_backend__call_gen__TypeCtorInfo_74_74, ((MR_Box) (ll_backend__call_gen__StoreInstr_29)));
                }
#line 695 "call_gen.m"
                {
#line 695 "call_gen.m"
                  ll_backend__call_gen__V_71_71 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_74_74, ll_backend__call_gen__ValueVarCode_27, ll_backend__call_gen__StoreCode_30);
                }
#line 695 "call_gen.m"
                {
#line 695 "call_gen.m"
                  *ll_backend__call_gen__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_74_74, ll_backend__call_gen__AddrVarCode_25, ll_backend__call_gen__V_71_71);
                }
#line 690 "call_gen.m"
              }
#line 689 "call_gen.m"
              break;
#line 689 "call_gen.m"
            case (MR_Integer) 2:
#line 697 "call_gen.m"
              {
#line 698 "call_gen.m"
                {
#line 698 "call_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/9", (MR_String) "malformed model_det builtin predicate");
#line 698 "call_gen.m"
                  return;
                }
#line 697 "call_gen.m"
              }
#line 689 "call_gen.m"
              break;
#line 689 "call_gen.m"
            case (MR_Integer) 3:
#line 700 "call_gen.m"
              {
#line 700 "call_gen.m"
                MR_Word ll_backend__call_gen__DefinedVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__SimpleCode_20, (MR_Integer) 0)));
#line 701 "call_gen.m"
                MR_Box ll_backend__call_gen__conv1_STATE_VARIABLE_CLD_45;

#line 701 "call_gen.m"
                {
#line 701 "call_gen.m"
                  mercury__list__foldl_4_p_0(ll_backend__call_gen__TypeInfo_73_73, (MR_Word) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0, (MR_Word) &ll_backend__call_gen_scalar_common_2[1], ll_backend__call_gen__DefinedVars_32, ((MR_Box) (ll_backend__call_gen__STATE_VARIABLE_CLD_0_44)), &ll_backend__call_gen__conv1_STATE_VARIABLE_CLD_45);
                }
#line 701 "call_gen.m"
                *ll_backend__call_gen__STATE_VARIABLE_CLD_45 = ((MR_Word) ll_backend__call_gen__conv1_STATE_VARIABLE_CLD_45);
#line 702 "call_gen.m"
                {
#line 702 "call_gen.m"
                  *ll_backend__call_gen__Code_14 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
#line 700 "call_gen.m"
              }
#line 689 "call_gen.m"
              break;
#line 689 "call_gen.m"
          }
#line 685 "call_gen.m"
          *ll_backend__call_gen__STATE_VARIABLE_CI_43 = ll_backend__call_gen__STATE_VARIABLE_CI_0_42;
#line 685 "call_gen.m"
        }
#line 704 "call_gen.m"
        break;
#line 704 "call_gen.m"
      case (MR_Integer) 2:
#line 725 "call_gen.m"
        {
#line 726 "call_gen.m"
          {
#line 726 "call_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/9", (MR_String) "model_non builtin predicate");
#line 726 "call_gen.m"
            return;
          }
#line 725 "call_gen.m"
        }
#line 704 "call_gen.m"
        break;
#line 704 "call_gen.m"
      case (MR_Integer) 1:
#line 711 "call_gen.m"
#line 711 "call_gen.m"
        switch (MR_tag((MR_Word) ll_backend__call_gen__SimpleCode_20)) {
#line 711 "call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 711 "call_gen.m"
          case (MR_Integer) 0:
#line 712 "call_gen.m"
            {
#line 713 "call_gen.m"
              {
#line 713 "call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
#line 713 "call_gen.m"
                return;
              }
#line 712 "call_gen.m"
            }
#line 711 "call_gen.m"
            break;
#line 711 "call_gen.m"
          case (MR_Integer) 1:
#line 716 "call_gen.m"
            {
#line 717 "call_gen.m"
              {
#line 717 "call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
#line 717 "call_gen.m"
                return;
              }
#line 716 "call_gen.m"
            }
#line 711 "call_gen.m"
            break;
#line 711 "call_gen.m"
          case (MR_Integer) 2:
#line 707 "call_gen.m"
            {
#line 707 "call_gen.m"
              MR_Word ll_backend__call_gen__TestExpr_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__call_gen__SimpleCode_20, (MR_Integer) 0)));
#line 707 "call_gen.m"
              MR_Word ll_backend__call_gen__Rval_34;
#line 707 "call_gen.m"
              MR_Word ll_backend__call_gen__ArgCode_35;
#line 707 "call_gen.m"
              MR_Word ll_backend__call_gen__TestCode_36;
#line 707 "call_gen.m"
              MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_58_58;

#line 708 "call_gen.m"
              {
#line 708 "call_gen.m"
                ll_backend__call_gen__generate_simple_test_6_p_0(ll_backend__call_gen__TestExpr_33, &ll_backend__call_gen__Rval_34, &ll_backend__call_gen__ArgCode_35, ll_backend__call_gen__STATE_VARIABLE_CI_0_42, ll_backend__call_gen__STATE_VARIABLE_CLD_0_44, &ll_backend__call_gen__STATE_VARIABLE_CLD_58_58);
              }
#line 709 "call_gen.m"
              {
#line 709 "call_gen.m"
                ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(ll_backend__call_gen__Rval_34, &ll_backend__call_gen__TestCode_36, ll_backend__call_gen__STATE_VARIABLE_CI_0_42, ll_backend__call_gen__STATE_VARIABLE_CI_43, ll_backend__call_gen__STATE_VARIABLE_CLD_58_58, ll_backend__call_gen__STATE_VARIABLE_CLD_45);
              }
#line 710 "call_gen.m"
              {
#line 710 "call_gen.m"
                *ll_backend__call_gen__Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__call_gen__ArgCode_35, ll_backend__call_gen__TestCode_36);
              }
#line 707 "call_gen.m"
            }
#line 711 "call_gen.m"
            break;
#line 711 "call_gen.m"
          case (MR_Integer) 3:
#line 720 "call_gen.m"
            {
#line 721 "call_gen.m"
              {
#line 721 "call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
#line 721 "call_gen.m"
                return;
              }
#line 720 "call_gen.m"
            }
#line 711 "call_gen.m"
            break;
#line 711 "call_gen.m"
        }
#line 704 "call_gen.m"
        break;
#line 704 "call_gen.m"
    }
#line 678 "call_gen.m"
  }
#line 43 "call_gen.m"
}

#line 38 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__generate_generic_call_12_p_0(
#line 38 "call_gen.m"
  MR_Word ll_backend__call_gen__OuterCodeModel_13,
#line 38 "call_gen.m"
  MR_Word ll_backend__call_gen__GenericCall_14,
#line 38 "call_gen.m"
  MR_Word ll_backend__call_gen__Args_15,
#line 38 "call_gen.m"
  MR_Word ll_backend__call_gen__Modes_16,
#line 38 "call_gen.m"
  MR_Word ll_backend__call_gen__MaybeRegTypes_17,
#line 38 "call_gen.m"
  MR_Word ll_backend__call_gen__Det_18,
#line 38 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_19,
#line 38 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_20,
#line 38 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_39,
#line 38 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_40,
#line 38 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_41,
#line 38 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_42)
#line 38 "call_gen.m"
{
#line 182 "call_gen.m"
  {
#line 182 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 182 "call_gen.m"
    {
#line 182 "call_gen.m"
      ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(ll_backend__call_gen__GenericCall_14, ll_backend__call_gen__Args_15, ll_backend__call_gen__Modes_16, ll_backend__call_gen__MaybeRegTypes_17, ll_backend__call_gen__Det_18, ll_backend__call_gen__GoalInfo_19, ll_backend__call_gen__Code_20, ll_backend__call_gen__STATE_VARIABLE_CI_0_39, ll_backend__call_gen__STATE_VARIABLE_CI_40, ll_backend__call_gen__STATE_VARIABLE_CLD_0_41, ll_backend__call_gen__STATE_VARIABLE_CLD_42);
#line 182 "call_gen.m"
      return;
    }
#line 182 "call_gen.m"
  }
#line 38 "call_gen.m"
}

#line 34 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__generate_call_10_p_0(
#line 34 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_11,
#line 34 "call_gen.m"
  MR_Word ll_backend__call_gen__PredId_12,
#line 34 "call_gen.m"
  MR_Integer ll_backend__call_gen__ProcId_13,
#line 34 "call_gen.m"
  MR_Word ll_backend__call_gen__ArgVars_14,
#line 34 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_15,
#line 34 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_16,
#line 34 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_48,
#line 34 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_49,
#line 34 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_50,
#line 34 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_51)
#line 34 "call_gen.m"
{
#line 96 "call_gen.m"
  {
#line 96 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeCtorInfo_92_92;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__ArgInfo_19;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__ArgsInfos_20;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__LiveVals_21;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__SetupCode_22;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__CallModel_24;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__TraceResetCode_25;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__ModuleInfo_26;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__Address_27;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnLabel_28;
#line 96 "call_gen.m"
    MR_String ll_backend__call_gen__CallComment_29;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__Context_30;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__GoalId_31;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__MaybeContainingGoalMap_32;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__MaybeGoalPath_35;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__CallCode_36;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnLiveLvalues_37;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__InstMap_38;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__InstMapDelta_39;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnInstMap_40;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__AfterReturn_41;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__FailHandlingCode_42;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_52_52;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_53_53;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_54_54;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_55_55;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_57_57;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__V_58_58;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__V_59_59;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__V_60_60;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__V_62_62;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__V_63_63;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__V_64_64;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__V_65_65;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__V_66_66;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__V_67_67;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__V_68_68;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_71_71;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_72_72;
#line 96 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_73_73;
#line 104 "call_gen.m"
    MR_Word ll_backend__call_gen__NonLiveOutputs_23;
#line 162 "call_gen.m"
    MR_Word ll_backend__call_gen__TraceInfo_44;
#line 150 "call_gen.m"
    MR_Word ll_backend__call_gen__MaybeTraceInfo_43;

#line 98 "call_gen.m"
    {
#line 98 "call_gen.m"
      ll_backend__call_gen__ArgInfo_19 = ll_backend__code_info__get_pred_proc_arginfo_3_f_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_48, ll_backend__call_gen__PredId_12, ll_backend__call_gen__ProcId_13);
    }
#line 99 "call_gen.m"
    {
#line 99 "call_gen.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &ll_backend__call_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, ll_backend__call_gen__ArgVars_14, ll_backend__call_gen__ArgInfo_19, &ll_backend__call_gen__ArgsInfos_20);
    }
#line 103 "call_gen.m"
    {
#line 103 "call_gen.m"
      ll_backend__code_loc_dep__setup_call_7_p_0(ll_backend__call_gen__GoalInfo_15, ll_backend__call_gen__ArgsInfos_20, &ll_backend__call_gen__LiveVals_21, &ll_backend__call_gen__SetupCode_22, ll_backend__call_gen__STATE_VARIABLE_CI_0_48, ll_backend__call_gen__STATE_VARIABLE_CLD_0_50, &ll_backend__call_gen__STATE_VARIABLE_CLD_52_52);
    }
#line 104 "call_gen.m"
    {
#line 104 "call_gen.m"
      ll_backend__call_gen__kill_dead_input_vars_5_p_0(ll_backend__call_gen__ArgsInfos_20, ll_backend__call_gen__GoalInfo_15, &ll_backend__call_gen__NonLiveOutputs_23, ll_backend__call_gen__STATE_VARIABLE_CLD_52_52, &ll_backend__call_gen__STATE_VARIABLE_CLD_53_53);
    }
#line 107 "call_gen.m"
    {
#line 107 "call_gen.m"
      ll_backend__call_gen__prepare_for_call_8_p_0(ll_backend__call_gen__CodeModel_11, ll_backend__call_gen__GoalInfo_15, &ll_backend__call_gen__CallModel_24, &ll_backend__call_gen__TraceResetCode_25, ll_backend__call_gen__STATE_VARIABLE_CI_0_48, &ll_backend__call_gen__STATE_VARIABLE_CI_54_54, ll_backend__call_gen__STATE_VARIABLE_CLD_53_53, &ll_backend__call_gen__STATE_VARIABLE_CLD_55_55);
    }
#line 112 "call_gen.m"
    {
#line 112 "call_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_54_54, &ll_backend__call_gen__ModuleInfo_26);
    }
#line 113 "call_gen.m"
    {
#line 113 "call_gen.m"
      ll_backend__call_gen__Address_27 = ll_backend__code_info__make_proc_entry_label_5_f_0(ll_backend__call_gen__STATE_VARIABLE_CI_54_54, ll_backend__call_gen__ModuleInfo_26, ll_backend__call_gen__PredId_12, ll_backend__call_gen__ProcId_13, (MR_Integer) 1);
    }
#line 114 "call_gen.m"
    {
#line 114 "call_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__call_gen__ReturnLabel_28, ll_backend__call_gen__STATE_VARIABLE_CI_54_54, &ll_backend__call_gen__STATE_VARIABLE_CI_57_57);
    }
#line 115 "call_gen.m"
    {
#line 115 "call_gen.m"
      ll_backend__call_gen__call_comment_4_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_57_57, ll_backend__call_gen__PredId_12, ll_backend__call_gen__CodeModel_11, &ll_backend__call_gen__CallComment_29);
    }
#line 116 "call_gen.m"
    {
#line 116 "call_gen.m"
      ll_backend__call_gen__Context_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__call_gen__GoalInfo_15);
    }
#line 117 "call_gen.m"
    {
#line 117 "call_gen.m"
      ll_backend__call_gen__GoalId_31 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__call_gen__GoalInfo_15);
    }
#line 118 "call_gen.m"
    {
#line 118 "call_gen.m"
      ll_backend__code_info__get_maybe_containing_goal_map_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_57_57, &ll_backend__call_gen__MaybeContainingGoalMap_32);
    }
#line 123 "call_gen.m"
    if ((ll_backend__call_gen__MaybeContainingGoalMap_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 125 "call_gen.m"
      ll_backend__call_gen__MaybeGoalPath_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 123 "call_gen.m"
    else
#line 120 "call_gen.m"
      {
#line 120 "call_gen.m"
        MR_Word ll_backend__call_gen__ContainingGoalMap_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeContainingGoalMap_32, (MR_Integer) 0)));
#line 120 "call_gen.m"
        MR_Word ll_backend__call_gen__GoalPath_34;

#line 121 "call_gen.m"
        {
#line 121 "call_gen.m"
          ll_backend__call_gen__GoalPath_34 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__call_gen__ContainingGoalMap_33, ll_backend__call_gen__GoalId_31);
        }
#line 122 "call_gen.m"
        {
#line 122 "call_gen.m"
          ll_backend__call_gen__MaybeGoalPath_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 122 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeGoalPath_35, 0) = ((MR_Box) (ll_backend__call_gen__GoalPath_34));
#line 122 "call_gen.m"
        }
#line 120 "call_gen.m"
      }
#line 4968 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeCtorInfo_92_92 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 128 "call_gen.m"
    {
#line 128 "call_gen.m"
      ll_backend__call_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 128 "call_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__call_gen__V_60_60, 0) = ((MR_Box) (ll_backend__call_gen__LiveVals_21));
#line 128 "call_gen.m"
    }
#line 128 "call_gen.m"
    {
#line 128 "call_gen.m"
      ll_backend__call_gen__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 128 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_59_59, 0) = ((MR_Box) (ll_backend__call_gen__V_60_60));
#line 128 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_59_59, 1) = ((MR_Box) ((MR_String) ""));
#line 128 "call_gen.m"
    }
#line 129 "call_gen.m"
    {
#line 129 "call_gen.m"
      ll_backend__call_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 129 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_65_65, 0) = ((MR_Box) (ll_backend__call_gen__ReturnLabel_28));
#line 129 "call_gen.m"
    }
#line 131 "call_gen.m"
    {
#line 131 "call_gen.m"
      ll_backend__call_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 131 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 131 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_68_68, 1) = ((MR_Box) (ll_backend__call_gen__ReturnLabel_28));
#line 131 "call_gen.m"
    }
#line 131 "call_gen.m"
    {
#line 131 "call_gen.m"
      ll_backend__call_gen__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 131 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_67_67, 0) = ((MR_Box) (ll_backend__call_gen__V_68_68));
#line 131 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_67_67, 1) = ((MR_Box) ((MR_String) "continuation label"));
#line 131 "call_gen.m"
    }
#line 132 "call_gen.m"
    {
#line 132 "call_gen.m"
      ll_backend__call_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 132 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_66_66, 0) = ((MR_Box) (ll_backend__call_gen__V_67_67));
#line 132 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 132 "call_gen.m"
    }
#line 136 "call_gen.m"
    {
#line 136 "call_gen.m"
      ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_55_55, &ll_backend__call_gen__InstMap_38);
    }
#line 137 "call_gen.m"
    {
#line 137 "call_gen.m"
      ll_backend__call_gen__InstMapDelta_39 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__call_gen__GoalInfo_15);
    }
#line 138 "call_gen.m"
    {
#line 138 "call_gen.m"
      hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__call_gen__InstMap_38, ll_backend__call_gen__InstMapDelta_39, &ll_backend__call_gen__ReturnInstMap_40);
    }
#line 141 "call_gen.m"
    {
#line 141 "call_gen.m"
      ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_8_p_0(ll_backend__call_gen__ArgsInfos_20, ll_backend__call_gen__GoalInfo_15, ll_backend__call_gen__ReturnInstMap_40, &ll_backend__call_gen__ReturnLiveLvalues_37, ll_backend__call_gen__STATE_VARIABLE_CI_57_57, ll_backend__call_gen__STATE_VARIABLE_CLD_55_55, &ll_backend__call_gen__STATE_VARIABLE_CLD_71_71);
    }
#line 129 "call_gen.m"
    {
#line 129 "call_gen.m"
      ll_backend__call_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 129 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 129 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 1) = ((MR_Box) (ll_backend__call_gen__Address_27));
#line 129 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 2) = ((MR_Box) (ll_backend__call_gen__V_65_65));
#line 129 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 3) = ((MR_Box) (ll_backend__call_gen__ReturnLiveLvalues_37));
#line 129 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 4) = ((MR_Box) (ll_backend__call_gen__Context_30));
#line 129 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 5) = ((MR_Box) (ll_backend__call_gen__MaybeGoalPath_35));
#line 129 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 6) = ((MR_Box) (ll_backend__call_gen__CallModel_24));
#line 129 "call_gen.m"
    }
#line 129 "call_gen.m"
    {
#line 129 "call_gen.m"
      ll_backend__call_gen__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 129 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_63_63, 0) = ((MR_Box) (ll_backend__call_gen__V_64_64));
#line 129 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_63_63, 1) = ((MR_Box) (ll_backend__call_gen__CallComment_29));
#line 129 "call_gen.m"
    }
#line 130 "call_gen.m"
    {
#line 130 "call_gen.m"
      ll_backend__call_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 130 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_62_62, 0) = ((MR_Box) (ll_backend__call_gen__V_63_63));
#line 130 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_62_62, 1) = ((MR_Box) (ll_backend__call_gen__V_66_66));
#line 130 "call_gen.m"
    }
#line 128 "call_gen.m"
    {
#line 128 "call_gen.m"
      ll_backend__call_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 128 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_58_58, 0) = ((MR_Box) (ll_backend__call_gen__V_59_59));
#line 128 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_58_58, 1) = ((MR_Box) (ll_backend__call_gen__V_62_62));
#line 128 "call_gen.m"
    }
#line 127 "call_gen.m"
    {
#line 127 "call_gen.m"
      ll_backend__call_gen__CallCode_36 = mercury__cord__from_list_1_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__V_58_58);
    }
#line 145 "call_gen.m"
    {
#line 145 "call_gen.m"
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_71_71, &ll_backend__call_gen__AfterReturn_41);
    }
#line 146 "call_gen.m"
    {
#line 146 "call_gen.m"
      ll_backend__call_gen__handle_call_failure_6_p_0(ll_backend__call_gen__CodeModel_11, ll_backend__call_gen__GoalInfo_15, &ll_backend__call_gen__FailHandlingCode_42, ll_backend__call_gen__STATE_VARIABLE_CI_57_57, &ll_backend__call_gen__STATE_VARIABLE_CI_72_72, ll_backend__call_gen__STATE_VARIABLE_CLD_71_71);
    }
#line 147 "call_gen.m"
    {
#line 147 "call_gen.m"
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__call_gen__AfterReturn_41, ll_backend__call_gen__STATE_VARIABLE_CI_72_72, &ll_backend__call_gen__STATE_VARIABLE_CLD_73_73);
    }
#line 150 "call_gen.m"
    {
#line 150 "call_gen.m"
      ll_backend__call_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__call_gen__GoalInfo_15, (MR_Integer) 10);
    }
#line 150 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 150 "call_gen.m"
      {
#line 151 "call_gen.m"
        {
#line 151 "call_gen.m"
          ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_72_72, &ll_backend__call_gen__MaybeTraceInfo_43);
        }
#line 152 "call_gen.m"
        ll_backend__call_gen__succeeded = ((MR_tag((MR_Word) ll_backend__call_gen__MaybeTraceInfo_43)) == (MR_mktag((MR_Integer) 1)));
#line 152 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 152 "call_gen.m"
          ll_backend__call_gen__TraceInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeTraceInfo_43, (MR_Integer) 0)));
#line 150 "call_gen.m"
      }
#line 162 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 155 "call_gen.m"
      {
#line 155 "call_gen.m"
        MR_Word ll_backend__call_gen__TraceTailRecResetAndEventCode_45;
#line 155 "call_gen.m"
        MR_Word ll_backend__call_gen__TailRecLabel_46;
#line 155 "call_gen.m"
        MR_Word ll_backend__call_gen__JumpCode_47;
#line 155 "call_gen.m"
        MR_Word ll_backend__call_gen__V_77_77;
#line 155 "call_gen.m"
        MR_Word ll_backend__call_gen__V_81_81;
#line 155 "call_gen.m"
        MR_Word ll_backend__call_gen__V_82_82;
#line 155 "call_gen.m"
        MR_Word ll_backend__call_gen__V_83_83;
#line 155 "call_gen.m"
        MR_Word ll_backend__call_gen__V_84_84;
#line 155 "call_gen.m"
        MR_Word ll_backend__call_gen__V_87_87;

#line 154 "call_gen.m"
        {
#line 154 "call_gen.m"
          ll_backend__trace_gen__generate_tailrec_event_code_10_p_0(ll_backend__call_gen__TraceInfo_44, ll_backend__call_gen__ArgsInfos_20, ll_backend__call_gen__GoalId_31, ll_backend__call_gen__Context_30, &ll_backend__call_gen__TraceTailRecResetAndEventCode_45, &ll_backend__call_gen__TailRecLabel_46, ll_backend__call_gen__STATE_VARIABLE_CI_72_72, ll_backend__call_gen__STATE_VARIABLE_CI_49, ll_backend__call_gen__STATE_VARIABLE_CLD_73_73, ll_backend__call_gen__STATE_VARIABLE_CLD_51);
        }
#line 158 "call_gen.m"
        {
#line 158 "call_gen.m"
          ll_backend__call_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 158 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_84_84, 0) = ((MR_Box) (ll_backend__call_gen__TailRecLabel_46));
#line 158 "call_gen.m"
        }
#line 158 "call_gen.m"
        {
#line 158 "call_gen.m"
          ll_backend__call_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 158 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 158 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_83_83, 1) = ((MR_Box) (ll_backend__call_gen__V_84_84));
#line 158 "call_gen.m"
        }
#line 158 "call_gen.m"
        {
#line 158 "call_gen.m"
          ll_backend__call_gen__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 158 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_82_82, 0) = ((MR_Box) (ll_backend__call_gen__V_83_83));
#line 158 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_82_82, 1) = ((MR_Box) ((MR_String) "tail recursive jump"));
#line 158 "call_gen.m"
        }
#line 160 "call_gen.m"
        {
#line 160 "call_gen.m"
          ll_backend__call_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_81_81, 0) = ((MR_Box) (ll_backend__call_gen__V_82_82));
#line 160 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 160 "call_gen.m"
        }
#line 157 "call_gen.m"
        {
#line 157 "call_gen.m"
          ll_backend__call_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_77_77, 0) = ((MR_Box) (ll_backend__call_gen__V_59_59));
#line 157 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_77_77, 1) = ((MR_Box) (ll_backend__call_gen__V_81_81));
#line 157 "call_gen.m"
        }
#line 156 "call_gen.m"
        {
#line 156 "call_gen.m"
          ll_backend__call_gen__JumpCode_47 = mercury__cord__from_list_1_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__V_77_77);
        }
#line 161 "call_gen.m"
        {
#line 161 "call_gen.m"
          ll_backend__call_gen__V_87_87 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__TraceTailRecResetAndEventCode_45, ll_backend__call_gen__JumpCode_47);
        }
#line 161 "call_gen.m"
        {
#line 161 "call_gen.m"
          *ll_backend__call_gen__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__SetupCode_22, ll_backend__call_gen__V_87_87);
        }
#line 155 "call_gen.m"
      }
#line 162 "call_gen.m"
    else
#line 163 "call_gen.m"
      {
#line 163 "call_gen.m"
        MR_Word ll_backend__call_gen__V_88_88;
#line 163 "call_gen.m"
        MR_Word ll_backend__call_gen__V_89_89;

#line 163 "call_gen.m"
        {
#line 163 "call_gen.m"
          ll_backend__call_gen__V_89_89 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__CallCode_36, ll_backend__call_gen__FailHandlingCode_42);
        }
#line 163 "call_gen.m"
        {
#line 163 "call_gen.m"
          ll_backend__call_gen__V_88_88 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__TraceResetCode_25, ll_backend__call_gen__V_89_89);
        }
#line 163 "call_gen.m"
        {
#line 163 "call_gen.m"
          *ll_backend__call_gen__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__SetupCode_22, ll_backend__call_gen__V_88_88);
        }
#line 163 "call_gen.m"
        *ll_backend__call_gen__STATE_VARIABLE_CLD_51 = ll_backend__call_gen__STATE_VARIABLE_CLD_73_73;
#line 163 "call_gen.m"
        *ll_backend__call_gen__STATE_VARIABLE_CI_49 = ll_backend__call_gen__STATE_VARIABLE_CI_72_72;
#line 163 "call_gen.m"
      }
#line 96 "call_gen.m"
  }
#line 34 "call_gen.m"
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
