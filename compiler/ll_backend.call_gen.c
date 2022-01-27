/*
** Automatically generated from `call_gen.m'
** by the Mercury compiler,
** version rotd-2013-03-26, configured for x86_64-apple-darwin12.2.1.
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "ll_backend.code_info.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_event.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 149 "ll_backend.call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 152 "ll_backend.call_gen.c"
static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0;

#line 155 "ll_backend.call_gen.c"
static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1;

#line 158 "ll_backend.call_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_value_ordered_known_call_variant_0[2];

#line 161 "ll_backend.call_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_name_ordered_known_call_variant_0[2];

#line 164 "ll_backend.call_gen.c"
static const MR_Integer ll_backend__call_gen__ll_backend__call_gen__functor_number_map_known_call_variant_0[2];

#line 167 "ll_backend.call_gen.c"
static MR_bool MR_CALL 
ll_backend__call_gen____Unify____known_call_variant_0_0_10001(
#line 170 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_1,
#line 172 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_2);

#line 175 "ll_backend.call_gen.c"
static void MR_CALL 
ll_backend__call_gen____Compare____known_call_variant_0_0_10001(
#line 178 "ll_backend.call_gen.c"
  MR_Box * ll_backend__call_gen__wrapper_arg_1,
#line 180 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_2,
#line 182 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_3);

#line 598 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_p_0(
#line 598 "call_gen.m"
  MR_Word ll_backend__call_gen__ArgsInfos_8,
#line 598 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_9,
#line 598 "call_gen.m"
  MR_Word ll_backend__call_gen__ReturnInstMap_11,
#line 598 "call_gen.m"
  MR_Word * ll_backend__call_gen__ReturnLiveLvalues_12,
#line 598 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_18,
#line 598 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_19);

#line 429 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_53_44_32_54_93_95_48_9_p_0(
#line 429 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 429 "call_gen.m"
  MR_Word ll_backend__call_gen__HoCallVariant_2,
#line 429 "call_gen.m"
  MR_Word ll_backend__call_gen__InVarsR_3,
#line 429 "call_gen.m"
  MR_Word ll_backend__call_gen__InVarsF_4,
#line 429 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_7,
#line 429 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_8,
#line 429 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_9);

#line 192 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_10_p_0(
#line 192 "call_gen.m"
  MR_Word ll_backend__call_gen__GenericCall_12,
#line 192 "call_gen.m"
  MR_Word ll_backend__call_gen__Args_13,
#line 192 "call_gen.m"
  MR_Word ll_backend__call_gen__Modes_14,
#line 192 "call_gen.m"
  MR_Word ll_backend__call_gen__MaybeRegTypes_15,
#line 192 "call_gen.m"
  MR_Word ll_backend__call_gen__Det_16,
#line 192 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_17,
#line 192 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_18,
#line 192 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_64,
#line 192 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_65);

#line 819 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(
#line 819 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 819 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__2_2,
#line 819 "call_gen.m"
  MR_Integer ll_backend__call_gen__HeadVar__3_3,
#line 819 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__4_4,
#line 819 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__5_5);

#line 738 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_simple_test_5_p_0(
#line 738 "call_gen.m"
  MR_Word ll_backend__call_gen__TestExpr_6,
#line 738 "call_gen.m"
  MR_Word * ll_backend__call_gen__Rval_7,
#line 738 "call_gen.m"
  MR_Word * ll_backend__call_gen__ArgCode_8,
#line 738 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_20,
#line 738 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_21);

#line 728 "call_gen.m"
static MR_Word MR_CALL 
ll_backend__call_gen__convert_simple_expr_1_f_0(
#line 728 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1);

#line 717 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_assign_builtin_5_p_0(
#line 717 "call_gen.m"
  MR_Word ll_backend__call_gen__Var_6,
#line 717 "call_gen.m"
  MR_Word ll_backend__call_gen__AssignExpr_7,
#line 717 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_8,
#line 717 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_11,
#line 717 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_12);

#line 636 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__rebuild_registers_5_p_0(
#line 636 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 636 "call_gen.m"
  MR_Word ll_backend__call_gen__Liveness_2,
#line 636 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__3_3,
#line 636 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_4,
#line 636 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_5);

#line 616 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__find_nonlive_outputs_4_p_0(
#line 616 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 616 "call_gen.m"
  MR_Word ll_backend__call_gen__Liveness_2,
#line 616 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3,
#line 616 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_4);

#line 587 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__kill_dead_input_vars_5_p_0(
#line 587 "call_gen.m"
  MR_Word ll_backend__call_gen__ArgsInfos_6,
#line 587 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_7,
#line 587 "call_gen.m"
  MR_Word * ll_backend__call_gen__NonLiveOutputs_8,
#line 587 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_13,
#line 587 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_14);

#line 540 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__call_comment_4_p_0(
#line 540 "call_gen.m"
  MR_Word ll_backend__call_gen__CI_5,
#line 540 "call_gen.m"
  MR_Word ll_backend__call_gen__PredId_6,
#line 540 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_7,
#line 540 "call_gen.m"
  MR_String * ll_backend__call_gen__Msg_8);

#line 512 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__handle_call_failure_5_p_0(
#line 512 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_6,
#line 512 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_7,
#line 512 "call_gen.m"
  MR_Word * ll_backend__call_gen__FailHandlingCode_8,
#line 512 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_15,
#line 512 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_16);

#line 486 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__prepare_for_call_6_p_0(
#line 486 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_7,
#line 486 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_8,
#line 486 "call_gen.m"
  MR_Word * ll_backend__call_gen__CallModel_9,
#line 486 "call_gen.m"
  MR_Word * ll_backend__call_gen__TraceCode_10,
#line 486 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_14,
#line 486 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_15);

#line 350 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__extra_livevals_from_3_p_0(
#line 350 "call_gen.m"
  MR_Integer ll_backend__call_gen__Reg_4,
#line 350 "call_gen.m"
  MR_Integer ll_backend__call_gen__FirstInput_5,
#line 350 "call_gen.m"
  MR_Word * ll_backend__call_gen__ExtraLiveVals_6);

#line 345 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__extra_livevals_2_p_0(
#line 345 "call_gen.m"
  MR_Integer ll_backend__call_gen__FirstInput_3,
#line 345 "call_gen.m"
  MR_Word * ll_backend__call_gen__ExtraLiveVals_4);

#line 309 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_event_attributes_6_p_0(
#line 309 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 309 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_Vars_0_2,
#line 309 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__3_3,
#line 309 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__4_4,
#line 309 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_5,
#line 309 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_6);

#line 689 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_builtin_7_p_0_1(
#line 689 "call_gen.m"
  MR_Box ll_backend__call_gen__closure_arg,
#line 689 "call_gen.m"
  MR_Box ll_backend__call_gen__wrapper_arg_1,
#line 689 "call_gen.m"
  MR_Box ll_backend__call_gen__wrapper_arg_2,
#line 689 "call_gen.m"
  MR_Box * ll_backend__call_gen__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__call_gen_scalar_common_1[10][2];

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_2[2][3];

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_4[1][1];




static /* final */ const MR_Box ll_backend__call_gen_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__call_gen_scalar_common_1[6])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
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
    ((MR_Box) (ll_backend__call_gen__generate_builtin_7_p_0_1)),
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
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0))
  },
};

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[6])))
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



#line 533 "ll_backend.call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 541 "ll_backend.call_gen.c"
static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0 = {
  (MR_String) "ho_call_known_num",
  (MR_Integer) 0
};

#line 547 "ll_backend.call_gen.c"
static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1 = {
  (MR_String) "ho_call_unknown",
  (MR_Integer) 1
};

#line 553 "ll_backend.call_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_value_ordered_known_call_variant_0[2] = {
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0,
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1
};

#line 559 "ll_backend.call_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_name_ordered_known_call_variant_0[2] = {
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0,
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1
};

#line 565 "ll_backend.call_gen.c"
static const MR_Integer ll_backend__call_gen__ll_backend__call_gen__functor_number_map_known_call_variant_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 571 "ll_backend.call_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__call_gen__ll_backend__call_gen__type_ctor_info_known_call_variant_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__call_gen____Unify____known_call_variant_0_0_10001)),
  ((MR_Box) (ll_backend__call_gen____Compare____known_call_variant_0_0_10001)),
  (MR_String) "ll_backend.call_gen",
  (MR_String) "known_call_variant",
  {
    ll_backend__call_gen__ll_backend__call_gen__enum_name_ordered_known_call_variant_0
  },
  {
    ll_backend__call_gen__ll_backend__call_gen__enum_value_ordered_known_call_variant_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__call_gen__ll_backend__call_gen__functor_number_map_known_call_variant_0
};

#line 592 "ll_backend.call_gen.c"
static MR_bool MR_CALL 
ll_backend__call_gen____Unify____known_call_variant_0_0_10001(
#line 595 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_1,
#line 597 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_2)
#line 599 "ll_backend.call_gen.c"
{
#line 601 "ll_backend.call_gen.c"
  {
#line 603 "ll_backend.call_gen.c"
    MR_bool ll_backend__call_gen__succeeded;

#line 606 "ll_backend.call_gen.c"
    {
#line 608 "ll_backend.call_gen.c"
      ll_backend__call_gen__succeeded = ll_backend__call_gen____Unify____known_call_variant_0_0(((MR_Word) ll_backend__call_gen__wrapper_arg_1), ((MR_Word) ll_backend__call_gen__wrapper_arg_2));
    }
#line 611 "ll_backend.call_gen.c"
    return ll_backend__call_gen__succeeded;
#line 613 "ll_backend.call_gen.c"
  }
#line 615 "ll_backend.call_gen.c"
}

#line 618 "ll_backend.call_gen.c"
static void MR_CALL 
ll_backend__call_gen____Compare____known_call_variant_0_0_10001(
#line 621 "ll_backend.call_gen.c"
  MR_Box * ll_backend__call_gen__wrapper_arg_1,
#line 623 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_2,
#line 625 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_3)
#line 627 "ll_backend.call_gen.c"
{
#line 629 "ll_backend.call_gen.c"
  {
#line 631 "ll_backend.call_gen.c"
    MR_Word ll_backend__call_gen__conv0_HeadVar__1_1;

#line 634 "ll_backend.call_gen.c"
    {
#line 636 "ll_backend.call_gen.c"
      ll_backend__call_gen____Compare____known_call_variant_0_0(&ll_backend__call_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__call_gen__wrapper_arg_2), ((MR_Word) ll_backend__call_gen__wrapper_arg_3));
    }
#line 639 "ll_backend.call_gen.c"
    *ll_backend__call_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__call_gen__conv0_HeadVar__1_1));
#line 641 "ll_backend.call_gen.c"
  }
#line 643 "ll_backend.call_gen.c"
}

#line 598 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_p_0(
#line 598 "call_gen.m"
  MR_Word ll_backend__call_gen__ArgsInfos_8,
#line 598 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_9,
#line 598 "call_gen.m"
  MR_Word ll_backend__call_gen__ReturnInstMap_11,
#line 598 "call_gen.m"
  MR_Word * ll_backend__call_gen__ReturnLiveLvalues_12,
#line 598 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_18,
#line 598 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_19)
#line 598 "call_gen.m"
{
#line 603 "call_gen.m"
  {
#line 603 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 603 "call_gen.m"
    MR_Word ll_backend__call_gen__InstMapDelta_14;
#line 603 "call_gen.m"
    MR_Word ll_backend__call_gen__OkToDeleteAny_15;
#line 603 "call_gen.m"
    MR_Word ll_backend__call_gen__Liveness_16;
#line 603 "call_gen.m"
    MR_Word ll_backend__call_gen__OutputArgLocs_17;
#line 603 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_20_20;

#line 604 "call_gen.m"
    {
#line 604 "call_gen.m"
      ll_backend__call_gen__InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__call_gen__GoalInfo_9);
    }
#line 605 "call_gen.m"
    {
#line 605 "call_gen.m"
      ll_backend__call_gen__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__call_gen__InstMapDelta_14);
    }
#line 607 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 606 "call_gen.m"
      ll_backend__call_gen__OkToDeleteAny_15 = (MR_Integer) 0;
#line 607 "call_gen.m"
    else
#line 608 "call_gen.m"
      ll_backend__call_gen__OkToDeleteAny_15 = (MR_Integer) 1;
#line 610 "call_gen.m"
    {
#line 610 "call_gen.m"
      ll_backend__code_info__clear_all_registers_3_p_0(ll_backend__call_gen__OkToDeleteAny_15, ll_backend__call_gen__STATE_VARIABLE_CI_0_18, &ll_backend__call_gen__STATE_VARIABLE_CI_20_20);
    }
#line 611 "call_gen.m"
    {
#line 611 "call_gen.m"
      ll_backend__code_info__get_forward_live_vars_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_20_20, &ll_backend__call_gen__Liveness_16);
    }
#line 612 "call_gen.m"
    {
#line 612 "call_gen.m"
      ll_backend__call_gen__rebuild_registers_5_p_0(ll_backend__call_gen__ArgsInfos_8, ll_backend__call_gen__Liveness_16, &ll_backend__call_gen__OutputArgLocs_17, ll_backend__call_gen__STATE_VARIABLE_CI_20_20, ll_backend__call_gen__STATE_VARIABLE_CI_19);
    }
#line 613 "call_gen.m"
    {
#line 613 "call_gen.m"
      ll_backend__code_info__generate_return_live_lvalues_5_p_0(*ll_backend__call_gen__STATE_VARIABLE_CI_19, ll_backend__call_gen__OutputArgLocs_17, ll_backend__call_gen__ReturnInstMap_11, ll_backend__call_gen__OkToDeleteAny_15, ll_backend__call_gen__ReturnLiveLvalues_12);
#line 613 "call_gen.m"
      return;
    }
#line 603 "call_gen.m"
  }
#line 598 "call_gen.m"
}

#line 429 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_53_44_32_54_93_95_48_9_p_0(
#line 429 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 429 "call_gen.m"
  MR_Word ll_backend__call_gen__HoCallVariant_2,
#line 429 "call_gen.m"
  MR_Word ll_backend__call_gen__InVarsR_3,
#line 429 "call_gen.m"
  MR_Word ll_backend__call_gen__InVarsF_4,
#line 429 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_7,
#line 429 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_8,
#line 429 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_9)
#line 429 "call_gen.m"
{
#line 435 "call_gen.m"
  {
#line 435 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 435 "call_gen.m"
    if (((MR_tag((MR_Word) ll_backend__call_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 481 "call_gen.m"
      {
#line 482 "call_gen.m"
        {
#line 482 "call_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/9", (MR_String) "cast");
#line 482 "call_gen.m"
          return;
        }
#line 481 "call_gen.m"
      }
#line 435 "call_gen.m"
    else
#line 435 "call_gen.m"
      if (((MR_tag((MR_Word) ll_backend__call_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 451 "call_gen.m"
        {
#line 451 "call_gen.m"
          MR_Integer ll_backend__call_gen__Method_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 451 "call_gen.m"
          MR_Word ll_backend__call_gen__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 451 "call_gen.m"
          MR_Word ll_backend__call_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 451 "call_gen.m"
          MR_Word ll_backend__call_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 3)));

#line 454 "call_gen.m"
          if ((ll_backend__call_gen__InVarsF_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "call_gen.m"
            {
#line 453 "call_gen.m"
            }
#line 454 "call_gen.m"
          else
#line 455 "call_gen.m"
            {
#line 456 "call_gen.m"
              {
#line 456 "call_gen.m"
                mercury__require__sorry_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/9", (MR_String) "float input reg");
#line 456 "call_gen.m"
                return;
              }
#line 455 "call_gen.m"
            }
#line 465 "call_gen.m"
          if ((ll_backend__call_gen__HoCallVariant_2 == (MR_Integer) 0))
#line 459 "call_gen.m"
            {
#line 459 "call_gen.m"
              MR_Word ll_backend__call_gen__V_96_96;
#line 459 "call_gen.m"
              MR_Word ll_backend__call_gen__V_97_97;
#line 459 "call_gen.m"
              MR_Word ll_backend__call_gen__V_101_101;
#line 459 "call_gen.m"
              MR_Word ll_backend__call_gen__V_102_102;

#line 460 "call_gen.m"
              {
#line 460 "call_gen.m"
                ll_backend__code_info__clobber_regs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[2]), ll_backend__call_gen__STATE_VARIABLE_CI_0_8, ll_backend__call_gen__STATE_VARIABLE_CI_9);
              }
#line 462 "call_gen.m"
              {
#line 462 "call_gen.m"
                ll_backend__call_gen__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 462 "call_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_102_102, 0) = ((MR_Box) (ll_backend__call_gen__Method_41));
#line 462 "call_gen.m"
              }
#line 462 "call_gen.m"
              {
#line 462 "call_gen.m"
                ll_backend__call_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 462 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 1) = ((MR_Box) (ll_backend__call_gen__V_102_102));
#line 462 "call_gen.m"
              }
#line 462 "call_gen.m"
              {
#line 462 "call_gen.m"
                ll_backend__call_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 462 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 462 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[1])));
#line 462 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_97_97, 2) = ((MR_Box) (ll_backend__call_gen__V_101_101));
#line 462 "call_gen.m"
              }
#line 461 "call_gen.m"
              {
#line 461 "call_gen.m"
                ll_backend__call_gen__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 461 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_96_96, 0) = ((MR_Box) (ll_backend__call_gen__V_97_97));
#line 461 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_96_96, 1) = ((MR_Box) ((MR_String) "Index of class method in typeclass info"));
#line 461 "call_gen.m"
              }
#line 461 "call_gen.m"
              {
#line 461 "call_gen.m"
                *ll_backend__call_gen__Code_7 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__call_gen__V_96_96)));
              }
#line 459 "call_gen.m"
            }
#line 465 "call_gen.m"
          else
#line 466 "call_gen.m"
            {
#line 466 "call_gen.m"
              MR_Integer ll_backend__call_gen__NumInVarsR_53;
#line 466 "call_gen.m"
              MR_Integer ll_backend__call_gen__NumInVars_55;
#line 466 "call_gen.m"
              MR_Word ll_backend__call_gen__V_71_71;
#line 466 "call_gen.m"
              MR_Word ll_backend__call_gen__V_72_72;
#line 466 "call_gen.m"
              MR_Word ll_backend__call_gen__V_73_73;
#line 466 "call_gen.m"
              MR_Word ll_backend__call_gen__V_77_77;
#line 466 "call_gen.m"
              MR_Word ll_backend__call_gen__V_78_78;
#line 466 "call_gen.m"
              MR_Word ll_backend__call_gen__V_80_80;
#line 466 "call_gen.m"
              MR_Word ll_backend__call_gen__V_81_81;
#line 466 "call_gen.m"
              MR_Word ll_backend__call_gen__V_82_82;
#line 466 "call_gen.m"
              MR_Word ll_backend__call_gen__V_86_86;
#line 466 "call_gen.m"
              MR_Word ll_backend__call_gen__V_87_87;

#line 467 "call_gen.m"
              {
#line 467 "call_gen.m"
                ll_backend__code_info__clobber_regs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[5]), ll_backend__call_gen__STATE_VARIABLE_CI_0_8, ll_backend__call_gen__STATE_VARIABLE_CI_9);
              }
#line 468 "call_gen.m"
              {
#line 468 "call_gen.m"
                mercury__list__length_2_p_0((MR_Word) &ll_backend__call_gen_scalar_common_1[0], ll_backend__call_gen__InVarsR_3, &ll_backend__call_gen__NumInVarsR_53);
              }
#line 471 "call_gen.m"
              {
#line 471 "call_gen.m"
                ll_backend__call_gen__NumInVars_55 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(ll_backend__call_gen__NumInVarsR_53, (MR_Integer) 0);
              }
#line 473 "call_gen.m"
              {
#line 473 "call_gen.m"
                ll_backend__call_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 473 "call_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_78_78, 0) = ((MR_Box) (ll_backend__call_gen__Method_41));
#line 473 "call_gen.m"
              }
#line 473 "call_gen.m"
              {
#line 473 "call_gen.m"
                ll_backend__call_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 473 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_77_77, 1) = ((MR_Box) (ll_backend__call_gen__V_78_78));
#line 473 "call_gen.m"
              }
#line 473 "call_gen.m"
              {
#line 473 "call_gen.m"
                ll_backend__call_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 473 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 473 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[1])));
#line 473 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_73_73, 2) = ((MR_Box) (ll_backend__call_gen__V_77_77));
#line 473 "call_gen.m"
              }
#line 474 "call_gen.m"
              {
#line 474 "call_gen.m"
                ll_backend__call_gen__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 474 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_72_72, 0) = ((MR_Box) (ll_backend__call_gen__V_73_73));
#line 474 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_72_72, 1) = ((MR_Box) ((MR_String) "Index of class method in typeclass info"));
#line 474 "call_gen.m"
              }
#line 475 "call_gen.m"
              {
#line 475 "call_gen.m"
                ll_backend__call_gen__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 475 "call_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_87_87, 0) = ((MR_Box) (ll_backend__call_gen__NumInVars_55));
#line 475 "call_gen.m"
              }
#line 475 "call_gen.m"
              {
#line 475 "call_gen.m"
                ll_backend__call_gen__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 475 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_86_86, 1) = ((MR_Box) (ll_backend__call_gen__V_87_87));
#line 475 "call_gen.m"
              }
#line 475 "call_gen.m"
              {
#line 475 "call_gen.m"
                ll_backend__call_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 475 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 475 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[3])));
#line 475 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_82_82, 2) = ((MR_Box) (ll_backend__call_gen__V_86_86));
#line 475 "call_gen.m"
              }
#line 477 "call_gen.m"
              {
#line 477 "call_gen.m"
                ll_backend__call_gen__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 477 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_81_81, 0) = ((MR_Box) (ll_backend__call_gen__V_82_82));
#line 477 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_81_81, 1) = ((MR_Box) ((MR_String) "Assign number of immediate regular input arguments"));
#line 477 "call_gen.m"
              }
#line 474 "call_gen.m"
              {
#line 474 "call_gen.m"
                ll_backend__call_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "call_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_80_80, 0) = ((MR_Box) (ll_backend__call_gen__V_81_81));
#line 474 "call_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 474 "call_gen.m"
              }
#line 472 "call_gen.m"
              {
#line 472 "call_gen.m"
                ll_backend__call_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "call_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_71_71, 0) = ((MR_Box) (ll_backend__call_gen__V_72_72));
#line 472 "call_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_71_71, 1) = ((MR_Box) (ll_backend__call_gen__V_80_80));
#line 472 "call_gen.m"
              }
#line 472 "call_gen.m"
              {
#line 472 "call_gen.m"
                *ll_backend__call_gen__Code_7 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__call_gen__V_71_71);
              }
#line 466 "call_gen.m"
            }
#line 451 "call_gen.m"
        }
#line 435 "call_gen.m"
      else
#line 435 "call_gen.m"
        if (((MR_tag((MR_Word) ll_backend__call_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 479 "call_gen.m"
          {
#line 480 "call_gen.m"
            {
#line 480 "call_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/9", (MR_String) "event_call");
#line 480 "call_gen.m"
              return;
            }
#line 479 "call_gen.m"
          }
#line 435 "call_gen.m"
        else
#line 439 "call_gen.m"
          if ((ll_backend__call_gen__HoCallVariant_2 == (MR_Integer) 0))
#line 437 "call_gen.m"
            {
#line 438 "call_gen.m"
              {
#line 438 "call_gen.m"
                *ll_backend__call_gen__Code_7 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 438 "call_gen.m"
              *ll_backend__call_gen__STATE_VARIABLE_CI_9 = ll_backend__call_gen__STATE_VARIABLE_CI_0_8;
#line 437 "call_gen.m"
            }
#line 439 "call_gen.m"
          else
#line 440 "call_gen.m"
            {
#line 440 "call_gen.m"
              MR_Word ll_backend__call_gen__TypeInfo_131_131;
#line 440 "call_gen.m"
              MR_Integer ll_backend__call_gen__NumInVarsR_21;
#line 440 "call_gen.m"
              MR_Integer ll_backend__call_gen__NumInVarsF_22;
#line 440 "call_gen.m"
              MR_Integer ll_backend__call_gen__NumInVars_23;
#line 440 "call_gen.m"
              MR_Word ll_backend__call_gen__V_32_32;
#line 440 "call_gen.m"
              MR_Word ll_backend__call_gen__V_33_33;
#line 440 "call_gen.m"
              MR_Word ll_backend__call_gen__V_37_37;
#line 440 "call_gen.m"
              MR_Word ll_backend__call_gen__V_38_38;

#line 441 "call_gen.m"
              {
#line 441 "call_gen.m"
                ll_backend__code_info__clobber_regs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[2]), ll_backend__call_gen__STATE_VARIABLE_CI_0_8, ll_backend__call_gen__STATE_VARIABLE_CI_9);
              }
#line 1068 "ll_backend.call_gen.c"
              ll_backend__call_gen__TypeInfo_131_131 = (MR_Word) &ll_backend__call_gen_scalar_common_1[0];
#line 442 "call_gen.m"
              {
#line 442 "call_gen.m"
                mercury__list__length_2_p_0(ll_backend__call_gen__TypeInfo_131_131, ll_backend__call_gen__InVarsR_3, &ll_backend__call_gen__NumInVarsR_21);
              }
#line 443 "call_gen.m"
              {
#line 443 "call_gen.m"
                mercury__list__length_2_p_0(ll_backend__call_gen__TypeInfo_131_131, ll_backend__call_gen__InVarsF_4, &ll_backend__call_gen__NumInVarsF_22);
              }
#line 444 "call_gen.m"
              {
#line 444 "call_gen.m"
                ll_backend__call_gen__NumInVars_23 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(ll_backend__call_gen__NumInVarsR_21, ll_backend__call_gen__NumInVarsF_22);
              }
#line 446 "call_gen.m"
              {
#line 446 "call_gen.m"
                ll_backend__call_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 446 "call_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_38_38, 0) = ((MR_Box) (ll_backend__call_gen__NumInVars_23));
#line 446 "call_gen.m"
              }
#line 446 "call_gen.m"
              {
#line 446 "call_gen.m"
                ll_backend__call_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 446 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_37_37, 1) = ((MR_Box) (ll_backend__call_gen__V_38_38));
#line 446 "call_gen.m"
              }
#line 446 "call_gen.m"
              {
#line 446 "call_gen.m"
                ll_backend__call_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 446 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 446 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[1])));
#line 446 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_33_33, 2) = ((MR_Box) (ll_backend__call_gen__V_37_37));
#line 446 "call_gen.m"
              }
#line 445 "call_gen.m"
              {
#line 445 "call_gen.m"
                ll_backend__call_gen__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 445 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_32_32, 0) = ((MR_Box) (ll_backend__call_gen__V_33_33));
#line 445 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_32_32, 1) = ((MR_Box) ((MR_String) "Assign number of immediate input arguments"));
#line 445 "call_gen.m"
              }
#line 445 "call_gen.m"
              {
#line 445 "call_gen.m"
                *ll_backend__call_gen__Code_7 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__call_gen__V_32_32)));
              }
#line 440 "call_gen.m"
            }
#line 435 "call_gen.m"
  }
#line 429 "call_gen.m"
}

#line 192 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_10_p_0(
#line 192 "call_gen.m"
  MR_Word ll_backend__call_gen__GenericCall_12,
#line 192 "call_gen.m"
  MR_Word ll_backend__call_gen__Args_13,
#line 192 "call_gen.m"
  MR_Word ll_backend__call_gen__Modes_14,
#line 192 "call_gen.m"
  MR_Word ll_backend__call_gen__MaybeRegTypes_15,
#line 192 "call_gen.m"
  MR_Word ll_backend__call_gen__Det_16,
#line 192 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_17,
#line 192 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_18,
#line 192 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_64,
#line 192 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_65)
#line 192 "call_gen.m"
{
#line 198 "call_gen.m"
  {
#line 198 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeInfo_106_106;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeInfo_107_107;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeCtorInfo_109_109;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__ModuleInfo_20;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__VarTypes_21;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__Types_22;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__ArgRegTypes_23;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__InVarsR_24;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__InVarsF_25;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__OutVarsR_26;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__OutVarsF_27;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__Globals_28;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__CodeAddr_29;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__SpecifierArgInfos_30;
#line 198 "call_gen.m"
    MR_Integer ll_backend__call_gen__FirstImmInputR_31;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__HoCallVariant_32;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__CodeModel_34;
#line 198 "call_gen.m"
    MR_Integer ll_backend__call_gen__FirstOutputR_35;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__InVarArgInfosR_37;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__InVarArgInfosF_38;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__OutArgsInfosR_39;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__OutArgsInfosF_40;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__ArgInfos_41;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__LiveVals0_42;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__SetupCode_43;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__NonVarCode_45;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__ExtraLiveVals_46;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__LiveVals_47;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__CallModel_48;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__TraceCode_49;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnLabel_50;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__Context_51;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__GoalId_52;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__InstMap_53;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__InstMapDelta_54;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnInstMap_55;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__OutArgsInfos_56;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnLiveLvalues_57;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__MaybeContainingGoalMap_58;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__MaybeGoalPath_61;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__CallCode_62;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__FailHandlingCode_63;
#line 198 "call_gen.m"
    MR_Integer ll_backend__call_gen__V_66_66;
#line 198 "call_gen.m"
    MR_Integer ll_backend__call_gen__V_67_67;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__V_76_76;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__V_77_77;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__V_78_78;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__V_79_79;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__V_80_80;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_82_82;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_83_83;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_84_84;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_85_85;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_86_86;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_87_87;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__V_88_88;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__V_89_89;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__V_90_90;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__V_92_92;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__V_93_93;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__V_94_94;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__V_95_95;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__V_97_97;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__V_98_98;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__V_99_99;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__V_103_103;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__V_104_104;
#line 198 "call_gen.m"
    MR_Word ll_backend__call_gen__V_105_105;
#line 236 "call_gen.m"
    MR_Word ll_backend__call_gen__NonLiveOutputs_44;

#line 199 "call_gen.m"
    {
#line 199 "call_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_64, &ll_backend__call_gen__ModuleInfo_20);
    }
#line 200 "call_gen.m"
    {
#line 200 "call_gen.m"
      ll_backend__call_gen__VarTypes_21 = ll_backend__code_info__get_var_types_1_f_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_64);
    }
#line 201 "call_gen.m"
    {
#line 201 "call_gen.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(ll_backend__call_gen__VarTypes_21, ll_backend__call_gen__Args_13, &ll_backend__call_gen__Types_22);
    }
#line 202 "call_gen.m"
    {
#line 202 "call_gen.m"
      hlds__arg_info__generic_call_arg_reg_types_6_p_0(ll_backend__call_gen__ModuleInfo_20, ll_backend__call_gen__VarTypes_21, ll_backend__call_gen__GenericCall_12, ll_backend__call_gen__Args_13, ll_backend__call_gen__MaybeRegTypes_15, &ll_backend__call_gen__ArgRegTypes_23);
    }
#line 204 "call_gen.m"
    {
#line 204 "call_gen.m"
      hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(ll_backend__call_gen__ModuleInfo_20, ll_backend__call_gen__Args_13, ll_backend__call_gen__Modes_14, ll_backend__call_gen__Types_22, ll_backend__call_gen__ArgRegTypes_23, &ll_backend__call_gen__InVarsR_24, &ll_backend__call_gen__InVarsF_25, &ll_backend__call_gen__OutVarsR_26, &ll_backend__call_gen__OutVarsF_27);
    }
#line 206 "call_gen.m"
    {
#line 206 "call_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__call_gen__ModuleInfo_20, &ll_backend__call_gen__Globals_28);
    }
#line 1333 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeInfo_106_106 = (MR_Word) &ll_backend__call_gen_scalar_common_1[0];
#line 207 "call_gen.m"
    {
#line 207 "call_gen.m"
      ll_backend__call_gen__V_66_66 = mercury__list__length_1_f_0(ll_backend__call_gen__TypeInfo_106_106, ll_backend__call_gen__InVarsR_24);
    }
#line 207 "call_gen.m"
    {
#line 207 "call_gen.m"
      ll_backend__call_gen__V_67_67 = mercury__list__length_1_f_0(ll_backend__call_gen__TypeInfo_106_106, ll_backend__call_gen__InVarsF_25);
    }
#line 207 "call_gen.m"
    {
#line 207 "call_gen.m"
      ll_backend__call_gen__generic_call_info_8_p_0(ll_backend__call_gen__Globals_28, ll_backend__call_gen__GenericCall_12, ll_backend__call_gen__V_66_66, ll_backend__call_gen__V_67_67, &ll_backend__call_gen__CodeAddr_29, &ll_backend__call_gen__SpecifierArgInfos_30, &ll_backend__call_gen__FirstImmInputR_31, &ll_backend__call_gen__HoCallVariant_32);
    }
#line 210 "call_gen.m"
    {
#line 210 "call_gen.m"
      hlds__code_model__determinism_to_code_model_2_p_0(ll_backend__call_gen__Det_16, &ll_backend__call_gen__CodeModel_34);
    }
#line 214 "call_gen.m"
    if ((ll_backend__call_gen__CodeModel_34 == (MR_Integer) 1))
#line 213 "call_gen.m"
      ll_backend__call_gen__FirstOutputR_35 = (MR_Integer) 2;
#line 214 "call_gen.m"
    else
#line 218 "call_gen.m"
      ll_backend__call_gen__FirstOutputR_35 = (MR_Integer) 1;
#line 222 "call_gen.m"
    {
#line 222 "call_gen.m"
      ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__InVarsR_24, (MR_Integer) 0, ll_backend__call_gen__FirstImmInputR_31, (MR_Integer) 0, &ll_backend__call_gen__InVarArgInfosR_37);
    }
#line 224 "call_gen.m"
    {
#line 224 "call_gen.m"
      ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__InVarsF_25, (MR_Integer) 1, (MR_Integer) 1, (MR_Integer) 0, &ll_backend__call_gen__InVarArgInfosF_38);
    }
#line 226 "call_gen.m"
    {
#line 226 "call_gen.m"
      ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__OutVarsR_26, (MR_Integer) 0, ll_backend__call_gen__FirstOutputR_35, (MR_Integer) 1, &ll_backend__call_gen__OutArgsInfosR_39);
    }
#line 228 "call_gen.m"
    {
#line 228 "call_gen.m"
      ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__OutVarsF_27, (MR_Integer) 1, (MR_Integer) 1, (MR_Integer) 1, &ll_backend__call_gen__OutArgsInfosF_40);
    }
#line 1383 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeInfo_107_107 = (MR_Word) &ll_backend__call_gen_scalar_common_2[0];
#line 231 "call_gen.m"
    {
#line 231 "call_gen.m"
      ll_backend__call_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_80_80, 0) = ((MR_Box) (ll_backend__call_gen__OutArgsInfosF_40));
#line 231 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 231 "call_gen.m"
    }
#line 231 "call_gen.m"
    {
#line 231 "call_gen.m"
      ll_backend__call_gen__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_79_79, 0) = ((MR_Box) (ll_backend__call_gen__OutArgsInfosR_39));
#line 231 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_79_79, 1) = ((MR_Box) (ll_backend__call_gen__V_80_80));
#line 231 "call_gen.m"
    }
#line 231 "call_gen.m"
    {
#line 231 "call_gen.m"
      ll_backend__call_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_78_78, 0) = ((MR_Box) (ll_backend__call_gen__InVarArgInfosF_38));
#line 231 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_78_78, 1) = ((MR_Box) (ll_backend__call_gen__V_79_79));
#line 231 "call_gen.m"
    }
#line 230 "call_gen.m"
    {
#line 230 "call_gen.m"
      ll_backend__call_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_77_77, 0) = ((MR_Box) (ll_backend__call_gen__InVarArgInfosR_37));
#line 230 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_77_77, 1) = ((MR_Box) (ll_backend__call_gen__V_78_78));
#line 230 "call_gen.m"
    }
#line 230 "call_gen.m"
    {
#line 230 "call_gen.m"
      ll_backend__call_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_76_76, 0) = ((MR_Box) (ll_backend__call_gen__SpecifierArgInfos_30));
#line 230 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_76_76, 1) = ((MR_Box) (ll_backend__call_gen__V_77_77));
#line 230 "call_gen.m"
    }
#line 230 "call_gen.m"
    {
#line 230 "call_gen.m"
      ll_backend__call_gen__ArgInfos_41 = mercury__list__condense_1_f_0(ll_backend__call_gen__TypeInfo_107_107, ll_backend__call_gen__V_76_76);
    }
#line 235 "call_gen.m"
    {
#line 235 "call_gen.m"
      ll_backend__code_info__setup_call_6_p_0(ll_backend__call_gen__GoalInfo_17, ll_backend__call_gen__ArgInfos_41, &ll_backend__call_gen__LiveVals0_42, &ll_backend__call_gen__SetupCode_43, ll_backend__call_gen__STATE_VARIABLE_CI_0_64, &ll_backend__call_gen__STATE_VARIABLE_CI_82_82);
    }
#line 236 "call_gen.m"
    {
#line 236 "call_gen.m"
      ll_backend__call_gen__kill_dead_input_vars_5_p_0(ll_backend__call_gen__ArgInfos_41, ll_backend__call_gen__GoalInfo_17, &ll_backend__call_gen__NonLiveOutputs_44, ll_backend__call_gen__STATE_VARIABLE_CI_82_82, &ll_backend__call_gen__STATE_VARIABLE_CI_83_83);
    }
#line 241 "call_gen.m"
    {
#line 241 "call_gen.m"
      ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_110_111_110_118_97_114_95_115_101_116_117_112_95_95_91_53_44_32_54_93_95_48_9_p_0(ll_backend__call_gen__GenericCall_12, ll_backend__call_gen__HoCallVariant_32, ll_backend__call_gen__InVarsR_24, ll_backend__call_gen__InVarsF_25, &ll_backend__call_gen__NonVarCode_45, ll_backend__call_gen__STATE_VARIABLE_CI_83_83, &ll_backend__call_gen__STATE_VARIABLE_CI_84_84);
    }
#line 244 "call_gen.m"
    {
#line 244 "call_gen.m"
      ll_backend__call_gen__extra_livevals_2_p_0(ll_backend__call_gen__FirstImmInputR_31, &ll_backend__call_gen__ExtraLiveVals_46);
    }
#line 245 "call_gen.m"
    {
#line 245 "call_gen.m"
      mercury__set__insert_list_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__call_gen__ExtraLiveVals_46, ll_backend__call_gen__LiveVals0_42, &ll_backend__call_gen__LiveVals_47);
    }
#line 247 "call_gen.m"
    {
#line 247 "call_gen.m"
      ll_backend__call_gen__prepare_for_call_6_p_0(ll_backend__call_gen__CodeModel_34, ll_backend__call_gen__GoalInfo_17, &ll_backend__call_gen__CallModel_48, &ll_backend__call_gen__TraceCode_49, ll_backend__call_gen__STATE_VARIABLE_CI_84_84, &ll_backend__call_gen__STATE_VARIABLE_CI_85_85);
    }
#line 250 "call_gen.m"
    {
#line 250 "call_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__call_gen__ReturnLabel_50, ll_backend__call_gen__STATE_VARIABLE_CI_85_85, &ll_backend__call_gen__STATE_VARIABLE_CI_86_86);
    }
#line 251 "call_gen.m"
    {
#line 251 "call_gen.m"
      ll_backend__call_gen__Context_51 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__call_gen__GoalInfo_17);
    }
#line 252 "call_gen.m"
    {
#line 252 "call_gen.m"
      ll_backend__call_gen__GoalId_52 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__call_gen__GoalInfo_17);
    }
#line 256 "call_gen.m"
    {
#line 256 "call_gen.m"
      ll_backend__code_info__get_instmap_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_86_86, &ll_backend__call_gen__InstMap_53);
    }
#line 257 "call_gen.m"
    {
#line 257 "call_gen.m"
      ll_backend__call_gen__InstMapDelta_54 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__call_gen__GoalInfo_17);
    }
#line 258 "call_gen.m"
    {
#line 258 "call_gen.m"
      hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__call_gen__InstMap_53, ll_backend__call_gen__InstMapDelta_54, &ll_backend__call_gen__ReturnInstMap_55);
    }
#line 261 "call_gen.m"
    {
#line 261 "call_gen.m"
      ll_backend__call_gen__OutArgsInfos_56 = mercury__list__f_43_43_2_f_0(ll_backend__call_gen__TypeInfo_107_107, ll_backend__call_gen__OutArgsInfosR_39, ll_backend__call_gen__OutArgsInfosF_40);
    }
#line 262 "call_gen.m"
    {
#line 262 "call_gen.m"
      ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_p_0(ll_backend__call_gen__OutArgsInfos_56, ll_backend__call_gen__GoalInfo_17, ll_backend__call_gen__ReturnInstMap_55, &ll_backend__call_gen__ReturnLiveLvalues_57, ll_backend__call_gen__STATE_VARIABLE_CI_86_86, &ll_backend__call_gen__STATE_VARIABLE_CI_87_87);
    }
#line 265 "call_gen.m"
    {
#line 265 "call_gen.m"
      ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_87_87, &ll_backend__call_gen__MaybeContainingGoalMap_58);
    }
#line 270 "call_gen.m"
    if ((ll_backend__call_gen__MaybeContainingGoalMap_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 272 "call_gen.m"
      ll_backend__call_gen__MaybeGoalPath_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 270 "call_gen.m"
    else
#line 267 "call_gen.m"
      {
#line 267 "call_gen.m"
        MR_Word ll_backend__call_gen__ContainingGoalMap_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeContainingGoalMap_58, (MR_Integer) 0)));
#line 267 "call_gen.m"
        MR_Word ll_backend__call_gen__GoalPath_60;

#line 268 "call_gen.m"
        {
#line 268 "call_gen.m"
          ll_backend__call_gen__GoalPath_60 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__call_gen__ContainingGoalMap_59, ll_backend__call_gen__GoalId_52);
        }
#line 269 "call_gen.m"
        {
#line 269 "call_gen.m"
          ll_backend__call_gen__MaybeGoalPath_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 269 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeGoalPath_61, 0) = ((MR_Box) (ll_backend__call_gen__GoalPath_60));
#line 269 "call_gen.m"
        }
#line 267 "call_gen.m"
      }
#line 1543 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeCtorInfo_109_109 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 275 "call_gen.m"
    {
#line 275 "call_gen.m"
      ll_backend__call_gen__V_90_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 275 "call_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__call_gen__V_90_90, 0) = ((MR_Box) (ll_backend__call_gen__LiveVals_47));
#line 275 "call_gen.m"
    }
#line 275 "call_gen.m"
    {
#line 275 "call_gen.m"
      ll_backend__call_gen__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 275 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_89_89, 0) = ((MR_Box) (ll_backend__call_gen__V_90_90));
#line 275 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_89_89, 1) = ((MR_Box) ((MR_String) ""));
#line 275 "call_gen.m"
    }
#line 276 "call_gen.m"
    {
#line 276 "call_gen.m"
      ll_backend__call_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 276 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_95_95, 0) = ((MR_Box) (ll_backend__call_gen__ReturnLabel_50));
#line 276 "call_gen.m"
    }
#line 276 "call_gen.m"
    {
#line 276 "call_gen.m"
      ll_backend__call_gen__V_94_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 276 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_94_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 276 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_94_94, 1) = ((MR_Box) (ll_backend__call_gen__CodeAddr_29));
#line 276 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_94_94, 2) = ((MR_Box) (ll_backend__call_gen__V_95_95));
#line 276 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_94_94, 3) = ((MR_Box) (ll_backend__call_gen__ReturnLiveLvalues_57));
#line 276 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_94_94, 4) = ((MR_Box) (ll_backend__call_gen__Context_51));
#line 276 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_94_94, 5) = ((MR_Box) (ll_backend__call_gen__MaybeGoalPath_61));
#line 276 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_94_94, 6) = ((MR_Box) (ll_backend__call_gen__CallModel_48));
#line 276 "call_gen.m"
    }
#line 277 "call_gen.m"
    {
#line 277 "call_gen.m"
      ll_backend__call_gen__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 277 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_93_93, 0) = ((MR_Box) (ll_backend__call_gen__V_94_94));
#line 277 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_93_93, 1) = ((MR_Box) ((MR_String) "Setup and call"));
#line 277 "call_gen.m"
    }
#line 278 "call_gen.m"
    {
#line 278 "call_gen.m"
      ll_backend__call_gen__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 278 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_99_99, 1) = ((MR_Box) (ll_backend__call_gen__ReturnLabel_50));
#line 278 "call_gen.m"
    }
#line 279 "call_gen.m"
    {
#line 279 "call_gen.m"
      ll_backend__call_gen__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 279 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_98_98, 0) = ((MR_Box) (ll_backend__call_gen__V_99_99));
#line 279 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_98_98, 1) = ((MR_Box) ((MR_String) "Continuation label"));
#line 279 "call_gen.m"
    }
#line 277 "call_gen.m"
    {
#line 277 "call_gen.m"
      ll_backend__call_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_97_97, 0) = ((MR_Box) (ll_backend__call_gen__V_98_98));
#line 277 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 277 "call_gen.m"
    }
#line 275 "call_gen.m"
    {
#line 275 "call_gen.m"
      ll_backend__call_gen__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 275 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_92_92, 0) = ((MR_Box) (ll_backend__call_gen__V_93_93));
#line 275 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_92_92, 1) = ((MR_Box) (ll_backend__call_gen__V_97_97));
#line 275 "call_gen.m"
    }
#line 274 "call_gen.m"
    {
#line 274 "call_gen.m"
      ll_backend__call_gen__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_88_88, 0) = ((MR_Box) (ll_backend__call_gen__V_89_89));
#line 274 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_88_88, 1) = ((MR_Box) (ll_backend__call_gen__V_92_92));
#line 274 "call_gen.m"
    }
#line 274 "call_gen.m"
    {
#line 274 "call_gen.m"
      ll_backend__call_gen__CallCode_62 = mercury__cord__from_list_1_f_0(ll_backend__call_gen__TypeCtorInfo_109_109, ll_backend__call_gen__V_88_88);
    }
#line 282 "call_gen.m"
    {
#line 282 "call_gen.m"
      ll_backend__call_gen__handle_call_failure_5_p_0(ll_backend__call_gen__CodeModel_34, ll_backend__call_gen__GoalInfo_17, &ll_backend__call_gen__FailHandlingCode_63, ll_backend__call_gen__STATE_VARIABLE_CI_87_87, ll_backend__call_gen__STATE_VARIABLE_CI_65);
    }
#line 284 "call_gen.m"
    {
#line 284 "call_gen.m"
      ll_backend__call_gen__V_105_105 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_109_109, ll_backend__call_gen__CallCode_62, ll_backend__call_gen__FailHandlingCode_63);
    }
#line 284 "call_gen.m"
    {
#line 284 "call_gen.m"
      ll_backend__call_gen__V_104_104 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_109_109, ll_backend__call_gen__TraceCode_49, ll_backend__call_gen__V_105_105);
    }
#line 284 "call_gen.m"
    {
#line 284 "call_gen.m"
      ll_backend__call_gen__V_103_103 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_109_109, ll_backend__call_gen__NonVarCode_45, ll_backend__call_gen__V_104_104);
    }
#line 284 "call_gen.m"
    {
#line 284 "call_gen.m"
      *ll_backend__call_gen__Code_18 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_109_109, ll_backend__call_gen__SetupCode_43, ll_backend__call_gen__V_103_103);
    }
#line 198 "call_gen.m"
  }
#line 192 "call_gen.m"
}

#line 37 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_10_p_0(
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__GenericCall_12,
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__Args_13,
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__Modes_14,
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__MaybeRegTypes_15,
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__Det_16,
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_17,
#line 37 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_18,
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_32,
#line 37 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_33)
#line 37 "call_gen.m"
{
#line 177 "call_gen.m"
  {
#line 177 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 177 "call_gen.m"
    if (((MR_tag((MR_Word) ll_backend__call_gen__GenericCall_12)) == (MR_mktag((MR_Integer) 3))))
#line 187 "call_gen.m"
      {
#line 187 "call_gen.m"
        MR_Word ll_backend__call_gen__InputArg_30;
#line 187 "call_gen.m"
        MR_Word ll_backend__call_gen__OutputArg_31;
#line 185 "call_gen.m"
        MR_Word ll_backend__call_gen__V_34_34;
#line 185 "call_gen.m"
        MR_Word ll_backend__call_gen__V_35_35;

#line 185 "call_gen.m"
        ll_backend__call_gen__succeeded = ((MR_tag((MR_Word) ll_backend__call_gen__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 185 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 185 "call_gen.m"
          {
#line 185 "call_gen.m"
            ll_backend__call_gen__InputArg_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__Args_13, (MR_Integer) 0)));
#line 185 "call_gen.m"
            ll_backend__call_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__Args_13, (MR_Integer) 1)));
#line 185 "call_gen.m"
            ll_backend__call_gen__succeeded = ((MR_tag((MR_Word) ll_backend__call_gen__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 185 "call_gen.m"
            if (ll_backend__call_gen__succeeded)
#line 185 "call_gen.m"
              {
#line 185 "call_gen.m"
                ll_backend__call_gen__OutputArg_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_34_34, (MR_Integer) 0)));
#line 185 "call_gen.m"
                ll_backend__call_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_34_34, (MR_Integer) 1)));
#line 185 "call_gen.m"
                ll_backend__call_gen__succeeded = (ll_backend__call_gen__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 185 "call_gen.m"
              }
#line 185 "call_gen.m"
          }
#line 187 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 186 "call_gen.m"
          {
#line 186 "call_gen.m"
            MR_Word ll_backend__call_gen__V_36_36;

#line 186 "call_gen.m"
            {
#line 186 "call_gen.m"
              ll_backend__call_gen__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 186 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_36_36, 0) = ((MR_Box) (ll_backend__call_gen__InputArg_30));
#line 186 "call_gen.m"
            }
#line 721 "call_gen.m"
            {
#line 721 "call_gen.m"
              ll_backend__call_gen__succeeded = ll_backend__code_info__variable_is_forward_live_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_32, ll_backend__call_gen__OutputArg_31);
            }
#line 724 "call_gen.m"
            if (ll_backend__call_gen__succeeded)
#line 722 "call_gen.m"
              {
#line 722 "call_gen.m"
                MR_Word ll_backend__call_gen__Rval_49;

#line 722 "call_gen.m"
                {
#line 722 "call_gen.m"
                  ll_backend__call_gen__Rval_49 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__V_36_36);
                }
#line 723 "call_gen.m"
                {
#line 723 "call_gen.m"
                  ll_backend__code_info__assign_expr_to_var_5_p_0(ll_backend__call_gen__OutputArg_31, ll_backend__call_gen__Rval_49, ll_backend__call_gen__Code_18, ll_backend__call_gen__STATE_VARIABLE_CI_0_32, ll_backend__call_gen__STATE_VARIABLE_CI_33);
#line 723 "call_gen.m"
                  return;
                }
#line 722 "call_gen.m"
              }
#line 724 "call_gen.m"
            else
#line 725 "call_gen.m"
              {
#line 725 "call_gen.m"
                {
#line 725 "call_gen.m"
                  *ll_backend__call_gen__Code_18 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
#line 725 "call_gen.m"
                *ll_backend__call_gen__STATE_VARIABLE_CI_33 = ll_backend__call_gen__STATE_VARIABLE_CI_0_32;
#line 725 "call_gen.m"
              }
#line 186 "call_gen.m"
          }
#line 187 "call_gen.m"
        else
#line 188 "call_gen.m"
          {
#line 188 "call_gen.m"
            {
#line 188 "call_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_generic_call\'/10", (MR_String) "invalid type/inst cast call");
#line 188 "call_gen.m"
              return;
            }
#line 188 "call_gen.m"
          }
#line 187 "call_gen.m"
      }
#line 177 "call_gen.m"
    else
#line 177 "call_gen.m"
      if (((MR_tag((MR_Word) ll_backend__call_gen__GenericCall_12)) == (MR_mktag((MR_Integer) 2))))
#line 181 "call_gen.m"
        {
#line 181 "call_gen.m"
          MR_String ll_backend__call_gen__EventName_28 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__call_gen__GenericCall_12, (MR_Integer) 0)));
#line 181 "call_gen.m"
          MR_Word ll_backend__call_gen__ModuleInfo_59;
#line 181 "call_gen.m"
          MR_Word ll_backend__call_gen__EventSet_60;
#line 181 "call_gen.m"
          MR_Word ll_backend__call_gen__EventSpecMap_61;
#line 295 "call_gen.m"
          MR_String ll_backend__call_gen__V_74_74;
#line 305 "call_gen.m"
          MR_Word ll_backend__call_gen__Attributes_62;
#line 305 "call_gen.m"
          MR_Integer ll_backend__call_gen__EventNumber_63;

#line 293 "call_gen.m"
          {
#line 293 "call_gen.m"
            ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_32, &ll_backend__call_gen__ModuleInfo_59);
          }
#line 294 "call_gen.m"
          {
#line 294 "call_gen.m"
            hlds__hlds_module__module_info_get_event_set_2_p_0(ll_backend__call_gen__ModuleInfo_59, &ll_backend__call_gen__EventSet_60);
          }
#line 295 "call_gen.m"
          ll_backend__call_gen__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__EventSet_60, (MR_Integer) 0)));
#line 295 "call_gen.m"
          ll_backend__call_gen__EventSpecMap_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__EventSet_60, (MR_Integer) 1)));
#line 297 "call_gen.m"
          {
#line 297 "call_gen.m"
            ll_backend__call_gen__succeeded = parse_tree__prog_event__event_attributes_3_p_0(ll_backend__call_gen__EventSpecMap_61, ll_backend__call_gen__EventName_28, &ll_backend__call_gen__Attributes_62);
          }
#line 297 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 298 "call_gen.m"
            {
#line 298 "call_gen.m"
              ll_backend__call_gen__succeeded = parse_tree__prog_event__event_number_3_p_0(ll_backend__call_gen__EventSpecMap_61, ll_backend__call_gen__EventName_28, &ll_backend__call_gen__EventNumber_63);
            }
#line 305 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 301 "call_gen.m"
            {
#line 301 "call_gen.m"
              MR_Word ll_backend__call_gen__TypeCtorInfo_30_75;
#line 301 "call_gen.m"
              MR_Word ll_backend__call_gen__MaybeUserAttributes_64;
#line 301 "call_gen.m"
              MR_Word ll_backend__call_gen__AttrCodes_65;
#line 301 "call_gen.m"
              MR_Word ll_backend__call_gen__UserEventInfo_66;
#line 301 "call_gen.m"
              MR_Word ll_backend__call_gen__EventCode_67;
#line 301 "call_gen.m"
              MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_23_68;
#line 301 "call_gen.m"
              MR_Word ll_backend__call_gen__V_70_70;

#line 300 "call_gen.m"
              {
#line 300 "call_gen.m"
                ll_backend__call_gen__generate_event_attributes_6_p_0(ll_backend__call_gen__Attributes_62, ll_backend__call_gen__Args_13, &ll_backend__call_gen__MaybeUserAttributes_64, &ll_backend__call_gen__AttrCodes_65, ll_backend__call_gen__STATE_VARIABLE_CI_0_32, &ll_backend__call_gen__STATE_VARIABLE_CI_23_68);
              }
#line 302 "call_gen.m"
              {
#line 302 "call_gen.m"
                ll_backend__call_gen__UserEventInfo_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__UserEventInfo_66, 0) = ((MR_Box) (ll_backend__call_gen__EventNumber_63));
#line 302 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__UserEventInfo_66, 1) = ((MR_Box) (ll_backend__call_gen__MaybeUserAttributes_64));
#line 302 "call_gen.m"
              }
#line 303 "call_gen.m"
              {
#line 303 "call_gen.m"
                ll_backend__trace_gen__generate_user_event_code_5_p_0(ll_backend__call_gen__UserEventInfo_66, ll_backend__call_gen__GoalInfo_17, &ll_backend__call_gen__EventCode_67, ll_backend__call_gen__STATE_VARIABLE_CI_23_68, ll_backend__call_gen__STATE_VARIABLE_CI_33);
              }
#line 1910 "ll_backend.call_gen.c"
              ll_backend__call_gen__TypeCtorInfo_30_75 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 304 "call_gen.m"
              {
#line 304 "call_gen.m"
                ll_backend__call_gen__V_70_70 = mercury__cord__cord_list_to_cord_1_f_0(ll_backend__call_gen__TypeCtorInfo_30_75, ll_backend__call_gen__AttrCodes_65);
              }
#line 304 "call_gen.m"
              {
#line 304 "call_gen.m"
                *ll_backend__call_gen__Code_18 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_30_75, ll_backend__call_gen__V_70_70, ll_backend__call_gen__EventCode_67);
              }
#line 301 "call_gen.m"
            }
#line 305 "call_gen.m"
          else
#line 306 "call_gen.m"
            {
#line 306 "call_gen.m"
              {
#line 306 "call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_event_call\'/6", (MR_String) "bad event name");
#line 306 "call_gen.m"
                return;
              }
#line 306 "call_gen.m"
            }
#line 181 "call_gen.m"
        }
#line 177 "call_gen.m"
      else
#line 178 "call_gen.m"
        {
#line 178 "call_gen.m"
          ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_10_p_0(ll_backend__call_gen__GenericCall_12, ll_backend__call_gen__Args_13, ll_backend__call_gen__Modes_14, ll_backend__call_gen__MaybeRegTypes_15, ll_backend__call_gen__Det_16, ll_backend__call_gen__GoalInfo_17, ll_backend__call_gen__Code_18, ll_backend__call_gen__STATE_VARIABLE_CI_0_32, ll_backend__call_gen__STATE_VARIABLE_CI_33);
#line 178 "call_gen.m"
          return;
        }
#line 177 "call_gen.m"
  }
#line 37 "call_gen.m"
}

#line 45 "call_gen.m"
void MR_CALL 
ll_backend__call_gen____Compare____known_call_variant_0_0(
#line 45 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__1_1,
#line 45 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__2_2,
#line 45 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__3_3)
#line 45 "call_gen.m"
{
#line 45 "call_gen.m"
  {
#line 45 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 45 "call_gen.m"
    MR_Integer ll_backend__call_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__call_gen__HeadVar__2_2;
#line 45 "call_gen.m"
    MR_Integer ll_backend__call_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__call_gen__HeadVar__3_3;

#line 45 "call_gen.m"
    {
#line 45 "call_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__call_gen__HeadVar__1_1, ll_backend__call_gen__Cast_HeadVar1_4, ll_backend__call_gen__Cast_HeadVar2_5);
#line 45 "call_gen.m"
      return;
    }
#line 45 "call_gen.m"
  }
#line 45 "call_gen.m"
}

#line 45 "call_gen.m"
MR_bool MR_CALL 
ll_backend__call_gen____Unify____known_call_variant_0_0(
#line 45 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__2_1,
#line 45 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__2_2)
#line 45 "call_gen.m"
{
#line 1994 "ll_backend.call_gen.c"
  {
#line 1996 "ll_backend.call_gen.c"
    MR_bool ll_backend__call_gen__succeeded = (ll_backend__call_gen__HeadVar__2_1 == ll_backend__call_gen__HeadVar__2_2);

#line 1999 "ll_backend.call_gen.c"
    return ll_backend__call_gen__succeeded;
#line 2001 "ll_backend.call_gen.c"
  }
#line 45 "call_gen.m"
}

#line 819 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(
#line 819 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 819 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__2_2,
#line 819 "call_gen.m"
  MR_Integer ll_backend__call_gen__HeadVar__3_3,
#line 819 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__4_4,
#line 819 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__5_5)
#line 819 "call_gen.m"
{
#line 823 "call_gen.m"
  {
#line 823 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 823 "call_gen.m"
    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 823 "call_gen.m"
      *ll_backend__call_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 823 "call_gen.m"
    else
#line 825 "call_gen.m"
      {
#line 825 "call_gen.m"
        MR_Word ll_backend__call_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 825 "call_gen.m"
        MR_Word ll_backend__call_gen__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 825 "call_gen.m"
        MR_Word ll_backend__call_gen__ArgInfo_14;
#line 825 "call_gen.m"
        MR_Word ll_backend__call_gen__ArgInfos_15;
#line 825 "call_gen.m"
        MR_Word ll_backend__call_gen__V_16_16;
#line 825 "call_gen.m"
        MR_Word ll_backend__call_gen__V_17_17;
#line 825 "call_gen.m"
        MR_Integer ll_backend__call_gen__V_18_18;

#line 826 "call_gen.m"
        {
#line 826 "call_gen.m"
          ll_backend__call_gen__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 826 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_17_17, 0) = ((MR_Box) (ll_backend__call_gen__HeadVar__2_2));
#line 826 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_17_17, 1) = ((MR_Box) (ll_backend__call_gen__HeadVar__3_3));
#line 826 "call_gen.m"
        }
#line 826 "call_gen.m"
        {
#line 826 "call_gen.m"
          ll_backend__call_gen__ArgInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 826 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__ArgInfo_14, 0) = ((MR_Box) (ll_backend__call_gen__V_17_17));
#line 826 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__ArgInfo_14, 1) = ((MR_Box) (ll_backend__call_gen__HeadVar__4_4));
#line 826 "call_gen.m"
        }
#line 825 "call_gen.m"
        {
#line 825 "call_gen.m"
          ll_backend__call_gen__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 825 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_16_16, 0) = ((MR_Box) (ll_backend__call_gen__Var_9));
#line 825 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_16_16, 1) = ((MR_Box) (ll_backend__call_gen__ArgInfo_14));
#line 825 "call_gen.m"
        }
#line 827 "call_gen.m"
        ll_backend__call_gen__V_18_18 = (ll_backend__call_gen__HeadVar__3_3 + (MR_Integer) 1);
#line 827 "call_gen.m"
        {
#line 827 "call_gen.m"
          ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__Vars_10, ll_backend__call_gen__HeadVar__2_2, ll_backend__call_gen__V_18_18, ll_backend__call_gen__HeadVar__4_4, &ll_backend__call_gen__ArgInfos_15);
        }
#line 825 "call_gen.m"
        {
#line 825 "call_gen.m"
          MR_Word base;
#line 825 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "call_gen.m"
          *ll_backend__call_gen__HeadVar__5_5 = base;
#line 825 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_16_16));
#line 825 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__ArgInfos_15));
#line 825 "call_gen.m"
        }
#line 825 "call_gen.m"
      }
#line 823 "call_gen.m"
  }
#line 819 "call_gen.m"
}

#line 738 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_simple_test_5_p_0(
#line 738 "call_gen.m"
  MR_Word ll_backend__call_gen__TestExpr_6,
#line 738 "call_gen.m"
  MR_Word * ll_backend__call_gen__Rval_7,
#line 738 "call_gen.m"
  MR_Word * ll_backend__call_gen__ArgCode_8,
#line 738 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_20,
#line 738 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_21)
#line 738 "call_gen.m"
{
#line 743 "call_gen.m"
  {
#line 743 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 743 "call_gen.m"
    if (((((MR_tag((MR_Word) ll_backend__call_gen__TestExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 743 "call_gen.m"
      {
#line 743 "call_gen.m"
        MR_Word ll_backend__call_gen__BinOp_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_6, (MR_Integer) 1)));
#line 743 "call_gen.m"
        MR_Word ll_backend__call_gen__X0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_6, (MR_Integer) 2)));
#line 743 "call_gen.m"
        MR_Word ll_backend__call_gen__Y0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_6, (MR_Integer) 3)));
#line 743 "call_gen.m"
        MR_Word ll_backend__call_gen__X1_13;
#line 743 "call_gen.m"
        MR_Word ll_backend__call_gen__Y1_14;
#line 743 "call_gen.m"
        MR_Word ll_backend__call_gen__X_15;
#line 743 "call_gen.m"
        MR_Word ll_backend__call_gen__CodeX_16;
#line 743 "call_gen.m"
        MR_Word ll_backend__call_gen__Y_17;
#line 743 "call_gen.m"
        MR_Word ll_backend__call_gen__CodeY_18;
#line 743 "call_gen.m"
        MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_23_23;

#line 744 "call_gen.m"
        {
#line 744 "call_gen.m"
          ll_backend__call_gen__X1_13 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__X0_11);
        }
#line 745 "call_gen.m"
        {
#line 745 "call_gen.m"
          ll_backend__call_gen__Y1_14 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Y0_12);
        }
#line 762 "call_gen.m"
        if (((MR_tag((MR_Word) ll_backend__call_gen__X1_13)) == (MR_mktag((MR_Integer) 1))))
#line 762 "call_gen.m"
          {
#line 762 "call_gen.m"
            MR_Word ll_backend__call_gen__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__X1_13, (MR_Integer) 0)));

#line 763 "call_gen.m"
            {
#line 763 "call_gen.m"
              ll_backend__code_info__produce_variable_5_p_0(ll_backend__call_gen__Var_35, &ll_backend__call_gen__CodeX_16, &ll_backend__call_gen__X_15, ll_backend__call_gen__STATE_VARIABLE_CI_0_20, &ll_backend__call_gen__STATE_VARIABLE_CI_23_23);
            }
#line 762 "call_gen.m"
          }
#line 762 "call_gen.m"
        else
#line 772 "call_gen.m"
          {
#line 773 "call_gen.m"
            ll_backend__call_gen__X_15 = ll_backend__call_gen__X1_13;
#line 774 "call_gen.m"
            {
#line 774 "call_gen.m"
              ll_backend__call_gen__CodeX_16 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 774 "call_gen.m"
            ll_backend__call_gen__STATE_VARIABLE_CI_23_23 = ll_backend__call_gen__STATE_VARIABLE_CI_0_20;
#line 772 "call_gen.m"
          }
#line 762 "call_gen.m"
        if (((MR_tag((MR_Word) ll_backend__call_gen__Y1_14)) == (MR_mktag((MR_Integer) 1))))
#line 762 "call_gen.m"
          {
#line 762 "call_gen.m"
            MR_Word ll_backend__call_gen__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__Y1_14, (MR_Integer) 0)));

#line 763 "call_gen.m"
            {
#line 763 "call_gen.m"
              ll_backend__code_info__produce_variable_5_p_0(ll_backend__call_gen__Var_55, &ll_backend__call_gen__CodeY_18, &ll_backend__call_gen__Y_17, ll_backend__call_gen__STATE_VARIABLE_CI_23_23, ll_backend__call_gen__STATE_VARIABLE_CI_21);
            }
#line 762 "call_gen.m"
          }
#line 762 "call_gen.m"
        else
#line 772 "call_gen.m"
          {
#line 773 "call_gen.m"
            ll_backend__call_gen__Y_17 = ll_backend__call_gen__Y1_14;
#line 774 "call_gen.m"
            {
#line 774 "call_gen.m"
              ll_backend__call_gen__CodeY_18 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 774 "call_gen.m"
            *ll_backend__call_gen__STATE_VARIABLE_CI_21 = ll_backend__call_gen__STATE_VARIABLE_CI_23_23;
#line 772 "call_gen.m"
          }
#line 748 "call_gen.m"
        {
#line 748 "call_gen.m"
          MR_Word base;
#line 748 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 748 "call_gen.m"
          *ll_backend__call_gen__Rval_7 = base;
#line 748 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 748 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__call_gen__BinOp_10));
#line 748 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__call_gen__X_15));
#line 748 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__call_gen__Y_17));
#line 748 "call_gen.m"
        }
#line 749 "call_gen.m"
        {
#line 749 "call_gen.m"
          *ll_backend__call_gen__ArgCode_8 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__call_gen__CodeX_16, ll_backend__call_gen__CodeY_18);
        }
#line 743 "call_gen.m"
      }
#line 743 "call_gen.m"
    else
#line 751 "call_gen.m"
      {
#line 751 "call_gen.m"
        MR_Word ll_backend__call_gen__UnOp_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_6, (MR_Integer) 1)));
#line 751 "call_gen.m"
        MR_Word ll_backend__call_gen__X0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_6, (MR_Integer) 2)));
#line 751 "call_gen.m"
        MR_Word ll_backend__call_gen__X1_26;
#line 751 "call_gen.m"
        MR_Word ll_backend__call_gen__X_27;

#line 752 "call_gen.m"
        {
#line 752 "call_gen.m"
          ll_backend__call_gen__X1_26 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__X0_25);
        }
#line 762 "call_gen.m"
        if (((MR_tag((MR_Word) ll_backend__call_gen__X1_26)) == (MR_mktag((MR_Integer) 1))))
#line 762 "call_gen.m"
          {
#line 762 "call_gen.m"
            MR_Word ll_backend__call_gen__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__X1_26, (MR_Integer) 0)));

#line 763 "call_gen.m"
            {
#line 763 "call_gen.m"
              ll_backend__code_info__produce_variable_5_p_0(ll_backend__call_gen__Var_75, ll_backend__call_gen__ArgCode_8, &ll_backend__call_gen__X_27, ll_backend__call_gen__STATE_VARIABLE_CI_0_20, ll_backend__call_gen__STATE_VARIABLE_CI_21);
            }
#line 762 "call_gen.m"
          }
#line 762 "call_gen.m"
        else
#line 772 "call_gen.m"
          {
#line 773 "call_gen.m"
            ll_backend__call_gen__X_27 = ll_backend__call_gen__X1_26;
#line 774 "call_gen.m"
            {
#line 774 "call_gen.m"
              *ll_backend__call_gen__ArgCode_8 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 774 "call_gen.m"
            *ll_backend__call_gen__STATE_VARIABLE_CI_21 = ll_backend__call_gen__STATE_VARIABLE_CI_0_20;
#line 772 "call_gen.m"
          }
#line 754 "call_gen.m"
        {
#line 754 "call_gen.m"
          MR_Word base;
#line 754 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 754 "call_gen.m"
          *ll_backend__call_gen__Rval_7 = base;
#line 754 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 754 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__call_gen__UnOp_19));
#line 754 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__call_gen__X_27));
#line 754 "call_gen.m"
        }
#line 751 "call_gen.m"
      }
#line 743 "call_gen.m"
  }
#line 738 "call_gen.m"
}

#line 728 "call_gen.m"
static MR_Word MR_CALL 
ll_backend__call_gen__convert_simple_expr_1_f_0(
#line 728 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1)
#line 728 "call_gen.m"
{
#line 730 "call_gen.m"
  {
#line 730 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 730 "call_gen.m"
    MR_Word ll_backend__call_gen__HeadVar__2_2;

#line 730 "call_gen.m"
    if (((MR_tag((MR_Word) ll_backend__call_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 732 "call_gen.m"
      {
#line 732 "call_gen.m"
        MR_Float ll_backend__call_gen__Float_6 = MR_unbox_float((MR_hl_field(MR_mktag(2), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 732 "call_gen.m"
        MR_Word ll_backend__call_gen__V_7_7;

#line 732 "call_gen.m"
        {
#line 732 "call_gen.m"
          ll_backend__call_gen__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 732 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_7_7, 1) = MR_box_float(ll_backend__call_gen__Float_6);
#line 732 "call_gen.m"
        }
#line 732 "call_gen.m"
        {
#line 732 "call_gen.m"
          ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 732 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__call_gen__V_7_7));
#line 732 "call_gen.m"
        }
#line 732 "call_gen.m"
      }
#line 730 "call_gen.m"
    else
#line 730 "call_gen.m"
      if (((MR_tag((MR_Word) ll_backend__call_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 731 "call_gen.m"
        {
#line 731 "call_gen.m"
          MR_Integer ll_backend__call_gen__Int_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 731 "call_gen.m"
          MR_Word ll_backend__call_gen__V_5_5;

#line 731 "call_gen.m"
          {
#line 731 "call_gen.m"
            ll_backend__call_gen__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 731 "call_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_5_5, 0) = ((MR_Box) (ll_backend__call_gen__Int_4));
#line 731 "call_gen.m"
          }
#line 731 "call_gen.m"
          {
#line 731 "call_gen.m"
            ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "call_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 731 "call_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__call_gen__V_5_5));
#line 731 "call_gen.m"
          }
#line 731 "call_gen.m"
        }
#line 730 "call_gen.m"
      else
#line 730 "call_gen.m"
        if (((MR_tag((MR_Word) ll_backend__call_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 730 "call_gen.m"
          {
#line 730 "call_gen.m"
            MR_Word ll_backend__call_gen__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));

#line 730 "call_gen.m"
            {
#line 730 "call_gen.m"
              ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 730 "call_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (ll_backend__call_gen__Var_3));
#line 730 "call_gen.m"
            }
#line 730 "call_gen.m"
          }
#line 730 "call_gen.m"
        else
#line 730 "call_gen.m"
          if (((((MR_tag((MR_Word) ll_backend__call_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 735 "call_gen.m"
            {
#line 735 "call_gen.m"
              MR_Word ll_backend__call_gen__BinOp_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 735 "call_gen.m"
              MR_Word ll_backend__call_gen__Expr1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 735 "call_gen.m"
              MR_Word ll_backend__call_gen__Expr2_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 735 "call_gen.m"
              MR_Word ll_backend__call_gen__V_14_14;
#line 735 "call_gen.m"
              MR_Word ll_backend__call_gen__V_15_15;

#line 736 "call_gen.m"
              {
#line 736 "call_gen.m"
                ll_backend__call_gen__V_14_14 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Expr1_12);
              }
#line 736 "call_gen.m"
              {
#line 736 "call_gen.m"
                ll_backend__call_gen__V_15_15 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Expr2_13);
              }
#line 735 "call_gen.m"
              {
#line 735 "call_gen.m"
                ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 735 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 735 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__call_gen__BinOp_11));
#line 735 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 2) = ((MR_Box) (ll_backend__call_gen__V_14_14));
#line 735 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 3) = ((MR_Box) (ll_backend__call_gen__V_15_15));
#line 735 "call_gen.m"
              }
#line 735 "call_gen.m"
            }
#line 730 "call_gen.m"
          else
#line 733 "call_gen.m"
            {
#line 733 "call_gen.m"
              MR_Word ll_backend__call_gen__UnOp_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 733 "call_gen.m"
              MR_Word ll_backend__call_gen__Expr_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 733 "call_gen.m"
              MR_Word ll_backend__call_gen__V_10_10;

#line 734 "call_gen.m"
              {
#line 734 "call_gen.m"
                ll_backend__call_gen__V_10_10 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Expr_9);
              }
#line 733 "call_gen.m"
              {
#line 733 "call_gen.m"
                ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 733 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 733 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__call_gen__UnOp_8));
#line 733 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 2) = ((MR_Box) (ll_backend__call_gen__V_10_10));
#line 733 "call_gen.m"
              }
#line 733 "call_gen.m"
            }
#line 730 "call_gen.m"
    return ll_backend__call_gen__HeadVar__2_2;
#line 730 "call_gen.m"
  }
#line 728 "call_gen.m"
}

#line 717 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_assign_builtin_5_p_0(
#line 717 "call_gen.m"
  MR_Word ll_backend__call_gen__Var_6,
#line 717 "call_gen.m"
  MR_Word ll_backend__call_gen__AssignExpr_7,
#line 717 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_8,
#line 717 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_11,
#line 717 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_12)
#line 717 "call_gen.m"
{
#line 724 "call_gen.m"
  {
#line 724 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 721 "call_gen.m"
    {
#line 721 "call_gen.m"
      ll_backend__call_gen__succeeded = ll_backend__code_info__variable_is_forward_live_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_11, ll_backend__call_gen__Var_6);
    }
#line 724 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 722 "call_gen.m"
      {
#line 722 "call_gen.m"
        MR_Word ll_backend__call_gen__Rval_10;

#line 722 "call_gen.m"
        {
#line 722 "call_gen.m"
          ll_backend__call_gen__Rval_10 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__AssignExpr_7);
        }
#line 723 "call_gen.m"
        {
#line 723 "call_gen.m"
          ll_backend__code_info__assign_expr_to_var_5_p_0(ll_backend__call_gen__Var_6, ll_backend__call_gen__Rval_10, ll_backend__call_gen__Code_8, ll_backend__call_gen__STATE_VARIABLE_CI_0_11, ll_backend__call_gen__STATE_VARIABLE_CI_12);
#line 723 "call_gen.m"
          return;
        }
#line 722 "call_gen.m"
      }
#line 724 "call_gen.m"
    else
#line 725 "call_gen.m"
      {
#line 725 "call_gen.m"
        {
#line 725 "call_gen.m"
          *ll_backend__call_gen__Code_8 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 725 "call_gen.m"
        *ll_backend__call_gen__STATE_VARIABLE_CI_12 = ll_backend__call_gen__STATE_VARIABLE_CI_0_11;
#line 725 "call_gen.m"
      }
#line 724 "call_gen.m"
  }
#line 717 "call_gen.m"
}

#line 636 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__rebuild_registers_5_p_0(
#line 636 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 636 "call_gen.m"
  MR_Word ll_backend__call_gen__Liveness_2,
#line 636 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__3_3,
#line 636 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_4,
#line 636 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_5)
#line 636 "call_gen.m"
{
#line 640 "call_gen.m"
  {
#line 640 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 640 "call_gen.m"
    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 640 "call_gen.m"
      {
#line 640 "call_gen.m"
        *ll_backend__call_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "call_gen.m"
        *ll_backend__call_gen__STATE_VARIABLE_CI_5 = ll_backend__call_gen__STATE_VARIABLE_CI_0_4;
#line 640 "call_gen.m"
      }
#line 640 "call_gen.m"
    else
#line 642 "call_gen.m"
      {
#line 642 "call_gen.m"
        MR_Word ll_backend__call_gen__Var_10;
#line 642 "call_gen.m"
        MR_Word ll_backend__call_gen__ArgLoc_11;
#line 642 "call_gen.m"
        MR_Word ll_backend__call_gen__Mode_12;
#line 642 "call_gen.m"
        MR_Word ll_backend__call_gen__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 642 "call_gen.m"
        MR_Word ll_backend__call_gen__OutputArgLocs1_17;
#line 642 "call_gen.m"
        MR_Word ll_backend__call_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 642 "call_gen.m"
        MR_Word ll_backend__call_gen__V_22_22;
#line 642 "call_gen.m"
        MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_23_23;
#line 645 "call_gen.m"
        MR_Word ll_backend__call_gen__TypeCtorInfo_26_26;

#line 641 "call_gen.m"
        ll_backend__call_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_21_21, (MR_Integer) 0)));
#line 641 "call_gen.m"
        ll_backend__call_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_21_21, (MR_Integer) 1)));
#line 641 "call_gen.m"
        ll_backend__call_gen__ArgLoc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_22_22, (MR_Integer) 0)));
#line 641 "call_gen.m"
        ll_backend__call_gen__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_22_22, (MR_Integer) 1)));
#line 643 "call_gen.m"
        {
#line 643 "call_gen.m"
          ll_backend__call_gen__rebuild_registers_5_p_0(ll_backend__call_gen__Args_13, ll_backend__call_gen__Liveness_2, &ll_backend__call_gen__OutputArgLocs1_17, ll_backend__call_gen__STATE_VARIABLE_CI_0_4, &ll_backend__call_gen__STATE_VARIABLE_CI_23_23);
        }
#line 645 "call_gen.m"
        ll_backend__call_gen__succeeded = (ll_backend__call_gen__Mode_12 == (MR_Integer) 1);
#line 645 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 645 "call_gen.m"
          {
#line 2626 "ll_backend.call_gen.c"
            ll_backend__call_gen__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 646 "call_gen.m"
            {
#line 646 "call_gen.m"
              ll_backend__call_gen__succeeded = parse_tree__set_of_var__member_2_p_0(ll_backend__call_gen__TypeCtorInfo_26_26, ll_backend__call_gen__Liveness_2, ll_backend__call_gen__Var_10);
            }
#line 645 "call_gen.m"
          }
#line 651 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 648 "call_gen.m"
          {
#line 648 "call_gen.m"
            MR_Word ll_backend__call_gen__Register_18;
#line 648 "call_gen.m"
            MR_Word ll_backend__call_gen__V_25_25;

#line 648 "call_gen.m"
            {
#line 648 "call_gen.m"
              ll_backend__code_util__arg_loc_to_register_2_p_0(ll_backend__call_gen__ArgLoc_11, &ll_backend__call_gen__Register_18);
            }
#line 649 "call_gen.m"
            {
#line 649 "call_gen.m"
              ll_backend__code_info__set_var_location_4_p_0(ll_backend__call_gen__Var_10, ll_backend__call_gen__Register_18, ll_backend__call_gen__STATE_VARIABLE_CI_23_23, ll_backend__call_gen__STATE_VARIABLE_CI_5);
            }
#line 650 "call_gen.m"
            {
#line 650 "call_gen.m"
              ll_backend__call_gen__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 650 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_25_25, 0) = ((MR_Box) (ll_backend__call_gen__Var_10));
#line 650 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_25_25, 1) = ((MR_Box) (ll_backend__call_gen__ArgLoc_11));
#line 650 "call_gen.m"
            }
#line 650 "call_gen.m"
            {
#line 650 "call_gen.m"
              MR_Word base;
#line 650 "call_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 650 "call_gen.m"
              *ll_backend__call_gen__HeadVar__3_3 = base;
#line 650 "call_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_25_25));
#line 650 "call_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__OutputArgLocs1_17));
#line 650 "call_gen.m"
            }
#line 648 "call_gen.m"
          }
#line 651 "call_gen.m"
        else
#line 652 "call_gen.m"
          {
#line 652 "call_gen.m"
            *ll_backend__call_gen__HeadVar__3_3 = ll_backend__call_gen__OutputArgLocs1_17;
#line 652 "call_gen.m"
            *ll_backend__call_gen__STATE_VARIABLE_CI_5 = ll_backend__call_gen__STATE_VARIABLE_CI_23_23;
#line 652 "call_gen.m"
          }
#line 642 "call_gen.m"
      }
#line 640 "call_gen.m"
  }
#line 636 "call_gen.m"
}

#line 616 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__find_nonlive_outputs_4_p_0(
#line 616 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 616 "call_gen.m"
  MR_Word ll_backend__call_gen__Liveness_2,
#line 616 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3,
#line 616 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_4)
#line 616 "call_gen.m"
{
#line 619 "call_gen.m"
  while (MR_TRUE)
#line 619 "call_gen.m"
    {
#line 619 "call_gen.m"
      /* tailcall optimized into a loop */
#line 619 "call_gen.m"
      {
#line 619 "call_gen.m"
        MR_bool ll_backend__call_gen__succeeded;

#line 619 "call_gen.m"
        if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 619 "call_gen.m"
          *ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_4 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3;
#line 619 "call_gen.m"
        else
#line 621 "call_gen.m"
          {
#line 621 "call_gen.m"
            MR_Word ll_backend__call_gen__Var_9;
#line 621 "call_gen.m"
            MR_Word ll_backend__call_gen__Mode_11;
#line 621 "call_gen.m"
            MR_Word ll_backend__call_gen__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 621 "call_gen.m"
            MR_Word ll_backend__call_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 621 "call_gen.m"
            MR_Word ll_backend__call_gen__V_18_18;
#line 621 "call_gen.m"
            MR_Word ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19;
#line 620 "call_gen.m"
            MR_Word ll_backend__call_gen___ArgLoc_10;

#line 620 "call_gen.m"
            ll_backend__call_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_17_17, (MR_Integer) 0)));
#line 620 "call_gen.m"
            ll_backend__call_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_17_17, (MR_Integer) 1)));
#line 620 "call_gen.m"
            ll_backend__call_gen___ArgLoc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_18_18, (MR_Integer) 0)));
#line 620 "call_gen.m"
            ll_backend__call_gen__Mode_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_18_18, (MR_Integer) 1)));
#line 629 "call_gen.m"
            if ((ll_backend__call_gen__Mode_11 == (MR_Integer) 0))
#line 630 "call_gen.m"
              ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3;
#line 629 "call_gen.m"
            else
#line 629 "call_gen.m"
              if ((ll_backend__call_gen__Mode_11 == (MR_Integer) 1))
#line 626 "call_gen.m"
                {
#line 624 "call_gen.m"
                  {
#line 624 "call_gen.m"
                    ll_backend__call_gen__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__call_gen__Liveness_2, ll_backend__call_gen__Var_9);
                  }
#line 626 "call_gen.m"
                  if (ll_backend__call_gen__succeeded)
#line 624 "call_gen.m"
                    ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3;
#line 626 "call_gen.m"
                  else
#line 627 "call_gen.m"
                    {
#line 627 "call_gen.m"
                      {
#line 627 "call_gen.m"
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__call_gen__Var_9, ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3, &ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19);
                      }
#line 627 "call_gen.m"
                    }
#line 626 "call_gen.m"
                }
#line 629 "call_gen.m"
              else
#line 631 "call_gen.m"
                ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3;
#line 634 "call_gen.m"
            /* direct tailcall eliminated */
#line 634 "call_gen.m"
            {
#line 634 "call_gen.m"
              MR_Word ll_backend__call_gen__HeadVar__1__tmp_copy_1 = ll_backend__call_gen__Args_12;
#line 634 "call_gen.m"
              MR_Word ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0__tmp_copy_3 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19;

#line 634 "call_gen.m"
              ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0__tmp_copy_3;
#line 634 "call_gen.m"
              ll_backend__call_gen__HeadVar__1_1 = ll_backend__call_gen__HeadVar__1__tmp_copy_1;
#line 634 "call_gen.m"
            }
#line 634 "call_gen.m"
            continue;
#line 621 "call_gen.m"
          }
#line 619 "call_gen.m"
      }
#line 619 "call_gen.m"
      break;
#line 619 "call_gen.m"
    }
#line 616 "call_gen.m"
}

#line 587 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__kill_dead_input_vars_5_p_0(
#line 587 "call_gen.m"
  MR_Word ll_backend__call_gen__ArgsInfos_6,
#line 587 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_7,
#line 587 "call_gen.m"
  MR_Word * ll_backend__call_gen__NonLiveOutputs_8,
#line 587 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_13,
#line 587 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_14)
#line 587 "call_gen.m"
{
#line 591 "call_gen.m"
  {
#line 591 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 591 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeCtorInfo_17_17;
#line 591 "call_gen.m"
    MR_Word ll_backend__call_gen__Liveness_10;
#line 591 "call_gen.m"
    MR_Word ll_backend__call_gen__PostDeaths_11;
#line 591 "call_gen.m"
    MR_Word ll_backend__call_gen__ImmediatePostDeaths_12;
#line 591 "call_gen.m"
    MR_Word ll_backend__call_gen__V_15_15;

#line 592 "call_gen.m"
    {
#line 592 "call_gen.m"
      ll_backend__code_info__get_forward_live_vars_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_13, &ll_backend__call_gen__Liveness_10);
    }
#line 2851 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 593 "call_gen.m"
    {
#line 593 "call_gen.m"
      ll_backend__call_gen__V_15_15 = parse_tree__set_of_var__init_0_f_0(ll_backend__call_gen__TypeCtorInfo_17_17);
    }
#line 593 "call_gen.m"
    {
#line 593 "call_gen.m"
      ll_backend__call_gen__find_nonlive_outputs_4_p_0(ll_backend__call_gen__ArgsInfos_6, ll_backend__call_gen__Liveness_10, ll_backend__call_gen__V_15_15, ll_backend__call_gen__NonLiveOutputs_8);
    }
#line 594 "call_gen.m"
    {
#line 594 "call_gen.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__call_gen__GoalInfo_7, &ll_backend__call_gen__PostDeaths_11);
    }
#line 595 "call_gen.m"
    {
#line 595 "call_gen.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__call_gen__TypeCtorInfo_17_17, ll_backend__call_gen__PostDeaths_11, *ll_backend__call_gen__NonLiveOutputs_8, &ll_backend__call_gen__ImmediatePostDeaths_12);
    }
#line 596 "call_gen.m"
    {
#line 596 "call_gen.m"
      ll_backend__code_info__make_vars_forward_dead_3_p_0(ll_backend__call_gen__ImmediatePostDeaths_12, ll_backend__call_gen__STATE_VARIABLE_CI_0_13, ll_backend__call_gen__STATE_VARIABLE_CI_14);
#line 596 "call_gen.m"
      return;
    }
#line 591 "call_gen.m"
  }
#line 587 "call_gen.m"
}

#line 540 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__call_comment_4_p_0(
#line 540 "call_gen.m"
  MR_Word ll_backend__call_gen__CI_5,
#line 540 "call_gen.m"
  MR_Word ll_backend__call_gen__PredId_6,
#line 540 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_7,
#line 540 "call_gen.m"
  MR_String * ll_backend__call_gen__Msg_8)
#line 540 "call_gen.m"
{
#line 543 "call_gen.m"
  {
#line 543 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 543 "call_gen.m"
    MR_String ll_backend__call_gen__BaseMsg_9;
#line 543 "call_gen.m"
    MR_Word ll_backend__call_gen__AutoComments_10;

#line 547 "call_gen.m"
    if ((ll_backend__call_gen__CodeModel_7 == (MR_Integer) 0))
#line 546 "call_gen.m"
      ll_backend__call_gen__BaseMsg_9 = (MR_String) "branch to det procedure";
#line 547 "call_gen.m"
    else
#line 547 "call_gen.m"
      if ((ll_backend__call_gen__CodeModel_7 == (MR_Integer) 2))
#line 552 "call_gen.m"
        ll_backend__call_gen__BaseMsg_9 = (MR_String) "branch to nondet procedure";
#line 547 "call_gen.m"
      else
#line 549 "call_gen.m"
        ll_backend__call_gen__BaseMsg_9 = (MR_String) "branch to semidet procedure";
#line 554 "call_gen.m"
    {
#line 554 "call_gen.m"
      ll_backend__code_info__get_auto_comments_2_p_0(ll_backend__call_gen__CI_5, &ll_backend__call_gen__AutoComments_10);
    }
#line 561 "call_gen.m"
    if ((ll_backend__call_gen__AutoComments_10 == (MR_Integer) 0))
#line 563 "call_gen.m"
      *ll_backend__call_gen__Msg_8 = ll_backend__call_gen__BaseMsg_9;
#line 561 "call_gen.m"
    else
#line 556 "call_gen.m"
      {
#line 556 "call_gen.m"
        MR_Word ll_backend__call_gen__ModuleInfo_11;
#line 556 "call_gen.m"
        MR_Word ll_backend__call_gen__PredInfo_12;
#line 556 "call_gen.m"
        MR_String ll_backend__call_gen__PredName_13;
#line 556 "call_gen.m"
        MR_String ll_backend__call_gen__V_14_14;

#line 557 "call_gen.m"
        {
#line 557 "call_gen.m"
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__CI_5, &ll_backend__call_gen__ModuleInfo_11);
        }
#line 558 "call_gen.m"
        {
#line 558 "call_gen.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__call_gen__ModuleInfo_11, ll_backend__call_gen__PredId_6, &ll_backend__call_gen__PredInfo_12);
        }
#line 559 "call_gen.m"
        {
#line 559 "call_gen.m"
          ll_backend__call_gen__PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__call_gen__PredInfo_12);
        }
#line 560 "call_gen.m"
        {
#line 560 "call_gen.m"
          ll_backend__call_gen__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__call_gen__PredName_13);
        }
#line 560 "call_gen.m"
        {
#line 560 "call_gen.m"
          *ll_backend__call_gen__Msg_8 = mercury__string__f_43_43_2_f_0(ll_backend__call_gen__BaseMsg_9, ll_backend__call_gen__V_14_14);
        }
#line 556 "call_gen.m"
      }
#line 543 "call_gen.m"
  }
#line 540 "call_gen.m"
}

#line 512 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__handle_call_failure_5_p_0(
#line 512 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_6,
#line 512 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_7,
#line 512 "call_gen.m"
  MR_Word * ll_backend__call_gen__FailHandlingCode_8,
#line 512 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_15,
#line 512 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_16)
#line 512 "call_gen.m"
{
#line 517 "call_gen.m"
  {
#line 517 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 517 "call_gen.m"
    if ((ll_backend__call_gen__CodeModel_6 == (MR_Integer) 1))
#line 517 "call_gen.m"
      {
#line 517 "call_gen.m"
        MR_Word ll_backend__call_gen__Detism_10;

#line 518 "call_gen.m"
        {
#line 518 "call_gen.m"
          ll_backend__call_gen__Detism_10 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__call_gen__GoalInfo_7);
        }
#line 519 "call_gen.m"
        ll_backend__call_gen__succeeded = (ll_backend__call_gen__Detism_10 == (MR_Integer) 7);
#line 521 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 520 "call_gen.m"
          {
#line 520 "call_gen.m"
            ll_backend__code_info__generate_failure_3_p_0(ll_backend__call_gen__FailHandlingCode_8, ll_backend__call_gen__STATE_VARIABLE_CI_0_15, ll_backend__call_gen__STATE_VARIABLE_CI_16);
#line 520 "call_gen.m"
            return;
          }
#line 521 "call_gen.m"
        else
#line 522 "call_gen.m"
          {
#line 522 "call_gen.m"
            MR_Word ll_backend__call_gen__TypeCtorInfo_32_32;
#line 522 "call_gen.m"
            MR_Word ll_backend__call_gen__ContLab_11;
#line 522 "call_gen.m"
            MR_Word ll_backend__call_gen__FailTestCode_12;
#line 522 "call_gen.m"
            MR_Word ll_backend__call_gen__FailCode_13;
#line 522 "call_gen.m"
            MR_Word ll_backend__call_gen__ContLabelCode_14;
#line 522 "call_gen.m"
            MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_18_18;
#line 522 "call_gen.m"
            MR_Word ll_backend__call_gen__V_19_19;
#line 522 "call_gen.m"
            MR_Word ll_backend__call_gen__V_20_20;
#line 522 "call_gen.m"
            MR_Word ll_backend__call_gen__V_25_25;
#line 522 "call_gen.m"
            MR_Word ll_backend__call_gen__V_28_28;
#line 522 "call_gen.m"
            MR_Word ll_backend__call_gen__V_29_29;
#line 522 "call_gen.m"
            MR_Word ll_backend__call_gen__V_31_31;

#line 522 "call_gen.m"
            {
#line 522 "call_gen.m"
              ll_backend__code_info__get_next_label_3_p_0(&ll_backend__call_gen__ContLab_11, ll_backend__call_gen__STATE_VARIABLE_CI_0_15, &ll_backend__call_gen__STATE_VARIABLE_CI_18_18);
            }
#line 3052 "ll_backend.call_gen.c"
            ll_backend__call_gen__TypeCtorInfo_32_32 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 524 "call_gen.m"
            {
#line 524 "call_gen.m"
              ll_backend__call_gen__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 524 "call_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_25_25, 0) = ((MR_Box) (ll_backend__call_gen__ContLab_11));
#line 524 "call_gen.m"
            }
#line 524 "call_gen.m"
            {
#line 524 "call_gen.m"
              ll_backend__call_gen__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 524 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 524 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_20_20, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_4[0]));
#line 524 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_20_20, 2) = ((MR_Box) (ll_backend__call_gen__V_25_25));
#line 524 "call_gen.m"
            }
#line 523 "call_gen.m"
            {
#line 523 "call_gen.m"
              ll_backend__call_gen__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 523 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_19_19, 0) = ((MR_Box) (ll_backend__call_gen__V_20_20));
#line 523 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_19_19, 1) = ((MR_Box) ((MR_String) "test for success"));
#line 523 "call_gen.m"
            }
#line 523 "call_gen.m"
            {
#line 523 "call_gen.m"
              ll_backend__call_gen__FailTestCode_12 = mercury__cord__singleton_1_f_0(ll_backend__call_gen__TypeCtorInfo_32_32, ((MR_Box) (ll_backend__call_gen__V_19_19)));
            }
#line 527 "call_gen.m"
            {
#line 527 "call_gen.m"
              ll_backend__code_info__generate_failure_3_p_0(&ll_backend__call_gen__FailCode_13, ll_backend__call_gen__STATE_VARIABLE_CI_18_18, ll_backend__call_gen__STATE_VARIABLE_CI_16);
            }
#line 529 "call_gen.m"
            {
#line 529 "call_gen.m"
              ll_backend__call_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 529 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_29_29, 1) = ((MR_Box) (ll_backend__call_gen__ContLab_11));
#line 529 "call_gen.m"
            }
#line 528 "call_gen.m"
            {
#line 528 "call_gen.m"
              ll_backend__call_gen__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 528 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_28_28, 0) = ((MR_Box) (ll_backend__call_gen__V_29_29));
#line 528 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_28_28, 1) = ((MR_Box) ((MR_String) ""));
#line 528 "call_gen.m"
            }
#line 528 "call_gen.m"
            {
#line 528 "call_gen.m"
              ll_backend__call_gen__ContLabelCode_14 = mercury__cord__singleton_1_f_0(ll_backend__call_gen__TypeCtorInfo_32_32, ((MR_Box) (ll_backend__call_gen__V_28_28)));
            }
#line 531 "call_gen.m"
            {
#line 531 "call_gen.m"
              ll_backend__call_gen__V_31_31 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_32_32, ll_backend__call_gen__FailCode_13, ll_backend__call_gen__ContLabelCode_14);
            }
#line 531 "call_gen.m"
            {
#line 531 "call_gen.m"
              *ll_backend__call_gen__FailHandlingCode_8 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_32_32, ll_backend__call_gen__FailTestCode_12, ll_backend__call_gen__V_31_31);
            }
#line 522 "call_gen.m"
          }
#line 517 "call_gen.m"
      }
#line 517 "call_gen.m"
    else
#line 536 "call_gen.m"
      {
#line 537 "call_gen.m"
        {
#line 537 "call_gen.m"
          *ll_backend__call_gen__FailHandlingCode_8 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 537 "call_gen.m"
        *ll_backend__call_gen__STATE_VARIABLE_CI_16 = ll_backend__call_gen__STATE_VARIABLE_CI_0_15;
#line 536 "call_gen.m"
      }
#line 517 "call_gen.m"
  }
#line 512 "call_gen.m"
}

#line 486 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__prepare_for_call_6_p_0(
#line 486 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_7,
#line 486 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_8,
#line 486 "call_gen.m"
  MR_Word * ll_backend__call_gen__CallModel_9,
#line 486 "call_gen.m"
  MR_Word * ll_backend__call_gen__TraceCode_10,
#line 486 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_14,
#line 486 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_15)
#line 486 "call_gen.m"
{
#line 489 "call_gen.m"
  {
#line 489 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 489 "call_gen.m"
    MR_Word ll_backend__call_gen__AllowLCO_12;
#line 489 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_16_16;

#line 490 "call_gen.m"
    {
#line 490 "call_gen.m"
      ll_backend__code_info__succip_is_used_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_14, &ll_backend__call_gen__STATE_VARIABLE_CI_16_16);
    }
#line 492 "call_gen.m"
    {
#line 492 "call_gen.m"
      ll_backend__call_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__call_gen__GoalInfo_8, (MR_Integer) 22);
    }
#line 495 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 494 "call_gen.m"
      ll_backend__call_gen__AllowLCO_12 = (MR_Integer) 0;
#line 495 "call_gen.m"
    else
#line 496 "call_gen.m"
      ll_backend__call_gen__AllowLCO_12 = (MR_Integer) 1;
#line 501 "call_gen.m"
    if ((ll_backend__call_gen__CodeModel_7 == (MR_Integer) 0))
#line 499 "call_gen.m"
      {
#line 500 "call_gen.m"
        {
#line 500 "call_gen.m"
          MR_Word base;
#line 500 "call_gen.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 500 "call_gen.m"
          *ll_backend__call_gen__CallModel_9 = base;
#line 500 "call_gen.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__call_gen__AllowLCO_12));
#line 500 "call_gen.m"
        }
#line 500 "call_gen.m"
        *ll_backend__call_gen__STATE_VARIABLE_CI_15 = ll_backend__call_gen__STATE_VARIABLE_CI_16_16;
#line 499 "call_gen.m"
      }
#line 501 "call_gen.m"
    else
#line 501 "call_gen.m"
      if ((ll_backend__call_gen__CodeModel_7 == (MR_Integer) 2))
#line 505 "call_gen.m"
        {
#line 505 "call_gen.m"
          MR_Word ll_backend__call_gen__TailCallStatus_13;

#line 506 "call_gen.m"
          {
#line 506 "call_gen.m"
            ll_backend__code_info__may_use_nondet_tailcall_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_16_16, &ll_backend__call_gen__TailCallStatus_13);
          }
#line 507 "call_gen.m"
          {
#line 507 "call_gen.m"
            MR_Word base;
#line 507 "call_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 507 "call_gen.m"
            *ll_backend__call_gen__CallModel_9 = base;
#line 507 "call_gen.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__call_gen__TailCallStatus_13));
#line 507 "call_gen.m"
          }
#line 508 "call_gen.m"
          {
#line 508 "call_gen.m"
            ll_backend__code_info__set_resume_point_and_frame_to_unknown_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_16_16, ll_backend__call_gen__STATE_VARIABLE_CI_15);
          }
#line 505 "call_gen.m"
        }
#line 501 "call_gen.m"
      else
#line 502 "call_gen.m"
        {
#line 503 "call_gen.m"
          {
#line 503 "call_gen.m"
            MR_Word base;
#line 503 "call_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 503 "call_gen.m"
            *ll_backend__call_gen__CallModel_9 = base;
#line 503 "call_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__AllowLCO_12));
#line 503 "call_gen.m"
          }
#line 503 "call_gen.m"
          *ll_backend__call_gen__STATE_VARIABLE_CI_15 = ll_backend__call_gen__STATE_VARIABLE_CI_16_16;
#line 502 "call_gen.m"
        }
#line 510 "call_gen.m"
    {
#line 510 "call_gen.m"
      ll_backend__trace_gen__trace_prepare_for_call_2_p_0(*ll_backend__call_gen__STATE_VARIABLE_CI_15, ll_backend__call_gen__TraceCode_10);
#line 510 "call_gen.m"
      return;
    }
#line 489 "call_gen.m"
  }
#line 486 "call_gen.m"
}

#line 350 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__extra_livevals_from_3_p_0(
#line 350 "call_gen.m"
  MR_Integer ll_backend__call_gen__Reg_4,
#line 350 "call_gen.m"
  MR_Integer ll_backend__call_gen__FirstInput_5,
#line 350 "call_gen.m"
  MR_Word * ll_backend__call_gen__ExtraLiveVals_6)
#line 350 "call_gen.m"
{
#line 357 "call_gen.m"
  {
#line 357 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded = (ll_backend__call_gen__Reg_4 < ll_backend__call_gen__FirstInput_5);

#line 357 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 354 "call_gen.m"
      {
#line 354 "call_gen.m"
        MR_Word ll_backend__call_gen__ExtraLiveVals1_7;
#line 354 "call_gen.m"
        MR_Integer ll_backend__call_gen__NextReg_8;
#line 354 "call_gen.m"
        MR_Word ll_backend__call_gen__V_9_9;

#line 354 "call_gen.m"
        {
#line 354 "call_gen.m"
          ll_backend__call_gen__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_9_9, 0) = ((MR_Box) ((MR_Integer) 0));
#line 354 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_9_9, 1) = ((MR_Box) (ll_backend__call_gen__Reg_4));
#line 354 "call_gen.m"
        }
#line 355 "call_gen.m"
        ll_backend__call_gen__NextReg_8 = (ll_backend__call_gen__Reg_4 + (MR_Integer) 1);
#line 356 "call_gen.m"
        {
#line 356 "call_gen.m"
          ll_backend__call_gen__extra_livevals_from_3_p_0(ll_backend__call_gen__NextReg_8, ll_backend__call_gen__FirstInput_5, &ll_backend__call_gen__ExtraLiveVals1_7);
        }
#line 354 "call_gen.m"
        {
#line 354 "call_gen.m"
          MR_Word base;
#line 354 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "call_gen.m"
          *ll_backend__call_gen__ExtraLiveVals_6 = base;
#line 354 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_9_9));
#line 354 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__ExtraLiveVals1_7));
#line 354 "call_gen.m"
        }
#line 354 "call_gen.m"
      }
#line 357 "call_gen.m"
    else
#line 358 "call_gen.m"
      *ll_backend__call_gen__ExtraLiveVals_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 357 "call_gen.m"
  }
#line 350 "call_gen.m"
}

#line 345 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__extra_livevals_2_p_0(
#line 345 "call_gen.m"
  MR_Integer ll_backend__call_gen__FirstInput_3,
#line 345 "call_gen.m"
  MR_Word * ll_backend__call_gen__ExtraLiveVals_4)
#line 345 "call_gen.m"
{
#line 347 "call_gen.m"
  {
#line 347 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 348 "call_gen.m"
    {
#line 348 "call_gen.m"
      ll_backend__call_gen__extra_livevals_from_3_p_0((MR_Integer) 1, ll_backend__call_gen__FirstInput_3, ll_backend__call_gen__ExtraLiveVals_4);
#line 348 "call_gen.m"
      return;
    }
#line 347 "call_gen.m"
  }
#line 345 "call_gen.m"
}

#line 309 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_event_attributes_6_p_0(
#line 309 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 309 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_Vars_0_2,
#line 309 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__3_3,
#line 309 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__4_4,
#line 309 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_5,
#line 309 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_6)
#line 309 "call_gen.m"
{
#line 313 "call_gen.m"
  {
#line 313 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 313 "call_gen.m"
    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 313 "call_gen.m"
      {
#line 313 "call_gen.m"
        *ll_backend__call_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 313 "call_gen.m"
        *ll_backend__call_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 317 "call_gen.m"
        if ((ll_backend__call_gen__STATE_VARIABLE_Vars_0_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 318 "call_gen.m"
          {
#line 318 "call_gen.m"
          }
#line 317 "call_gen.m"
        else
#line 315 "call_gen.m"
          {
#line 316 "call_gen.m"
            {
#line 316 "call_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_event_attributes\'/6", (MR_String) "var");
#line 316 "call_gen.m"
              return;
            }
#line 315 "call_gen.m"
          }
#line 313 "call_gen.m"
        *ll_backend__call_gen__STATE_VARIABLE_CI_6 = ll_backend__call_gen__STATE_VARIABLE_CI_0_5;
#line 313 "call_gen.m"
      }
#line 313 "call_gen.m"
    else
#line 321 "call_gen.m"
      {
#line 321 "call_gen.m"
        MR_Word ll_backend__call_gen__Attribute_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 321 "call_gen.m"
        MR_Word ll_backend__call_gen__Attributes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 321 "call_gen.m"
        MR_Word ll_backend__call_gen__MaybeUserAttr_20;
#line 321 "call_gen.m"
        MR_Word ll_backend__call_gen__MaybeUserAttrs_21;
#line 321 "call_gen.m"
        MR_Word ll_backend__call_gen__Code_22;
#line 321 "call_gen.m"
        MR_Word ll_backend__call_gen__Codes_23;
#line 321 "call_gen.m"
        MR_Word ll_backend__call_gen__SynthCall_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_17, (MR_Integer) 4)));
#line 321 "call_gen.m"
        MR_Word ll_backend__call_gen__STATE_VARIABLE_Vars_36_36;
#line 321 "call_gen.m"
        MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_37_37;
#line 322 "call_gen.m"
        MR_Integer ll_backend__call_gen__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_17, (MR_Integer) 0)));
#line 322 "call_gen.m"
        MR_String ll_backend__call_gen__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_17, (MR_Integer) 1)));
#line 322 "call_gen.m"
        MR_Word ll_backend__call_gen__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_17, (MR_Integer) 2)));
#line 322 "call_gen.m"
        MR_Word ll_backend__call_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_17, (MR_Integer) 3)));

#line 334 "call_gen.m"
        if ((ll_backend__call_gen__SynthCall_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 330 "call_gen.m"
          if ((ll_backend__call_gen__STATE_VARIABLE_Vars_0_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "call_gen.m"
            {
#line 332 "call_gen.m"
              {
#line 332 "call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_event_attributes\'/6", (MR_String) "no var");
#line 332 "call_gen.m"
                return;
              }
#line 331 "call_gen.m"
            }
#line 330 "call_gen.m"
          else
#line 326 "call_gen.m"
            {
#line 326 "call_gen.m"
              MR_Word ll_backend__call_gen__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__STATE_VARIABLE_Vars_0_2, (MR_Integer) 0)));
#line 326 "call_gen.m"
              MR_Word ll_backend__call_gen__Rval_27;
#line 326 "call_gen.m"
              MR_Word ll_backend__call_gen__UserAttr_28;

#line 326 "call_gen.m"
              ll_backend__call_gen__STATE_VARIABLE_Vars_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__STATE_VARIABLE_Vars_0_2, (MR_Integer) 1)));
#line 327 "call_gen.m"
              {
#line 327 "call_gen.m"
                ll_backend__code_info__produce_variable_5_p_0(ll_backend__call_gen__Var_26, &ll_backend__call_gen__Code_22, &ll_backend__call_gen__Rval_27, ll_backend__call_gen__STATE_VARIABLE_CI_0_5, &ll_backend__call_gen__STATE_VARIABLE_CI_37_37);
              }
#line 328 "call_gen.m"
              {
#line 328 "call_gen.m"
                ll_backend__call_gen__UserAttr_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 328 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__UserAttr_28, 0) = ((MR_Box) (ll_backend__call_gen__Rval_27));
#line 328 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__UserAttr_28, 1) = ((MR_Box) (ll_backend__call_gen__Var_26));
#line 328 "call_gen.m"
              }
#line 329 "call_gen.m"
              {
#line 329 "call_gen.m"
                ll_backend__call_gen__MaybeUserAttr_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 329 "call_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeUserAttr_20, 0) = ((MR_Box) (ll_backend__call_gen__UserAttr_28));
#line 329 "call_gen.m"
              }
#line 326 "call_gen.m"
            }
#line 334 "call_gen.m"
        else
#line 335 "call_gen.m"
          {
#line 336 "call_gen.m"
            ll_backend__call_gen__MaybeUserAttr_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 337 "call_gen.m"
            {
#line 337 "call_gen.m"
              ll_backend__call_gen__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 337 "call_gen.m"
            ll_backend__call_gen__STATE_VARIABLE_Vars_36_36 = ll_backend__call_gen__STATE_VARIABLE_Vars_0_2;
#line 337 "call_gen.m"
            ll_backend__call_gen__STATE_VARIABLE_CI_37_37 = ll_backend__call_gen__STATE_VARIABLE_CI_0_5;
#line 335 "call_gen.m"
          }
#line 339 "call_gen.m"
        {
#line 339 "call_gen.m"
          ll_backend__call_gen__generate_event_attributes_6_p_0(ll_backend__call_gen__Attributes_18, ll_backend__call_gen__STATE_VARIABLE_Vars_36_36, &ll_backend__call_gen__MaybeUserAttrs_21, &ll_backend__call_gen__Codes_23, ll_backend__call_gen__STATE_VARIABLE_CI_37_37, ll_backend__call_gen__STATE_VARIABLE_CI_6);
        }
#line 321 "call_gen.m"
        {
#line 321 "call_gen.m"
          MR_Word base;
#line 321 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "call_gen.m"
          *ll_backend__call_gen__HeadVar__3_3 = base;
#line 321 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__MaybeUserAttr_20));
#line 321 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__MaybeUserAttrs_21));
#line 321 "call_gen.m"
        }
#line 321 "call_gen.m"
        {
#line 321 "call_gen.m"
          MR_Word base;
#line 321 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "call_gen.m"
          *ll_backend__call_gen__HeadVar__4_4 = base;
#line 321 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__Code_22));
#line 321 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__Codes_23));
#line 321 "call_gen.m"
        }
#line 321 "call_gen.m"
      }
#line 313 "call_gen.m"
  }
#line 309 "call_gen.m"
}

#line 60 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__output_arg_locs_2_p_0(
#line 60 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 60 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__2_2)
#line 60 "call_gen.m"
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
          ll_backend__call_gen__output_arg_locs_2_p_0(ll_backend__call_gen__Args_6, &ll_backend__call_gen__Vs0_8);
        }
#line 799 "call_gen.m"
        if ((ll_backend__call_gen__Mode_5 == (MR_Integer) 1))
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
        else
#line 803 "call_gen.m"
          *ll_backend__call_gen__HeadVar__2_2 = ll_backend__call_gen__Vs0_8;
#line 794 "call_gen.m"
      }
#line 793 "call_gen.m"
  }
#line 60 "call_gen.m"
}

#line 57 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__input_arg_locs_2_p_0(
#line 57 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 57 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__2_2)
#line 57 "call_gen.m"
{
#line 780 "call_gen.m"
  {
#line 780 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 780 "call_gen.m"
    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 780 "call_gen.m"
      *ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 780 "call_gen.m"
    else
#line 781 "call_gen.m"
      {
#line 781 "call_gen.m"
        MR_Word ll_backend__call_gen__Var_3;
#line 781 "call_gen.m"
        MR_Word ll_backend__call_gen__Loc_4;
#line 781 "call_gen.m"
        MR_Word ll_backend__call_gen__Mode_5;
#line 781 "call_gen.m"
        MR_Word ll_backend__call_gen__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 781 "call_gen.m"
        MR_Word ll_backend__call_gen__Vs0_8;
#line 781 "call_gen.m"
        MR_Word ll_backend__call_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 781 "call_gen.m"
        MR_Word ll_backend__call_gen__V_10_10;

#line 781 "call_gen.m"
        ll_backend__call_gen__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_9_9, (MR_Integer) 0)));
#line 781 "call_gen.m"
        ll_backend__call_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_9_9, (MR_Integer) 1)));
#line 781 "call_gen.m"
        ll_backend__call_gen__Loc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_10_10, (MR_Integer) 0)));
#line 781 "call_gen.m"
        ll_backend__call_gen__Mode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_10_10, (MR_Integer) 1)));
#line 782 "call_gen.m"
        {
#line 782 "call_gen.m"
          ll_backend__call_gen__input_arg_locs_2_p_0(ll_backend__call_gen__Args_6, &ll_backend__call_gen__Vs0_8);
        }
#line 786 "call_gen.m"
        if ((ll_backend__call_gen__Mode_5 == (MR_Integer) 0))
#line 784 "call_gen.m"
          {
#line 784 "call_gen.m"
            MR_Word ll_backend__call_gen__V_11_11;

#line 785 "call_gen.m"
            {
#line 785 "call_gen.m"
              ll_backend__call_gen__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 785 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_11_11, 0) = ((MR_Box) (ll_backend__call_gen__Var_3));
#line 785 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_11_11, 1) = ((MR_Box) (ll_backend__call_gen__Loc_4));
#line 785 "call_gen.m"
            }
#line 785 "call_gen.m"
            {
#line 785 "call_gen.m"
              MR_Word base;
#line 785 "call_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "call_gen.m"
              *ll_backend__call_gen__HeadVar__2_2 = base;
#line 785 "call_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_11_11));
#line 785 "call_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__Vs0_8));
#line 785 "call_gen.m"
            }
#line 784 "call_gen.m"
          }
#line 786 "call_gen.m"
        else
#line 790 "call_gen.m"
          *ll_backend__call_gen__HeadVar__2_2 = ll_backend__call_gen__Vs0_8;
#line 781 "call_gen.m"
      }
#line 780 "call_gen.m"
  }
#line 57 "call_gen.m"
}

#line 53 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__generic_call_info_8_p_0(
#line 53 "call_gen.m"
  MR_Word ll_backend__call_gen__Globals_9,
#line 53 "call_gen.m"
  MR_Word ll_backend__call_gen__GenericCall_10,
#line 53 "call_gen.m"
  MR_Integer ll_backend__call_gen__NumInputArgsR_11,
#line 53 "call_gen.m"
  MR_Integer ll_backend__call_gen__NumInputArgsF_12,
#line 53 "call_gen.m"
  MR_Word * ll_backend__call_gen__CodeAddr_13,
#line 53 "call_gen.m"
  MR_Word * ll_backend__call_gen__SpecifierArgInfos_14,
#line 53 "call_gen.m"
  MR_Integer * ll_backend__call_gen__FirstImmediateInputReg_15,
#line 53 "call_gen.m"
  MR_Word * ll_backend__call_gen__HoCallVariant_16)
#line 53 "call_gen.m"
{
#line 364 "call_gen.m"
  {
#line 364 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 364 "call_gen.m"
    if (((MR_tag((MR_Word) ll_backend__call_gen__GenericCall_10)) == (MR_mktag((MR_Integer) 1))))
#line 383 "call_gen.m"
      {
#line 383 "call_gen.m"
        MR_Word ll_backend__call_gen__TCVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__GenericCall_10, (MR_Integer) 0)));
#line 383 "call_gen.m"
        MR_Word ll_backend__call_gen__V_31_31;
#line 383 "call_gen.m"
        MR_Integer ll_backend__call_gen__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__GenericCall_10, (MR_Integer) 1)));
#line 383 "call_gen.m"
        MR_Word ll_backend__call_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__GenericCall_10, (MR_Integer) 2)));
#line 383 "call_gen.m"
        MR_Word ll_backend__call_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__GenericCall_10, (MR_Integer) 3)));

#line 385 "call_gen.m"
        {
#line 385 "call_gen.m"
          ll_backend__call_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 385 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_31_31, 0) = ((MR_Box) (ll_backend__call_gen__TCVar_23));
#line 385 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_31_31, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_1[7]));
#line 385 "call_gen.m"
        }
#line 385 "call_gen.m"
        {
#line 385 "call_gen.m"
          MR_Word base;
#line 385 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "call_gen.m"
          *ll_backend__call_gen__SpecifierArgInfos_14 = base;
#line 385 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_31_31));
#line 385 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "call_gen.m"
        }
#line 387 "call_gen.m"
        ll_backend__call_gen__succeeded = (ll_backend__call_gen__NumInputArgsF_12 == (MR_Integer) 0);
#line 403 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 389 "call_gen.m"
          {
#line 389 "call_gen.m"
            MR_Integer ll_backend__call_gen__MaxSpec_52;

#line 388 "call_gen.m"
            {
#line 388 "call_gen.m"
              libs__globals__lookup_int_option_3_p_0(ll_backend__call_gen__Globals_9, (MR_Integer) 314, &ll_backend__call_gen__MaxSpec_52);
            }
#line 391 "call_gen.m"
            ll_backend__call_gen__succeeded = (ll_backend__call_gen__MaxSpec_52 >= (MR_Integer) 0);
#line 391 "call_gen.m"
            if (ll_backend__call_gen__succeeded)
#line 392 "call_gen.m"
              ll_backend__call_gen__succeeded = (ll_backend__call_gen__NumInputArgsR_11 <= ll_backend__call_gen__MaxSpec_52);
#line 398 "call_gen.m"
            if (ll_backend__call_gen__succeeded)
#line 395 "call_gen.m"
              {
#line 395 "call_gen.m"
                MR_Word ll_backend__call_gen__V_37_37;

#line 394 "call_gen.m"
                {
#line 394 "call_gen.m"
                  ll_backend__call_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 394 "call_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_37_37, 0) = ((MR_Box) (ll_backend__call_gen__NumInputArgsR_11));
#line 394 "call_gen.m"
                }
#line 394 "call_gen.m"
                {
#line 394 "call_gen.m"
                  MR_Word base;
#line 394 "call_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "call_gen.m"
                  *ll_backend__call_gen__CodeAddr_13 = base;
#line 394 "call_gen.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 394 "call_gen.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__call_gen__V_37_37));
#line 394 "call_gen.m"
                }
#line 396 "call_gen.m"
                *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 0;
#line 397 "call_gen.m"
                *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 3;
#line 395 "call_gen.m"
              }
#line 398 "call_gen.m"
            else
#line 399 "call_gen.m"
              {
#line 399 "call_gen.m"
                *ll_backend__call_gen__CodeAddr_13 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__call_gen_scalar_common_1[8]);
#line 400 "call_gen.m"
                *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 1;
#line 401 "call_gen.m"
                *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 4;
#line 399 "call_gen.m"
              }
#line 389 "call_gen.m"
          }
#line 403 "call_gen.m"
        else
#line 404 "call_gen.m"
          {
#line 404 "call_gen.m"
            {
#line 404 "call_gen.m"
              mercury__require__sorry_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generic_call_info\'/8", (MR_String) "float reg inputs");
#line 404 "call_gen.m"
              return;
            }
#line 404 "call_gen.m"
          }
#line 383 "call_gen.m"
      }
#line 364 "call_gen.m"
    else
#line 364 "call_gen.m"
      if (((MR_tag((MR_Word) ll_backend__call_gen__GenericCall_10)) == (MR_mktag((MR_Integer) 0))))
#line 364 "call_gen.m"
        {
#line 364 "call_gen.m"
          MR_Word ll_backend__call_gen__PredVar_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__GenericCall_10, (MR_Integer) 0)));
#line 364 "call_gen.m"
          MR_Integer ll_backend__call_gen__MaxSpec_22;
#line 364 "call_gen.m"
          MR_Word ll_backend__call_gen__V_44_44;
#line 364 "call_gen.m"
          MR_Word ll_backend__call_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__GenericCall_10, (MR_Integer) 1)));
#line 364 "call_gen.m"
          MR_Word ll_backend__call_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__GenericCall_10, (MR_Integer) 2)));
#line 364 "call_gen.m"
          MR_Integer ll_backend__call_gen__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__GenericCall_10, (MR_Integer) 3)));

#line 366 "call_gen.m"
          {
#line 366 "call_gen.m"
            ll_backend__call_gen__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 366 "call_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_44_44, 0) = ((MR_Box) (ll_backend__call_gen__PredVar_17));
#line 366 "call_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_44_44, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_1[7]));
#line 366 "call_gen.m"
          }
#line 366 "call_gen.m"
          {
#line 366 "call_gen.m"
            MR_Word base;
#line 366 "call_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "call_gen.m"
            *ll_backend__call_gen__SpecifierArgInfos_14 = base;
#line 366 "call_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_44_44));
#line 366 "call_gen.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 366 "call_gen.m"
          }
#line 367 "call_gen.m"
          {
#line 367 "call_gen.m"
            libs__globals__lookup_int_option_3_p_0(ll_backend__call_gen__Globals_9, (MR_Integer) 313, &ll_backend__call_gen__MaxSpec_22);
          }
#line 370 "call_gen.m"
          ll_backend__call_gen__succeeded = (ll_backend__call_gen__MaxSpec_22 >= (MR_Integer) 0);
#line 370 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 370 "call_gen.m"
            {
#line 371 "call_gen.m"
              ll_backend__call_gen__succeeded = (ll_backend__call_gen__NumInputArgsR_11 <= ll_backend__call_gen__MaxSpec_22);
#line 370 "call_gen.m"
              if (ll_backend__call_gen__succeeded)
#line 372 "call_gen.m"
                ll_backend__call_gen__succeeded = (ll_backend__call_gen__NumInputArgsF_12 == (MR_Integer) 0);
#line 370 "call_gen.m"
            }
#line 377 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 374 "call_gen.m"
            {
#line 374 "call_gen.m"
              MR_Word ll_backend__call_gen__V_50_50;

#line 374 "call_gen.m"
              {
#line 374 "call_gen.m"
                ll_backend__call_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 374 "call_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_50_50, 0) = ((MR_Box) (ll_backend__call_gen__NumInputArgsR_11));
#line 374 "call_gen.m"
              }
#line 374 "call_gen.m"
              {
#line 374 "call_gen.m"
                MR_Word base;
#line 374 "call_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 374 "call_gen.m"
                *ll_backend__call_gen__CodeAddr_13 = base;
#line 374 "call_gen.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 374 "call_gen.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__call_gen__V_50_50));
#line 374 "call_gen.m"
              }
#line 375 "call_gen.m"
              *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 0;
#line 376 "call_gen.m"
              *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 2;
#line 374 "call_gen.m"
            }
#line 377 "call_gen.m"
          else
#line 378 "call_gen.m"
            {
#line 378 "call_gen.m"
              *ll_backend__call_gen__CodeAddr_13 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__call_gen_scalar_common_1[9]);
#line 379 "call_gen.m"
              *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 1;
#line 380 "call_gen.m"
              *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 3;
#line 378 "call_gen.m"
            }
#line 364 "call_gen.m"
        }
#line 364 "call_gen.m"
      else
#line 410 "call_gen.m"
        {
#line 411 "call_gen.m"
          *ll_backend__call_gen__CodeAddr_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 412 "call_gen.m"
          *ll_backend__call_gen__SpecifierArgInfos_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 413 "call_gen.m"
          *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 1;
#line 414 "call_gen.m"
          *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 1;
#line 410 "call_gen.m"
        }
#line 364 "call_gen.m"
  }
#line 53 "call_gen.m"
}

#line 689 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_builtin_7_p_0_1(
#line 689 "call_gen.m"
  MR_Box ll_backend__call_gen__closure_arg,
#line 689 "call_gen.m"
  MR_Box ll_backend__call_gen__wrapper_arg_1,
#line 689 "call_gen.m"
  MR_Box ll_backend__call_gen__wrapper_arg_2,
#line 689 "call_gen.m"
  MR_Box * ll_backend__call_gen__wrapper_arg_3)
#line 689 "call_gen.m"
{
#line 689 "call_gen.m"
  {
#line 689 "call_gen.m"
    MR_Box ll_backend__call_gen__closure = ll_backend__call_gen__closure_arg;
#line 689 "call_gen.m"
    MR_Word ll_backend__call_gen__conv0_HeadVar__3_3;

#line 689 "call_gen.m"
    {
#line 689 "call_gen.m"
      ll_backend__code_info__magically_put_var_in_unused_reg_3_p_0(((MR_Word) ll_backend__call_gen__wrapper_arg_1), ((MR_Word) ll_backend__call_gen__wrapper_arg_2), &ll_backend__call_gen__conv0_HeadVar__3_3);
    }
#line 689 "call_gen.m"
    *ll_backend__call_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__call_gen__conv0_HeadVar__3_3));
#line 689 "call_gen.m"
  }
#line 689 "call_gen.m"
}

#line 42 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__generate_builtin_7_p_0(
#line 42 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_8,
#line 42 "call_gen.m"
  MR_Word ll_backend__call_gen__PredId_9,
#line 42 "call_gen.m"
  MR_Integer ll_backend__call_gen__ProcId_10,
#line 42 "call_gen.m"
  MR_Word ll_backend__call_gen__Args_11,
#line 42 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_12,
#line 42 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_42,
#line 42 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_43)
#line 42 "call_gen.m"
{
#line 657 "call_gen.m"
  {
#line 657 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 657 "call_gen.m"
    MR_Word ll_backend__call_gen__ModuleInfo_14;
#line 657 "call_gen.m"
    MR_Word ll_backend__call_gen__ModuleName_15;
#line 657 "call_gen.m"
    MR_String ll_backend__call_gen__PredName_16;
#line 657 "call_gen.m"
    MR_Word ll_backend__call_gen__SimpleCode_18;
#line 666 "call_gen.m"
    MR_Word ll_backend__call_gen__SimpleCode0_17;

#line 658 "call_gen.m"
    {
#line 658 "call_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_42, &ll_backend__call_gen__ModuleInfo_14);
    }
#line 659 "call_gen.m"
    {
#line 659 "call_gen.m"
      ll_backend__call_gen__ModuleName_15 = hlds__hlds_module__predicate_module_2_f_0(ll_backend__call_gen__ModuleInfo_14, ll_backend__call_gen__PredId_9);
    }
#line 660 "call_gen.m"
    {
#line 660 "call_gen.m"
      ll_backend__call_gen__PredName_16 = hlds__hlds_module__predicate_name_2_f_0(ll_backend__call_gen__ModuleInfo_14, ll_backend__call_gen__PredId_9);
    }
#line 662 "call_gen.m"
    {
#line 662 "call_gen.m"
      ll_backend__call_gen__succeeded = backend_libs__builtin_ops__translate_builtin_5_p_0((MR_Word) &ll_backend__call_gen_scalar_common_1[0], ll_backend__call_gen__ModuleName_15, ll_backend__call_gen__PredName_16, ll_backend__call_gen__ProcId_10, ll_backend__call_gen__Args_11, &ll_backend__call_gen__SimpleCode0_17);
    }
#line 666 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 665 "call_gen.m"
      ll_backend__call_gen__SimpleCode_18 = ll_backend__call_gen__SimpleCode0_17;
#line 666 "call_gen.m"
    else
#line 667 "call_gen.m"
      {
#line 667 "call_gen.m"
        MR_Integer ll_backend__call_gen__Arity_19;
#line 667 "call_gen.m"
        MR_String ll_backend__call_gen__Msg_20;
#line 667 "call_gen.m"
        MR_String ll_backend__call_gen__V_88_88;
#line 667 "call_gen.m"
        MR_String ll_backend__call_gen__V_90_90;
#line 667 "call_gen.m"
        MR_String ll_backend__call_gen__V_91_91;

#line 667 "call_gen.m"
        {
#line 667 "call_gen.m"
          mercury__list__length_2_p_0((MR_Word) &ll_backend__call_gen_scalar_common_1[0], ll_backend__call_gen__Args_11, &ll_backend__call_gen__Arity_19);
        }
#line 4146 "ll_backend.call_gen.c"
        {
#line 4148 "ll_backend.call_gen.c"
          ll_backend__call_gen__V_88_88 = mercury__string__int_to_string_1_f_0(ll_backend__call_gen__Arity_19);
        }
#line 4151 "ll_backend.call_gen.c"
        {
#line 4153 "ll_backend.call_gen.c"
          ll_backend__call_gen__V_90_90 = mercury__string__f_43_43_2_f_0((MR_String) "/", ll_backend__call_gen__V_88_88);
        }
#line 4156 "ll_backend.call_gen.c"
        {
#line 4158 "ll_backend.call_gen.c"
          ll_backend__call_gen__V_91_91 = mercury__string__f_43_43_2_f_0(ll_backend__call_gen__PredName_16, ll_backend__call_gen__V_90_90);
        }
#line 4161 "ll_backend.call_gen.c"
        {
#line 4163 "ll_backend.call_gen.c"
          ll_backend__call_gen__Msg_20 = mercury__string__f_43_43_2_f_0((MR_String) "unknown builtin predicate: ", ll_backend__call_gen__V_91_91);
        }
#line 670 "call_gen.m"
        {
#line 670 "call_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/7", ll_backend__call_gen__Msg_20);
#line 670 "call_gen.m"
          return;
        }
#line 667 "call_gen.m"
      }
#line 692 "call_gen.m"
    if ((ll_backend__call_gen__CodeModel_8 == (MR_Integer) 0))
#line 677 "call_gen.m"
      if (((MR_tag((MR_Word) ll_backend__call_gen__SimpleCode_18)) == (MR_mktag((MR_Integer) 0))))
#line 675 "call_gen.m"
        {
#line 675 "call_gen.m"
          MR_Word ll_backend__call_gen__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__SimpleCode_18, (MR_Integer) 0)));
#line 675 "call_gen.m"
          MR_Word ll_backend__call_gen__AssignExpr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__SimpleCode_18, (MR_Integer) 1)));

#line 676 "call_gen.m"
          {
#line 676 "call_gen.m"
            ll_backend__call_gen__generate_assign_builtin_5_p_0(ll_backend__call_gen__Var_21, ll_backend__call_gen__AssignExpr_22, ll_backend__call_gen__Code_12, ll_backend__call_gen__STATE_VARIABLE_CI_0_42, ll_backend__call_gen__STATE_VARIABLE_CI_43);
#line 676 "call_gen.m"
            return;
          }
#line 675 "call_gen.m"
        }
#line 677 "call_gen.m"
      else
#line 677 "call_gen.m"
        if (((MR_tag((MR_Word) ll_backend__call_gen__SimpleCode_18)) == (MR_mktag((MR_Integer) 3))))
#line 688 "call_gen.m"
          {
#line 688 "call_gen.m"
            MR_Word ll_backend__call_gen__DefinedVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__SimpleCode_18, (MR_Integer) 0)));
#line 689 "call_gen.m"
            MR_Box ll_backend__call_gen__conv1_STATE_VARIABLE_CI_43;

#line 689 "call_gen.m"
            {
#line 689 "call_gen.m"
              mercury__list__foldl_4_p_0((MR_Word) &ll_backend__call_gen_scalar_common_1[0], (MR_Word) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0, (MR_Word) &ll_backend__call_gen_scalar_common_2[1], ll_backend__call_gen__DefinedVars_32, ((MR_Box) (ll_backend__call_gen__STATE_VARIABLE_CI_0_42)), &ll_backend__call_gen__conv1_STATE_VARIABLE_CI_43);
            }
#line 689 "call_gen.m"
            *ll_backend__call_gen__STATE_VARIABLE_CI_43 = ((MR_Word) ll_backend__call_gen__conv1_STATE_VARIABLE_CI_43);
#line 690 "call_gen.m"
            {
#line 690 "call_gen.m"
              *ll_backend__call_gen__Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 688 "call_gen.m"
          }
#line 677 "call_gen.m"
        else
#line 677 "call_gen.m"
          if (((MR_tag((MR_Word) ll_backend__call_gen__SimpleCode_18)) == (MR_mktag((MR_Integer) 1))))
#line 678 "call_gen.m"
            {
#line 678 "call_gen.m"
              MR_Word ll_backend__call_gen__TypeCtorInfo_80_80;
#line 678 "call_gen.m"
              MR_Word ll_backend__call_gen__AddrVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__SimpleCode_18, (MR_Integer) 0)));
#line 678 "call_gen.m"
              MR_Word ll_backend__call_gen__ValueVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__SimpleCode_18, (MR_Integer) 1)));
#line 678 "call_gen.m"
              MR_Word ll_backend__call_gen__AddrVarCode_25;
#line 678 "call_gen.m"
              MR_Word ll_backend__call_gen__AddrRval_26;
#line 678 "call_gen.m"
              MR_Word ll_backend__call_gen__ValueVarCode_27;
#line 678 "call_gen.m"
              MR_Word ll_backend__call_gen__ValueRval_28;
#line 678 "call_gen.m"
              MR_Word ll_backend__call_gen__StoreInstr_29;
#line 678 "call_gen.m"
              MR_Word ll_backend__call_gen__StoreCode_30;
#line 678 "call_gen.m"
              MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_71_71;
#line 678 "call_gen.m"
              MR_Word ll_backend__call_gen__V_73_73;
#line 678 "call_gen.m"
              MR_Word ll_backend__call_gen__V_74_74;
#line 678 "call_gen.m"
              MR_Word ll_backend__call_gen__V_76_76;

#line 679 "call_gen.m"
              {
#line 679 "call_gen.m"
                ll_backend__code_info__produce_variable_5_p_0(ll_backend__call_gen__AddrVar_23, &ll_backend__call_gen__AddrVarCode_25, &ll_backend__call_gen__AddrRval_26, ll_backend__call_gen__STATE_VARIABLE_CI_0_42, &ll_backend__call_gen__STATE_VARIABLE_CI_71_71);
              }
#line 680 "call_gen.m"
              {
#line 680 "call_gen.m"
                ll_backend__code_info__produce_variable_5_p_0(ll_backend__call_gen__ValueVar_24, &ll_backend__call_gen__ValueVarCode_27, &ll_backend__call_gen__ValueRval_28, ll_backend__call_gen__STATE_VARIABLE_CI_71_71, ll_backend__call_gen__STATE_VARIABLE_CI_43);
              }
#line 681 "call_gen.m"
              {
#line 681 "call_gen.m"
                ll_backend__call_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 681 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_74_74, 1) = ((MR_Box) (ll_backend__call_gen__AddrRval_26));
#line 681 "call_gen.m"
              }
#line 681 "call_gen.m"
              {
#line 681 "call_gen.m"
                ll_backend__call_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 681 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 681 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_73_73, 1) = ((MR_Box) (ll_backend__call_gen__V_74_74));
#line 681 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_73_73, 2) = ((MR_Box) (ll_backend__call_gen__ValueRval_28));
#line 681 "call_gen.m"
              }
#line 681 "call_gen.m"
              {
#line 681 "call_gen.m"
                ll_backend__call_gen__StoreInstr_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 681 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__StoreInstr_29, 0) = ((MR_Box) (ll_backend__call_gen__V_73_73));
#line 681 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__StoreInstr_29, 1) = ((MR_Box) ((MR_String) ""));
#line 681 "call_gen.m"
              }
#line 4295 "ll_backend.call_gen.c"
              ll_backend__call_gen__TypeCtorInfo_80_80 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 682 "call_gen.m"
              {
#line 682 "call_gen.m"
                ll_backend__call_gen__StoreCode_30 = mercury__cord__singleton_1_f_0(ll_backend__call_gen__TypeCtorInfo_80_80, ((MR_Box) (ll_backend__call_gen__StoreInstr_29)));
              }
#line 683 "call_gen.m"
              {
#line 683 "call_gen.m"
                ll_backend__call_gen__V_76_76 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_80_80, ll_backend__call_gen__ValueVarCode_27, ll_backend__call_gen__StoreCode_30);
              }
#line 683 "call_gen.m"
              {
#line 683 "call_gen.m"
                *ll_backend__call_gen__Code_12 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_80_80, ll_backend__call_gen__AddrVarCode_25, ll_backend__call_gen__V_76_76);
              }
#line 678 "call_gen.m"
            }
#line 677 "call_gen.m"
          else
#line 685 "call_gen.m"
            {
#line 686 "call_gen.m"
              {
#line 686 "call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/7", (MR_String) "malformed model_det builtin predicate");
#line 686 "call_gen.m"
                return;
              }
#line 685 "call_gen.m"
            }
#line 692 "call_gen.m"
    else
#line 692 "call_gen.m"
      if ((ll_backend__call_gen__CodeModel_8 == (MR_Integer) 2))
#line 713 "call_gen.m"
        {
#line 714 "call_gen.m"
          {
#line 714 "call_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/7", (MR_String) "model_non builtin predicate");
#line 714 "call_gen.m"
            return;
          }
#line 713 "call_gen.m"
        }
#line 692 "call_gen.m"
      else
#line 699 "call_gen.m"
        if (((MR_tag((MR_Word) ll_backend__call_gen__SimpleCode_18)) == (MR_mktag((MR_Integer) 0))))
#line 700 "call_gen.m"
          {
#line 701 "call_gen.m"
            {
#line 701 "call_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/7", (MR_String) "malformed model_semi builtin predicate");
#line 701 "call_gen.m"
              return;
            }
#line 700 "call_gen.m"
          }
#line 699 "call_gen.m"
        else
#line 699 "call_gen.m"
          if (((MR_tag((MR_Word) ll_backend__call_gen__SimpleCode_18)) == (MR_mktag((MR_Integer) 3))))
#line 708 "call_gen.m"
            {
#line 709 "call_gen.m"
              {
#line 709 "call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/7", (MR_String) "malformed model_semi builtin predicate");
#line 709 "call_gen.m"
                return;
              }
#line 708 "call_gen.m"
            }
#line 699 "call_gen.m"
          else
#line 699 "call_gen.m"
            if (((MR_tag((MR_Word) ll_backend__call_gen__SimpleCode_18)) == (MR_mktag((MR_Integer) 1))))
#line 704 "call_gen.m"
              {
#line 705 "call_gen.m"
                {
#line 705 "call_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/7", (MR_String) "malformed model_semi builtin predicate");
#line 705 "call_gen.m"
                  return;
                }
#line 704 "call_gen.m"
              }
#line 699 "call_gen.m"
            else
#line 695 "call_gen.m"
              {
#line 695 "call_gen.m"
                MR_Word ll_backend__call_gen__TestExpr_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__call_gen__SimpleCode_18, (MR_Integer) 0)));
#line 695 "call_gen.m"
                MR_Word ll_backend__call_gen__Rval_34;
#line 695 "call_gen.m"
                MR_Word ll_backend__call_gen__ArgCode_35;
#line 695 "call_gen.m"
                MR_Word ll_backend__call_gen__TestCode_36;
#line 695 "call_gen.m"
                MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_64_64;

#line 696 "call_gen.m"
                {
#line 696 "call_gen.m"
                  ll_backend__call_gen__generate_simple_test_5_p_0(ll_backend__call_gen__TestExpr_33, &ll_backend__call_gen__Rval_34, &ll_backend__call_gen__ArgCode_35, ll_backend__call_gen__STATE_VARIABLE_CI_0_42, &ll_backend__call_gen__STATE_VARIABLE_CI_64_64);
                }
#line 697 "call_gen.m"
                {
#line 697 "call_gen.m"
                  ll_backend__code_info__fail_if_rval_is_false_4_p_0(ll_backend__call_gen__Rval_34, &ll_backend__call_gen__TestCode_36, ll_backend__call_gen__STATE_VARIABLE_CI_64_64, ll_backend__call_gen__STATE_VARIABLE_CI_43);
                }
#line 698 "call_gen.m"
                {
#line 698 "call_gen.m"
                  *ll_backend__call_gen__Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__call_gen__ArgCode_35, ll_backend__call_gen__TestCode_36);
                }
#line 695 "call_gen.m"
              }
#line 657 "call_gen.m"
  }
#line 42 "call_gen.m"
}

#line 37 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__generate_generic_call_10_p_0(
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__OuterCodeModel_11,
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__GenericCall_12,
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__Args_13,
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__Modes_14,
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__MaybeRegTypes_15,
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__Det_16,
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_17,
#line 37 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_18,
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_32,
#line 37 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_33)
#line 37 "call_gen.m"
{
#line 177 "call_gen.m"
  {
#line 177 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 177 "call_gen.m"
    {
#line 177 "call_gen.m"
      ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_10_p_0(ll_backend__call_gen__GenericCall_12, ll_backend__call_gen__Args_13, ll_backend__call_gen__Modes_14, ll_backend__call_gen__MaybeRegTypes_15, ll_backend__call_gen__Det_16, ll_backend__call_gen__GoalInfo_17, ll_backend__call_gen__Code_18, ll_backend__call_gen__STATE_VARIABLE_CI_0_32, ll_backend__call_gen__STATE_VARIABLE_CI_33);
#line 177 "call_gen.m"
      return;
    }
#line 177 "call_gen.m"
  }
#line 37 "call_gen.m"
}

#line 33 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__generate_call_8_p_0(
#line 33 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_9,
#line 33 "call_gen.m"
  MR_Word ll_backend__call_gen__PredId_10,
#line 33 "call_gen.m"
  MR_Integer ll_backend__call_gen__ProcId_11,
#line 33 "call_gen.m"
  MR_Word ll_backend__call_gen__ArgVars_12,
#line 33 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_13,
#line 33 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_14,
#line 33 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_44,
#line 33 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_45)
#line 33 "call_gen.m"
{
#line 94 "call_gen.m"
  {
#line 94 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeCtorInfo_83_83;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeCtorInfo_17_95;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__ArgInfo_16;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__ArgsInfos_17;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__LiveVals_18;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__SetupCode_19;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__NonLiveOutputs_20;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__CallModel_21;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__TraceResetCode_22;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__ModuleInfo_23;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__Address_24;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnLabel_25;
#line 94 "call_gen.m"
    MR_String ll_backend__call_gen__CallComment_26;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__Context_27;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__GoalId_28;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__MaybeContainingGoalMap_29;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__MaybeGoalPath_32;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__CallCode_33;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnLiveLvalues_34;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__InstMap_35;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__InstMapDelta_36;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnInstMap_37;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__FailHandlingCode_38;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__MaybeTraceInfo_39;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_46_46;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_47_47;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_48_48;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_50_50;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__V_51_51;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__V_52_52;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__V_53_53;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__V_55_55;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__V_56_56;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__V_57_57;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__V_58_58;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__V_59_59;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__V_60_60;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__V_61_61;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_64_64;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_65_65;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__Liveness_90;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__PostDeaths_91;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__ImmediatePostDeaths_92;
#line 94 "call_gen.m"
    MR_Word ll_backend__call_gen__V_93_93;
#line 157 "call_gen.m"
    MR_Word ll_backend__call_gen__TraceInfo_40;

#line 96 "call_gen.m"
    {
#line 96 "call_gen.m"
      ll_backend__call_gen__ArgInfo_16 = ll_backend__code_info__get_pred_proc_arginfo_3_f_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_44, ll_backend__call_gen__PredId_10, ll_backend__call_gen__ProcId_11);
    }
#line 97 "call_gen.m"
    {
#line 97 "call_gen.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &ll_backend__call_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, ll_backend__call_gen__ArgVars_12, ll_backend__call_gen__ArgInfo_16, &ll_backend__call_gen__ArgsInfos_17);
    }
#line 101 "call_gen.m"
    {
#line 101 "call_gen.m"
      ll_backend__code_info__setup_call_6_p_0(ll_backend__call_gen__GoalInfo_13, ll_backend__call_gen__ArgsInfos_17, &ll_backend__call_gen__LiveVals_18, &ll_backend__call_gen__SetupCode_19, ll_backend__call_gen__STATE_VARIABLE_CI_0_44, &ll_backend__call_gen__STATE_VARIABLE_CI_46_46);
    }
#line 592 "call_gen.m"
    {
#line 592 "call_gen.m"
      ll_backend__code_info__get_forward_live_vars_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_46_46, &ll_backend__call_gen__Liveness_90);
    }
#line 4602 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeCtorInfo_17_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 593 "call_gen.m"
    {
#line 593 "call_gen.m"
      ll_backend__call_gen__V_93_93 = parse_tree__set_of_var__init_0_f_0(ll_backend__call_gen__TypeCtorInfo_17_95);
    }
#line 593 "call_gen.m"
    {
#line 593 "call_gen.m"
      ll_backend__call_gen__find_nonlive_outputs_4_p_0(ll_backend__call_gen__ArgsInfos_17, ll_backend__call_gen__Liveness_90, ll_backend__call_gen__V_93_93, &ll_backend__call_gen__NonLiveOutputs_20);
    }
#line 594 "call_gen.m"
    {
#line 594 "call_gen.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__call_gen__GoalInfo_13, &ll_backend__call_gen__PostDeaths_91);
    }
#line 595 "call_gen.m"
    {
#line 595 "call_gen.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__call_gen__TypeCtorInfo_17_95, ll_backend__call_gen__PostDeaths_91, ll_backend__call_gen__NonLiveOutputs_20, &ll_backend__call_gen__ImmediatePostDeaths_92);
    }
#line 596 "call_gen.m"
    {
#line 596 "call_gen.m"
      ll_backend__code_info__make_vars_forward_dead_3_p_0(ll_backend__call_gen__ImmediatePostDeaths_92, ll_backend__call_gen__STATE_VARIABLE_CI_46_46, &ll_backend__call_gen__STATE_VARIABLE_CI_47_47);
    }
#line 105 "call_gen.m"
    {
#line 105 "call_gen.m"
      ll_backend__call_gen__prepare_for_call_6_p_0(ll_backend__call_gen__CodeModel_9, ll_backend__call_gen__GoalInfo_13, &ll_backend__call_gen__CallModel_21, &ll_backend__call_gen__TraceResetCode_22, ll_backend__call_gen__STATE_VARIABLE_CI_47_47, &ll_backend__call_gen__STATE_VARIABLE_CI_48_48);
    }
#line 109 "call_gen.m"
    {
#line 109 "call_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_48_48, &ll_backend__call_gen__ModuleInfo_23);
    }
#line 110 "call_gen.m"
    {
#line 110 "call_gen.m"
      ll_backend__call_gen__Address_24 = ll_backend__code_info__make_proc_entry_label_5_f_0(ll_backend__call_gen__STATE_VARIABLE_CI_48_48, ll_backend__call_gen__ModuleInfo_23, ll_backend__call_gen__PredId_10, ll_backend__call_gen__ProcId_11, (MR_Integer) 1);
    }
#line 111 "call_gen.m"
    {
#line 111 "call_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__call_gen__ReturnLabel_25, ll_backend__call_gen__STATE_VARIABLE_CI_48_48, &ll_backend__call_gen__STATE_VARIABLE_CI_50_50);
    }
#line 112 "call_gen.m"
    {
#line 112 "call_gen.m"
      ll_backend__call_gen__call_comment_4_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_50_50, ll_backend__call_gen__PredId_10, ll_backend__call_gen__CodeModel_9, &ll_backend__call_gen__CallComment_26);
    }
#line 113 "call_gen.m"
    {
#line 113 "call_gen.m"
      ll_backend__call_gen__Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__call_gen__GoalInfo_13);
    }
#line 114 "call_gen.m"
    {
#line 114 "call_gen.m"
      ll_backend__call_gen__GoalId_28 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__call_gen__GoalInfo_13);
    }
#line 115 "call_gen.m"
    {
#line 115 "call_gen.m"
      ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_50_50, &ll_backend__call_gen__MaybeContainingGoalMap_29);
    }
#line 120 "call_gen.m"
    if ((ll_backend__call_gen__MaybeContainingGoalMap_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 122 "call_gen.m"
      ll_backend__call_gen__MaybeGoalPath_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 120 "call_gen.m"
    else
#line 117 "call_gen.m"
      {
#line 117 "call_gen.m"
        MR_Word ll_backend__call_gen__ContainingGoalMap_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeContainingGoalMap_29, (MR_Integer) 0)));
#line 117 "call_gen.m"
        MR_Word ll_backend__call_gen__GoalPath_31;

#line 118 "call_gen.m"
        {
#line 118 "call_gen.m"
          ll_backend__call_gen__GoalPath_31 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__call_gen__ContainingGoalMap_30, ll_backend__call_gen__GoalId_28);
        }
#line 119 "call_gen.m"
        {
#line 119 "call_gen.m"
          ll_backend__call_gen__MaybeGoalPath_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 119 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeGoalPath_32, 0) = ((MR_Box) (ll_backend__call_gen__GoalPath_31));
#line 119 "call_gen.m"
        }
#line 117 "call_gen.m"
      }
#line 4697 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeCtorInfo_83_83 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 125 "call_gen.m"
    {
#line 125 "call_gen.m"
      ll_backend__call_gen__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 125 "call_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__call_gen__V_53_53, 0) = ((MR_Box) (ll_backend__call_gen__LiveVals_18));
#line 125 "call_gen.m"
    }
#line 125 "call_gen.m"
    {
#line 125 "call_gen.m"
      ll_backend__call_gen__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 125 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_52_52, 0) = ((MR_Box) (ll_backend__call_gen__V_53_53));
#line 125 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_52_52, 1) = ((MR_Box) ((MR_String) ""));
#line 125 "call_gen.m"
    }
#line 126 "call_gen.m"
    {
#line 126 "call_gen.m"
      ll_backend__call_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 126 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_58_58, 0) = ((MR_Box) (ll_backend__call_gen__ReturnLabel_25));
#line 126 "call_gen.m"
    }
#line 128 "call_gen.m"
    {
#line 128 "call_gen.m"
      ll_backend__call_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 128 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 128 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_61_61, 1) = ((MR_Box) (ll_backend__call_gen__ReturnLabel_25));
#line 128 "call_gen.m"
    }
#line 129 "call_gen.m"
    {
#line 129 "call_gen.m"
      ll_backend__call_gen__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 129 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_60_60, 0) = ((MR_Box) (ll_backend__call_gen__V_61_61));
#line 129 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_60_60, 1) = ((MR_Box) ((MR_String) "continuation label"));
#line 129 "call_gen.m"
    }
#line 127 "call_gen.m"
    {
#line 127 "call_gen.m"
      ll_backend__call_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 127 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_59_59, 0) = ((MR_Box) (ll_backend__call_gen__V_60_60));
#line 127 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 127 "call_gen.m"
    }
#line 133 "call_gen.m"
    {
#line 133 "call_gen.m"
      ll_backend__code_info__get_instmap_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_50_50, &ll_backend__call_gen__InstMap_35);
    }
#line 134 "call_gen.m"
    {
#line 134 "call_gen.m"
      ll_backend__call_gen__InstMapDelta_36 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__call_gen__GoalInfo_13);
    }
#line 135 "call_gen.m"
    {
#line 135 "call_gen.m"
      hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__call_gen__InstMap_35, ll_backend__call_gen__InstMapDelta_36, &ll_backend__call_gen__ReturnInstMap_37);
    }
#line 138 "call_gen.m"
    {
#line 138 "call_gen.m"
      ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_p_0(ll_backend__call_gen__ArgsInfos_17, ll_backend__call_gen__GoalInfo_13, ll_backend__call_gen__ReturnInstMap_37, &ll_backend__call_gen__ReturnLiveLvalues_34, ll_backend__call_gen__STATE_VARIABLE_CI_50_50, &ll_backend__call_gen__STATE_VARIABLE_CI_64_64);
    }
#line 126 "call_gen.m"
    {
#line 126 "call_gen.m"
      ll_backend__call_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 126 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 126 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_57_57, 1) = ((MR_Box) (ll_backend__call_gen__Address_24));
#line 126 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_57_57, 2) = ((MR_Box) (ll_backend__call_gen__V_58_58));
#line 126 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_57_57, 3) = ((MR_Box) (ll_backend__call_gen__ReturnLiveLvalues_34));
#line 126 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_57_57, 4) = ((MR_Box) (ll_backend__call_gen__Context_27));
#line 126 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_57_57, 5) = ((MR_Box) (ll_backend__call_gen__MaybeGoalPath_32));
#line 126 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_57_57, 6) = ((MR_Box) (ll_backend__call_gen__CallModel_21));
#line 126 "call_gen.m"
    }
#line 127 "call_gen.m"
    {
#line 127 "call_gen.m"
      ll_backend__call_gen__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 127 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_56_56, 0) = ((MR_Box) (ll_backend__call_gen__V_57_57));
#line 127 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_56_56, 1) = ((MR_Box) (ll_backend__call_gen__CallComment_26));
#line 127 "call_gen.m"
    }
#line 125 "call_gen.m"
    {
#line 125 "call_gen.m"
      ll_backend__call_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 125 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_55_55, 0) = ((MR_Box) (ll_backend__call_gen__V_56_56));
#line 125 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_55_55, 1) = ((MR_Box) (ll_backend__call_gen__V_59_59));
#line 125 "call_gen.m"
    }
#line 124 "call_gen.m"
    {
#line 124 "call_gen.m"
      ll_backend__call_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 124 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_51_51, 0) = ((MR_Box) (ll_backend__call_gen__V_52_52));
#line 124 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_51_51, 1) = ((MR_Box) (ll_backend__call_gen__V_55_55));
#line 124 "call_gen.m"
    }
#line 124 "call_gen.m"
    {
#line 124 "call_gen.m"
      ll_backend__call_gen__CallCode_33 = mercury__cord__from_list_1_f_0(ll_backend__call_gen__TypeCtorInfo_83_83, ll_backend__call_gen__V_51_51);
    }
#line 142 "call_gen.m"
    {
#line 142 "call_gen.m"
      ll_backend__call_gen__handle_call_failure_5_p_0(ll_backend__call_gen__CodeModel_9, ll_backend__call_gen__GoalInfo_13, &ll_backend__call_gen__FailHandlingCode_38, ll_backend__call_gen__STATE_VARIABLE_CI_64_64, &ll_backend__call_gen__STATE_VARIABLE_CI_65_65);
    }
#line 144 "call_gen.m"
    {
#line 144 "call_gen.m"
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_65_65, &ll_backend__call_gen__MaybeTraceInfo_39);
    }
#line 146 "call_gen.m"
    {
#line 146 "call_gen.m"
      ll_backend__call_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__call_gen__GoalInfo_13, (MR_Integer) 10);
    }
#line 146 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 146 "call_gen.m"
      {
#line 147 "call_gen.m"
        ll_backend__call_gen__succeeded = ((MR_tag((MR_Word) ll_backend__call_gen__MaybeTraceInfo_39)) == (MR_mktag((MR_Integer) 1)));
#line 147 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 147 "call_gen.m"
          ll_backend__call_gen__TraceInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeTraceInfo_39, (MR_Integer) 0)));
#line 146 "call_gen.m"
      }
#line 157 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 150 "call_gen.m"
      {
#line 150 "call_gen.m"
        MR_Word ll_backend__call_gen__TraceTailRecResetAndEventCode_41;
#line 150 "call_gen.m"
        MR_Word ll_backend__call_gen__TailRecLabel_42;
#line 150 "call_gen.m"
        MR_Word ll_backend__call_gen__JumpCode_43;
#line 150 "call_gen.m"
        MR_Word ll_backend__call_gen__V_68_68;
#line 150 "call_gen.m"
        MR_Word ll_backend__call_gen__V_72_72;
#line 150 "call_gen.m"
        MR_Word ll_backend__call_gen__V_73_73;
#line 150 "call_gen.m"
        MR_Word ll_backend__call_gen__V_74_74;
#line 150 "call_gen.m"
        MR_Word ll_backend__call_gen__V_75_75;
#line 150 "call_gen.m"
        MR_Word ll_backend__call_gen__V_78_78;

#line 149 "call_gen.m"
        {
#line 149 "call_gen.m"
          ll_backend__trace_gen__generate_tailrec_event_code_8_p_0(ll_backend__call_gen__TraceInfo_40, ll_backend__call_gen__ArgsInfos_17, ll_backend__call_gen__GoalId_28, ll_backend__call_gen__Context_27, &ll_backend__call_gen__TraceTailRecResetAndEventCode_41, &ll_backend__call_gen__TailRecLabel_42, ll_backend__call_gen__STATE_VARIABLE_CI_65_65, ll_backend__call_gen__STATE_VARIABLE_CI_45);
        }
#line 153 "call_gen.m"
        {
#line 153 "call_gen.m"
          ll_backend__call_gen__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 153 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_75_75, 0) = ((MR_Box) (ll_backend__call_gen__TailRecLabel_42));
#line 153 "call_gen.m"
        }
#line 153 "call_gen.m"
        {
#line 153 "call_gen.m"
          ll_backend__call_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 153 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_74_74, 1) = ((MR_Box) (ll_backend__call_gen__V_75_75));
#line 153 "call_gen.m"
        }
#line 155 "call_gen.m"
        {
#line 155 "call_gen.m"
          ll_backend__call_gen__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 155 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_73_73, 0) = ((MR_Box) (ll_backend__call_gen__V_74_74));
#line 155 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_73_73, 1) = ((MR_Box) ((MR_String) "tail recursive jump"));
#line 155 "call_gen.m"
        }
#line 152 "call_gen.m"
        {
#line 152 "call_gen.m"
          ll_backend__call_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_72_72, 0) = ((MR_Box) (ll_backend__call_gen__V_73_73));
#line 152 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 152 "call_gen.m"
        }
#line 151 "call_gen.m"
        {
#line 151 "call_gen.m"
          ll_backend__call_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_68_68, 0) = ((MR_Box) (ll_backend__call_gen__V_52_52));
#line 151 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_68_68, 1) = ((MR_Box) (ll_backend__call_gen__V_72_72));
#line 151 "call_gen.m"
        }
#line 151 "call_gen.m"
        {
#line 151 "call_gen.m"
          ll_backend__call_gen__JumpCode_43 = mercury__cord__from_list_1_f_0(ll_backend__call_gen__TypeCtorInfo_83_83, ll_backend__call_gen__V_68_68);
        }
#line 156 "call_gen.m"
        {
#line 156 "call_gen.m"
          ll_backend__call_gen__V_78_78 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_83_83, ll_backend__call_gen__TraceTailRecResetAndEventCode_41, ll_backend__call_gen__JumpCode_43);
        }
#line 156 "call_gen.m"
        {
#line 156 "call_gen.m"
          *ll_backend__call_gen__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_83_83, ll_backend__call_gen__SetupCode_19, ll_backend__call_gen__V_78_78);
        }
#line 150 "call_gen.m"
      }
#line 157 "call_gen.m"
    else
#line 158 "call_gen.m"
      {
#line 158 "call_gen.m"
        MR_Word ll_backend__call_gen__V_79_79;
#line 158 "call_gen.m"
        MR_Word ll_backend__call_gen__V_80_80;

#line 158 "call_gen.m"
        {
#line 158 "call_gen.m"
          ll_backend__call_gen__V_80_80 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_83_83, ll_backend__call_gen__CallCode_33, ll_backend__call_gen__FailHandlingCode_38);
        }
#line 158 "call_gen.m"
        {
#line 158 "call_gen.m"
          ll_backend__call_gen__V_79_79 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_83_83, ll_backend__call_gen__TraceResetCode_22, ll_backend__call_gen__V_80_80);
        }
#line 158 "call_gen.m"
        {
#line 158 "call_gen.m"
          *ll_backend__call_gen__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_83_83, ll_backend__call_gen__SetupCode_19, ll_backend__call_gen__V_79_79);
        }
#line 158 "call_gen.m"
        *ll_backend__call_gen__STATE_VARIABLE_CI_45 = ll_backend__call_gen__STATE_VARIABLE_CI_65_65;
#line 158 "call_gen.m"
      }
#line 94 "call_gen.m"
  }
#line 33 "call_gen.m"
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
