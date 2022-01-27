/*
** Automatically generated from `call_gen.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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
#include "integer.mih"
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
#include "mdbcomp.sym_name.mih"
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




#line 152 "ll_backend.call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 155 "ll_backend.call_gen.c"
static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0;

#line 158 "ll_backend.call_gen.c"
static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1;

#line 161 "ll_backend.call_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_value_ordered_known_call_variant_0[2];

#line 164 "ll_backend.call_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_name_ordered_known_call_variant_0[2];

#line 167 "ll_backend.call_gen.c"
static const MR_Integer ll_backend__call_gen__ll_backend__call_gen__functor_number_map_known_call_variant_0[2];

#line 170 "ll_backend.call_gen.c"
static MR_bool MR_CALL 
ll_backend__call_gen____Unify____known_call_variant_0_0_10001(
#line 173 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_1,
#line 175 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_2);

#line 178 "ll_backend.call_gen.c"
static void MR_CALL 
ll_backend__call_gen____Compare____known_call_variant_0_0_10001(
#line 181 "ll_backend.call_gen.c"
  MR_Box * ll_backend__call_gen__wrapper_arg_1,
#line 183 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_2,
#line 185 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_3);

#line 608 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_p_0(
#line 608 "call_gen.m"
  MR_Word ll_backend__call_gen__ArgsInfos_8,
#line 608 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_9,
#line 608 "call_gen.m"
  MR_Word ll_backend__call_gen__ReturnInstMap_11,
#line 608 "call_gen.m"
  MR_Word * ll_backend__call_gen__ReturnLiveLvalues_12,
#line 608 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_18,
#line 608 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_19);

#line 205 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_10_p_0(
#line 205 "call_gen.m"
  MR_Word ll_backend__call_gen__GenericCall_12,
#line 205 "call_gen.m"
  MR_Word ll_backend__call_gen__Args_13,
#line 205 "call_gen.m"
  MR_Word ll_backend__call_gen__Modes_14,
#line 205 "call_gen.m"
  MR_Word ll_backend__call_gen__MaybeRegTypes_15,
#line 205 "call_gen.m"
  MR_Word ll_backend__call_gen__Det_16,
#line 205 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_17,
#line 205 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_18,
#line 205 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_64,
#line 205 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_65);

#line 820 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(
#line 820 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 820 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__2_2,
#line 820 "call_gen.m"
  MR_Integer ll_backend__call_gen__HeadVar__3_3,
#line 820 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__4_4,
#line 820 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__5_5);

#line 739 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_simple_test_5_p_0(
#line 739 "call_gen.m"
  MR_Word ll_backend__call_gen__TestExpr_6,
#line 739 "call_gen.m"
  MR_Word * ll_backend__call_gen__Rval_7,
#line 739 "call_gen.m"
  MR_Word * ll_backend__call_gen__ArgCode_8,
#line 739 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_20,
#line 739 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_21);

#line 729 "call_gen.m"
static MR_Word MR_CALL 
ll_backend__call_gen__convert_simple_expr_1_f_0(
#line 729 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1);

#line 646 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__rebuild_registers_5_p_0(
#line 646 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 646 "call_gen.m"
  MR_Word ll_backend__call_gen__Liveness_2,
#line 646 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__3_3,
#line 646 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_4,
#line 646 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_5);

#line 626 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__find_nonlive_outputs_4_p_0(
#line 626 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 626 "call_gen.m"
  MR_Word ll_backend__call_gen__Liveness_2,
#line 626 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3,
#line 626 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_4);

#line 597 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__kill_dead_input_vars_5_p_0(
#line 597 "call_gen.m"
  MR_Word ll_backend__call_gen__ArgsInfos_6,
#line 597 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_7,
#line 597 "call_gen.m"
  MR_Word * ll_backend__call_gen__NonLiveOutputs_8,
#line 597 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_13,
#line 597 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_14);

#line 550 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__call_comment_4_p_0(
#line 550 "call_gen.m"
  MR_Word ll_backend__call_gen__CI_5,
#line 550 "call_gen.m"
  MR_Word ll_backend__call_gen__PredId_6,
#line 550 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_7,
#line 550 "call_gen.m"
  MR_String * ll_backend__call_gen__Msg_8);

#line 522 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__handle_call_failure_5_p_0(
#line 522 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_6,
#line 522 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_7,
#line 522 "call_gen.m"
  MR_Word * ll_backend__call_gen__FailHandlingCode_8,
#line 522 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_15,
#line 522 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_16);

#line 498 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__prepare_for_call_6_p_0(
#line 498 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_7,
#line 498 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_8,
#line 498 "call_gen.m"
  MR_Word * ll_backend__call_gen__CallModel_9,
#line 498 "call_gen.m"
  MR_Word * ll_backend__call_gen__TraceCode_10,
#line 498 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_14,
#line 498 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_15);

#line 442 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generic_call_nonvar_setup_7_p_0(
#line 442 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 442 "call_gen.m"
  MR_Word ll_backend__call_gen__HoCallVariant_2,
#line 442 "call_gen.m"
  MR_Word ll_backend__call_gen__InVarsR_3,
#line 442 "call_gen.m"
  MR_Word ll_backend__call_gen__InVarsF_4,
#line 442 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_5,
#line 442 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_6,
#line 442 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_7);

#line 363 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__extra_livevals_from_3_p_0(
#line 363 "call_gen.m"
  MR_Integer ll_backend__call_gen__Reg_4,
#line 363 "call_gen.m"
  MR_Integer ll_backend__call_gen__FirstInput_5,
#line 363 "call_gen.m"
  MR_Word * ll_backend__call_gen__ExtraLiveVals_6);

#line 358 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__extra_livevals_2_p_0(
#line 358 "call_gen.m"
  MR_Integer ll_backend__call_gen__FirstInput_3,
#line 358 "call_gen.m"
  MR_Word * ll_backend__call_gen__ExtraLiveVals_4);

#line 322 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_event_attributes_6_p_0(
#line 322 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 322 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_Vars_0_2,
#line 322 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__3_3,
#line 322 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__4_4,
#line 322 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_5,
#line 322 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_6);

#line 690 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_builtin_7_p_0_1(
#line 690 "call_gen.m"
  MR_Box ll_backend__call_gen__closure_arg,
#line 690 "call_gen.m"
  MR_Box ll_backend__call_gen__wrapper_arg_1,
#line 690 "call_gen.m"
  MR_Box ll_backend__call_gen__wrapper_arg_2,
#line 690 "call_gen.m"
  MR_Box * ll_backend__call_gen__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__call_gen_scalar_common_1[10][2];

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_2[2][3];

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_4[2][1];




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

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[6])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
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



#line 526 "ll_backend.call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 534 "ll_backend.call_gen.c"
static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0 = {
  (MR_String) "ho_call_known_num",
  (MR_Integer) 0
};

#line 540 "ll_backend.call_gen.c"
static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1 = {
  (MR_String) "ho_call_unknown",
  (MR_Integer) 1
};

#line 546 "ll_backend.call_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_value_ordered_known_call_variant_0[2] = {
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0,
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1
};

#line 552 "ll_backend.call_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_name_ordered_known_call_variant_0[2] = {
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0,
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1
};

#line 558 "ll_backend.call_gen.c"
static const MR_Integer ll_backend__call_gen__ll_backend__call_gen__functor_number_map_known_call_variant_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 564 "ll_backend.call_gen.c"
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

#line 581 "ll_backend.call_gen.c"
static MR_bool MR_CALL 
ll_backend__call_gen____Unify____known_call_variant_0_0_10001(
#line 584 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_1,
#line 586 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_2)
#line 588 "ll_backend.call_gen.c"
{
#line 590 "ll_backend.call_gen.c"
  {
#line 592 "ll_backend.call_gen.c"
    MR_bool ll_backend__call_gen__succeeded;

#line 595 "ll_backend.call_gen.c"
    {
#line 597 "ll_backend.call_gen.c"
      ll_backend__call_gen__succeeded = ll_backend__call_gen____Unify____known_call_variant_0_0(((MR_Word) ll_backend__call_gen__wrapper_arg_1), ((MR_Word) ll_backend__call_gen__wrapper_arg_2));
    }
#line 600 "ll_backend.call_gen.c"
    return ll_backend__call_gen__succeeded;
#line 602 "ll_backend.call_gen.c"
  }
#line 604 "ll_backend.call_gen.c"
}

#line 607 "ll_backend.call_gen.c"
static void MR_CALL 
ll_backend__call_gen____Compare____known_call_variant_0_0_10001(
#line 610 "ll_backend.call_gen.c"
  MR_Box * ll_backend__call_gen__wrapper_arg_1,
#line 612 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_2,
#line 614 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_3)
#line 616 "ll_backend.call_gen.c"
{
#line 618 "ll_backend.call_gen.c"
  {
#line 620 "ll_backend.call_gen.c"
    MR_Word ll_backend__call_gen__conv0_HeadVar__1_1;

#line 623 "ll_backend.call_gen.c"
    {
#line 625 "ll_backend.call_gen.c"
      ll_backend__call_gen____Compare____known_call_variant_0_0(&ll_backend__call_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__call_gen__wrapper_arg_2), ((MR_Word) ll_backend__call_gen__wrapper_arg_3));
    }
#line 628 "ll_backend.call_gen.c"
    *ll_backend__call_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__call_gen__conv0_HeadVar__1_1));
#line 630 "ll_backend.call_gen.c"
  }
#line 632 "ll_backend.call_gen.c"
}

#line 608 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_p_0(
#line 608 "call_gen.m"
  MR_Word ll_backend__call_gen__ArgsInfos_8,
#line 608 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_9,
#line 608 "call_gen.m"
  MR_Word ll_backend__call_gen__ReturnInstMap_11,
#line 608 "call_gen.m"
  MR_Word * ll_backend__call_gen__ReturnLiveLvalues_12,
#line 608 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_18,
#line 608 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_19)
#line 608 "call_gen.m"
{
#line 613 "call_gen.m"
  {
#line 613 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 613 "call_gen.m"
    MR_Word ll_backend__call_gen__InstMapDelta_14;
#line 613 "call_gen.m"
    MR_Word ll_backend__call_gen__OkToDeleteAny_15;
#line 613 "call_gen.m"
    MR_Word ll_backend__call_gen__Liveness_16;
#line 613 "call_gen.m"
    MR_Word ll_backend__call_gen__OutputArgLocs_17;
#line 613 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_20_20;

#line 614 "call_gen.m"
    {
#line 614 "call_gen.m"
      ll_backend__call_gen__InstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__call_gen__GoalInfo_9);
    }
#line 615 "call_gen.m"
    {
#line 615 "call_gen.m"
      ll_backend__call_gen__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__call_gen__InstMapDelta_14);
    }
#line 617 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 616 "call_gen.m"
      ll_backend__call_gen__OkToDeleteAny_15 = (MR_Integer) 0;
#line 617 "call_gen.m"
    else
#line 618 "call_gen.m"
      ll_backend__call_gen__OkToDeleteAny_15 = (MR_Integer) 1;
#line 620 "call_gen.m"
    {
#line 620 "call_gen.m"
      ll_backend__code_info__clear_all_registers_3_p_0(ll_backend__call_gen__OkToDeleteAny_15, ll_backend__call_gen__STATE_VARIABLE_CI_0_18, &ll_backend__call_gen__STATE_VARIABLE_CI_20_20);
    }
#line 621 "call_gen.m"
    {
#line 621 "call_gen.m"
      ll_backend__code_info__get_forward_live_vars_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_20_20, &ll_backend__call_gen__Liveness_16);
    }
#line 622 "call_gen.m"
    {
#line 622 "call_gen.m"
      ll_backend__call_gen__rebuild_registers_5_p_0(ll_backend__call_gen__ArgsInfos_8, ll_backend__call_gen__Liveness_16, &ll_backend__call_gen__OutputArgLocs_17, ll_backend__call_gen__STATE_VARIABLE_CI_20_20, ll_backend__call_gen__STATE_VARIABLE_CI_19);
    }
#line 623 "call_gen.m"
    {
#line 623 "call_gen.m"
      ll_backend__code_info__generate_return_live_lvalues_5_p_0(*ll_backend__call_gen__STATE_VARIABLE_CI_19, ll_backend__call_gen__OutputArgLocs_17, ll_backend__call_gen__ReturnInstMap_11, ll_backend__call_gen__OkToDeleteAny_15, ll_backend__call_gen__ReturnLiveLvalues_12);
#line 623 "call_gen.m"
      return;
    }
#line 613 "call_gen.m"
  }
#line 608 "call_gen.m"
}

#line 205 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_10_p_0(
#line 205 "call_gen.m"
  MR_Word ll_backend__call_gen__GenericCall_12,
#line 205 "call_gen.m"
  MR_Word ll_backend__call_gen__Args_13,
#line 205 "call_gen.m"
  MR_Word ll_backend__call_gen__Modes_14,
#line 205 "call_gen.m"
  MR_Word ll_backend__call_gen__MaybeRegTypes_15,
#line 205 "call_gen.m"
  MR_Word ll_backend__call_gen__Det_16,
#line 205 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_17,
#line 205 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_18,
#line 205 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_64,
#line 205 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_65)
#line 205 "call_gen.m"
{
#line 211 "call_gen.m"
  {
#line 211 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeInfo_106_106;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeInfo_107_107;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeCtorInfo_109_109;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__ModuleInfo_20;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__VarTypes_21;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__Types_22;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__ArgRegTypes_23;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__InVarsR_24;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__InVarsF_25;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__OutVarsR_26;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__OutVarsF_27;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__Globals_28;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__CodeAddr_29;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__SpecifierArgInfos_30;
#line 211 "call_gen.m"
    MR_Integer ll_backend__call_gen__FirstImmInputR_31;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__HoCallVariant_32;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__CodeModel_34;
#line 211 "call_gen.m"
    MR_Integer ll_backend__call_gen__FirstOutputR_35;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__InVarArgInfosR_37;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__InVarArgInfosF_38;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__OutArgsInfosR_39;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__OutArgsInfosF_40;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__ArgInfos_41;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__LiveVals0_42;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__SetupCode_43;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__NonVarCode_45;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__ExtraLiveVals_46;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__LiveVals_47;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__CallModel_48;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__TraceCode_49;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnLabel_50;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__Context_51;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__GoalId_52;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__InstMap_53;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__InstMapDelta_54;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnInstMap_55;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__OutArgsInfos_56;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnLiveLvalues_57;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__MaybeContainingGoalMap_58;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__MaybeGoalPath_61;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__CallCode_62;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__FailHandlingCode_63;
#line 211 "call_gen.m"
    MR_Integer ll_backend__call_gen__V_66_66;
#line 211 "call_gen.m"
    MR_Integer ll_backend__call_gen__V_67_67;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__V_76_76;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__V_77_77;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__V_78_78;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__V_79_79;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__V_80_80;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_82_82;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_83_83;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_84_84;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_85_85;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_86_86;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_87_87;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__V_88_88;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__V_89_89;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__V_90_90;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__V_92_92;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__V_93_93;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__V_94_94;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__V_95_95;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__V_97_97;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__V_98_98;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__V_99_99;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__V_103_103;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__V_104_104;
#line 211 "call_gen.m"
    MR_Word ll_backend__call_gen__V_105_105;
#line 249 "call_gen.m"
    MR_Word ll_backend__call_gen__NonLiveOutputs_44;

#line 212 "call_gen.m"
    {
#line 212 "call_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_64, &ll_backend__call_gen__ModuleInfo_20);
    }
#line 213 "call_gen.m"
    {
#line 213 "call_gen.m"
      ll_backend__call_gen__VarTypes_21 = ll_backend__code_info__get_var_types_1_f_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_64);
    }
#line 214 "call_gen.m"
    {
#line 214 "call_gen.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(ll_backend__call_gen__VarTypes_21, ll_backend__call_gen__Args_13, &ll_backend__call_gen__Types_22);
    }
#line 215 "call_gen.m"
    {
#line 215 "call_gen.m"
      hlds__arg_info__generic_call_arg_reg_types_6_p_0(ll_backend__call_gen__ModuleInfo_20, ll_backend__call_gen__VarTypes_21, ll_backend__call_gen__GenericCall_12, ll_backend__call_gen__Args_13, ll_backend__call_gen__MaybeRegTypes_15, &ll_backend__call_gen__ArgRegTypes_23);
    }
#line 217 "call_gen.m"
    {
#line 217 "call_gen.m"
      hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(ll_backend__call_gen__ModuleInfo_20, ll_backend__call_gen__Args_13, ll_backend__call_gen__Modes_14, ll_backend__call_gen__Types_22, ll_backend__call_gen__ArgRegTypes_23, &ll_backend__call_gen__InVarsR_24, &ll_backend__call_gen__InVarsF_25, &ll_backend__call_gen__OutVarsR_26, &ll_backend__call_gen__OutVarsF_27);
    }
#line 219 "call_gen.m"
    {
#line 219 "call_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__call_gen__ModuleInfo_20, &ll_backend__call_gen__Globals_28);
    }
#line 908 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeInfo_106_106 = (MR_Word) &ll_backend__call_gen_scalar_common_1[0];
#line 220 "call_gen.m"
    {
#line 220 "call_gen.m"
      ll_backend__call_gen__V_66_66 = mercury__list__length_1_f_0(ll_backend__call_gen__TypeInfo_106_106, ll_backend__call_gen__InVarsR_24);
    }
#line 220 "call_gen.m"
    {
#line 220 "call_gen.m"
      ll_backend__call_gen__V_67_67 = mercury__list__length_1_f_0(ll_backend__call_gen__TypeInfo_106_106, ll_backend__call_gen__InVarsF_25);
    }
#line 220 "call_gen.m"
    {
#line 220 "call_gen.m"
      ll_backend__call_gen__generic_call_info_8_p_0(ll_backend__call_gen__Globals_28, ll_backend__call_gen__GenericCall_12, ll_backend__call_gen__V_66_66, ll_backend__call_gen__V_67_67, &ll_backend__call_gen__CodeAddr_29, &ll_backend__call_gen__SpecifierArgInfos_30, &ll_backend__call_gen__FirstImmInputR_31, &ll_backend__call_gen__HoCallVariant_32);
    }
#line 223 "call_gen.m"
    {
#line 223 "call_gen.m"
      hlds__code_model__determinism_to_code_model_2_p_0(ll_backend__call_gen__Det_16, &ll_backend__call_gen__CodeModel_34);
    }
#line 227 "call_gen.m"
    if ((ll_backend__call_gen__CodeModel_34 == (MR_Integer) 1))
#line 226 "call_gen.m"
      ll_backend__call_gen__FirstOutputR_35 = (MR_Integer) 2;
#line 227 "call_gen.m"
    else
#line 231 "call_gen.m"
      ll_backend__call_gen__FirstOutputR_35 = (MR_Integer) 1;
#line 235 "call_gen.m"
    {
#line 235 "call_gen.m"
      ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__InVarsR_24, (MR_Integer) 0, ll_backend__call_gen__FirstImmInputR_31, (MR_Integer) 0, &ll_backend__call_gen__InVarArgInfosR_37);
    }
#line 237 "call_gen.m"
    {
#line 237 "call_gen.m"
      ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__InVarsF_25, (MR_Integer) 1, (MR_Integer) 1, (MR_Integer) 0, &ll_backend__call_gen__InVarArgInfosF_38);
    }
#line 239 "call_gen.m"
    {
#line 239 "call_gen.m"
      ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__OutVarsR_26, (MR_Integer) 0, ll_backend__call_gen__FirstOutputR_35, (MR_Integer) 1, &ll_backend__call_gen__OutArgsInfosR_39);
    }
#line 241 "call_gen.m"
    {
#line 241 "call_gen.m"
      ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__OutVarsF_27, (MR_Integer) 1, (MR_Integer) 1, (MR_Integer) 1, &ll_backend__call_gen__OutArgsInfosF_40);
    }
#line 958 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeInfo_107_107 = (MR_Word) &ll_backend__call_gen_scalar_common_2[0];
#line 244 "call_gen.m"
    {
#line 244 "call_gen.m"
      ll_backend__call_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_80_80, 0) = ((MR_Box) (ll_backend__call_gen__OutArgsInfosF_40));
#line 244 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 244 "call_gen.m"
    }
#line 244 "call_gen.m"
    {
#line 244 "call_gen.m"
      ll_backend__call_gen__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_79_79, 0) = ((MR_Box) (ll_backend__call_gen__OutArgsInfosR_39));
#line 244 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_79_79, 1) = ((MR_Box) (ll_backend__call_gen__V_80_80));
#line 244 "call_gen.m"
    }
#line 244 "call_gen.m"
    {
#line 244 "call_gen.m"
      ll_backend__call_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_78_78, 0) = ((MR_Box) (ll_backend__call_gen__InVarArgInfosF_38));
#line 244 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_78_78, 1) = ((MR_Box) (ll_backend__call_gen__V_79_79));
#line 244 "call_gen.m"
    }
#line 244 "call_gen.m"
    {
#line 244 "call_gen.m"
      ll_backend__call_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_77_77, 0) = ((MR_Box) (ll_backend__call_gen__InVarArgInfosR_37));
#line 244 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_77_77, 1) = ((MR_Box) (ll_backend__call_gen__V_78_78));
#line 244 "call_gen.m"
    }
#line 243 "call_gen.m"
    {
#line 243 "call_gen.m"
      ll_backend__call_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_76_76, 0) = ((MR_Box) (ll_backend__call_gen__SpecifierArgInfos_30));
#line 243 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_76_76, 1) = ((MR_Box) (ll_backend__call_gen__V_77_77));
#line 243 "call_gen.m"
    }
#line 243 "call_gen.m"
    {
#line 243 "call_gen.m"
      ll_backend__call_gen__ArgInfos_41 = mercury__list__condense_1_f_0(ll_backend__call_gen__TypeInfo_107_107, ll_backend__call_gen__V_76_76);
    }
#line 248 "call_gen.m"
    {
#line 248 "call_gen.m"
      ll_backend__code_info__setup_call_6_p_0(ll_backend__call_gen__GoalInfo_17, ll_backend__call_gen__ArgInfos_41, &ll_backend__call_gen__LiveVals0_42, &ll_backend__call_gen__SetupCode_43, ll_backend__call_gen__STATE_VARIABLE_CI_0_64, &ll_backend__call_gen__STATE_VARIABLE_CI_82_82);
    }
#line 249 "call_gen.m"
    {
#line 249 "call_gen.m"
      ll_backend__call_gen__kill_dead_input_vars_5_p_0(ll_backend__call_gen__ArgInfos_41, ll_backend__call_gen__GoalInfo_17, &ll_backend__call_gen__NonLiveOutputs_44, ll_backend__call_gen__STATE_VARIABLE_CI_82_82, &ll_backend__call_gen__STATE_VARIABLE_CI_83_83);
    }
#line 254 "call_gen.m"
    {
#line 254 "call_gen.m"
      ll_backend__call_gen__generic_call_nonvar_setup_7_p_0(ll_backend__call_gen__GenericCall_12, ll_backend__call_gen__HoCallVariant_32, ll_backend__call_gen__InVarsR_24, ll_backend__call_gen__InVarsF_25, &ll_backend__call_gen__NonVarCode_45, ll_backend__call_gen__STATE_VARIABLE_CI_83_83, &ll_backend__call_gen__STATE_VARIABLE_CI_84_84);
    }
#line 257 "call_gen.m"
    {
#line 257 "call_gen.m"
      ll_backend__call_gen__extra_livevals_2_p_0(ll_backend__call_gen__FirstImmInputR_31, &ll_backend__call_gen__ExtraLiveVals_46);
    }
#line 258 "call_gen.m"
    {
#line 258 "call_gen.m"
      mercury__set__insert_list_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__call_gen__ExtraLiveVals_46, ll_backend__call_gen__LiveVals0_42, &ll_backend__call_gen__LiveVals_47);
    }
#line 260 "call_gen.m"
    {
#line 260 "call_gen.m"
      ll_backend__call_gen__prepare_for_call_6_p_0(ll_backend__call_gen__CodeModel_34, ll_backend__call_gen__GoalInfo_17, &ll_backend__call_gen__CallModel_48, &ll_backend__call_gen__TraceCode_49, ll_backend__call_gen__STATE_VARIABLE_CI_84_84, &ll_backend__call_gen__STATE_VARIABLE_CI_85_85);
    }
#line 263 "call_gen.m"
    {
#line 263 "call_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__call_gen__ReturnLabel_50, ll_backend__call_gen__STATE_VARIABLE_CI_85_85, &ll_backend__call_gen__STATE_VARIABLE_CI_86_86);
    }
#line 264 "call_gen.m"
    {
#line 264 "call_gen.m"
      ll_backend__call_gen__Context_51 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__call_gen__GoalInfo_17);
    }
#line 265 "call_gen.m"
    {
#line 265 "call_gen.m"
      ll_backend__call_gen__GoalId_52 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__call_gen__GoalInfo_17);
    }
#line 269 "call_gen.m"
    {
#line 269 "call_gen.m"
      ll_backend__code_info__get_instmap_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_86_86, &ll_backend__call_gen__InstMap_53);
    }
#line 270 "call_gen.m"
    {
#line 270 "call_gen.m"
      ll_backend__call_gen__InstMapDelta_54 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__call_gen__GoalInfo_17);
    }
#line 271 "call_gen.m"
    {
#line 271 "call_gen.m"
      hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__call_gen__InstMap_53, ll_backend__call_gen__InstMapDelta_54, &ll_backend__call_gen__ReturnInstMap_55);
    }
#line 274 "call_gen.m"
    {
#line 274 "call_gen.m"
      ll_backend__call_gen__OutArgsInfos_56 = mercury__list__f_43_43_2_f_0(ll_backend__call_gen__TypeInfo_107_107, ll_backend__call_gen__OutArgsInfosR_39, ll_backend__call_gen__OutArgsInfosF_40);
    }
#line 275 "call_gen.m"
    {
#line 275 "call_gen.m"
      ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_7_p_0(ll_backend__call_gen__OutArgsInfos_56, ll_backend__call_gen__GoalInfo_17, ll_backend__call_gen__ReturnInstMap_55, &ll_backend__call_gen__ReturnLiveLvalues_57, ll_backend__call_gen__STATE_VARIABLE_CI_86_86, &ll_backend__call_gen__STATE_VARIABLE_CI_87_87);
    }
#line 278 "call_gen.m"
    {
#line 278 "call_gen.m"
      ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_87_87, &ll_backend__call_gen__MaybeContainingGoalMap_58);
    }
#line 283 "call_gen.m"
    if ((ll_backend__call_gen__MaybeContainingGoalMap_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "call_gen.m"
      ll_backend__call_gen__MaybeGoalPath_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 283 "call_gen.m"
    else
#line 280 "call_gen.m"
      {
#line 280 "call_gen.m"
        MR_Word ll_backend__call_gen__ContainingGoalMap_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeContainingGoalMap_58, (MR_Integer) 0)));
#line 280 "call_gen.m"
        MR_Word ll_backend__call_gen__GoalPath_60;

#line 281 "call_gen.m"
        {
#line 281 "call_gen.m"
          ll_backend__call_gen__GoalPath_60 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__call_gen__ContainingGoalMap_59, ll_backend__call_gen__GoalId_52);
        }
#line 282 "call_gen.m"
        {
#line 282 "call_gen.m"
          ll_backend__call_gen__MaybeGoalPath_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 282 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeGoalPath_61, 0) = ((MR_Box) (ll_backend__call_gen__GoalPath_60));
#line 282 "call_gen.m"
        }
#line 280 "call_gen.m"
      }
#line 1118 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeCtorInfo_109_109 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 288 "call_gen.m"
    {
#line 288 "call_gen.m"
      ll_backend__call_gen__V_90_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 288 "call_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__call_gen__V_90_90, 0) = ((MR_Box) (ll_backend__call_gen__LiveVals_47));
#line 288 "call_gen.m"
    }
#line 288 "call_gen.m"
    {
#line 288 "call_gen.m"
      ll_backend__call_gen__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 288 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_89_89, 0) = ((MR_Box) (ll_backend__call_gen__V_90_90));
#line 288 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_89_89, 1) = ((MR_Box) ((MR_String) ""));
#line 288 "call_gen.m"
    }
#line 289 "call_gen.m"
    {
#line 289 "call_gen.m"
      ll_backend__call_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 289 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_95_95, 0) = ((MR_Box) (ll_backend__call_gen__ReturnLabel_50));
#line 289 "call_gen.m"
    }
#line 289 "call_gen.m"
    {
#line 289 "call_gen.m"
      ll_backend__call_gen__V_94_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 289 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_94_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 289 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_94_94, 1) = ((MR_Box) (ll_backend__call_gen__CodeAddr_29));
#line 289 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_94_94, 2) = ((MR_Box) (ll_backend__call_gen__V_95_95));
#line 289 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_94_94, 3) = ((MR_Box) (ll_backend__call_gen__ReturnLiveLvalues_57));
#line 289 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_94_94, 4) = ((MR_Box) (ll_backend__call_gen__Context_51));
#line 289 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_94_94, 5) = ((MR_Box) (ll_backend__call_gen__MaybeGoalPath_61));
#line 289 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_94_94, 6) = ((MR_Box) (ll_backend__call_gen__CallModel_48));
#line 289 "call_gen.m"
    }
#line 289 "call_gen.m"
    {
#line 289 "call_gen.m"
      ll_backend__call_gen__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 289 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_93_93, 0) = ((MR_Box) (ll_backend__call_gen__V_94_94));
#line 289 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_93_93, 1) = ((MR_Box) ((MR_String) "Setup and call"));
#line 289 "call_gen.m"
    }
#line 291 "call_gen.m"
    {
#line 291 "call_gen.m"
      ll_backend__call_gen__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 291 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_99_99, 1) = ((MR_Box) (ll_backend__call_gen__ReturnLabel_50));
#line 291 "call_gen.m"
    }
#line 291 "call_gen.m"
    {
#line 291 "call_gen.m"
      ll_backend__call_gen__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 291 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_98_98, 0) = ((MR_Box) (ll_backend__call_gen__V_99_99));
#line 291 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_98_98, 1) = ((MR_Box) ((MR_String) "Continuation label"));
#line 291 "call_gen.m"
    }
#line 292 "call_gen.m"
    {
#line 292 "call_gen.m"
      ll_backend__call_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_97_97, 0) = ((MR_Box) (ll_backend__call_gen__V_98_98));
#line 292 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 292 "call_gen.m"
    }
#line 290 "call_gen.m"
    {
#line 290 "call_gen.m"
      ll_backend__call_gen__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_92_92, 0) = ((MR_Box) (ll_backend__call_gen__V_93_93));
#line 290 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_92_92, 1) = ((MR_Box) (ll_backend__call_gen__V_97_97));
#line 290 "call_gen.m"
    }
#line 288 "call_gen.m"
    {
#line 288 "call_gen.m"
      ll_backend__call_gen__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_88_88, 0) = ((MR_Box) (ll_backend__call_gen__V_89_89));
#line 288 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_88_88, 1) = ((MR_Box) (ll_backend__call_gen__V_92_92));
#line 288 "call_gen.m"
    }
#line 287 "call_gen.m"
    {
#line 287 "call_gen.m"
      ll_backend__call_gen__CallCode_62 = mercury__cord__from_list_1_f_0(ll_backend__call_gen__TypeCtorInfo_109_109, ll_backend__call_gen__V_88_88);
    }
#line 295 "call_gen.m"
    {
#line 295 "call_gen.m"
      ll_backend__call_gen__handle_call_failure_5_p_0(ll_backend__call_gen__CodeModel_34, ll_backend__call_gen__GoalInfo_17, &ll_backend__call_gen__FailHandlingCode_63, ll_backend__call_gen__STATE_VARIABLE_CI_87_87, ll_backend__call_gen__STATE_VARIABLE_CI_65);
    }
#line 297 "call_gen.m"
    {
#line 297 "call_gen.m"
      ll_backend__call_gen__V_105_105 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_109_109, ll_backend__call_gen__CallCode_62, ll_backend__call_gen__FailHandlingCode_63);
    }
#line 297 "call_gen.m"
    {
#line 297 "call_gen.m"
      ll_backend__call_gen__V_104_104 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_109_109, ll_backend__call_gen__TraceCode_49, ll_backend__call_gen__V_105_105);
    }
#line 297 "call_gen.m"
    {
#line 297 "call_gen.m"
      ll_backend__call_gen__V_103_103 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_109_109, ll_backend__call_gen__NonVarCode_45, ll_backend__call_gen__V_104_104);
    }
#line 297 "call_gen.m"
    {
#line 297 "call_gen.m"
      *ll_backend__call_gen__Code_18 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_109_109, ll_backend__call_gen__SetupCode_43, ll_backend__call_gen__V_103_103);
    }
#line 211 "call_gen.m"
  }
#line 205 "call_gen.m"
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
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_36,
#line 37 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_37)
#line 37 "call_gen.m"
{
#line 177 "call_gen.m"
  {
#line 177 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 177 "call_gen.m"
    if (((MR_tag((MR_Word) ll_backend__call_gen__GenericCall_12)) == (MR_mktag((MR_Integer) 3))))
#line 200 "call_gen.m"
      {
#line 200 "call_gen.m"
        MR_Word ll_backend__call_gen__InputArg_30;
#line 200 "call_gen.m"
        MR_Word ll_backend__call_gen__OutputArg_31;
#line 185 "call_gen.m"
        MR_Word ll_backend__call_gen__V_38_38;
#line 185 "call_gen.m"
        MR_Word ll_backend__call_gen__V_39_39;

#line 185 "call_gen.m"
        ll_backend__call_gen__succeeded = ((MR_tag((MR_Word) ll_backend__call_gen__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 185 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 185 "call_gen.m"
          {
#line 185 "call_gen.m"
            ll_backend__call_gen__InputArg_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__Args_13, (MR_Integer) 0)));
#line 185 "call_gen.m"
            ll_backend__call_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__Args_13, (MR_Integer) 1)));
#line 185 "call_gen.m"
            ll_backend__call_gen__succeeded = ((MR_tag((MR_Word) ll_backend__call_gen__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 185 "call_gen.m"
            if (ll_backend__call_gen__succeeded)
#line 185 "call_gen.m"
              {
#line 185 "call_gen.m"
                ll_backend__call_gen__OutputArg_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_38_38, (MR_Integer) 0)));
#line 185 "call_gen.m"
                ll_backend__call_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_38_38, (MR_Integer) 1)));
#line 185 "call_gen.m"
                ll_backend__call_gen__succeeded = (ll_backend__call_gen__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 185 "call_gen.m"
              }
#line 185 "call_gen.m"
          }
#line 200 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 186 "call_gen.m"
          {
#line 186 "call_gen.m"
            MR_Word ll_backend__call_gen__ModuleInfo_32;
#line 186 "call_gen.m"
            MR_Word ll_backend__call_gen__ProcInfo_33;
#line 186 "call_gen.m"
            MR_Word ll_backend__call_gen__VarTypes_34;
#line 186 "call_gen.m"
            MR_Word ll_backend__call_gen__Rval_35;

#line 186 "call_gen.m"
            {
#line 186 "call_gen.m"
              ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_36, &ll_backend__call_gen__ModuleInfo_32);
            }
#line 187 "call_gen.m"
            {
#line 187 "call_gen.m"
              ll_backend__code_info__get_proc_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_36, &ll_backend__call_gen__ProcInfo_33);
            }
#line 188 "call_gen.m"
            {
#line 188 "call_gen.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__call_gen__ProcInfo_33, &ll_backend__call_gen__VarTypes_34);
            }
#line 189 "call_gen.m"
            {
#line 189 "call_gen.m"
              ll_backend__call_gen__succeeded = hlds__hlds_pred__var_is_of_dummy_type_3_p_0(ll_backend__call_gen__ModuleInfo_32, ll_backend__call_gen__VarTypes_34, ll_backend__call_gen__InputArg_30);
            }
#line 196 "call_gen.m"
            if (ll_backend__call_gen__succeeded)
#line 195 "call_gen.m"
              {
#line 195 "call_gen.m"
                ll_backend__call_gen__Rval_35 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_4[1]);
#line 195 "call_gen.m"
              }
#line 196 "call_gen.m"
            else
#line 197 "call_gen.m"
              {
#line 197 "call_gen.m"
                ll_backend__call_gen__Rval_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 197 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__Rval_35, 0) = ((MR_Box) (ll_backend__call_gen__InputArg_30));
#line 197 "call_gen.m"
              }
#line 722 "call_gen.m"
            {
#line 722 "call_gen.m"
              ll_backend__call_gen__succeeded = ll_backend__code_info__variable_is_forward_live_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_36, ll_backend__call_gen__OutputArg_31);
            }
#line 725 "call_gen.m"
            if (ll_backend__call_gen__succeeded)
#line 723 "call_gen.m"
              {
#line 723 "call_gen.m"
                MR_Word ll_backend__call_gen__Rval_53;

#line 723 "call_gen.m"
                {
#line 723 "call_gen.m"
                  ll_backend__call_gen__Rval_53 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Rval_35);
                }
#line 724 "call_gen.m"
                {
#line 724 "call_gen.m"
                  ll_backend__code_info__assign_expr_to_var_5_p_0(ll_backend__call_gen__OutputArg_31, ll_backend__call_gen__Rval_53, ll_backend__call_gen__Code_18, ll_backend__call_gen__STATE_VARIABLE_CI_0_36, ll_backend__call_gen__STATE_VARIABLE_CI_37);
#line 724 "call_gen.m"
                  return;
                }
#line 723 "call_gen.m"
              }
#line 725 "call_gen.m"
            else
#line 726 "call_gen.m"
              {
#line 726 "call_gen.m"
                {
#line 726 "call_gen.m"
                  *ll_backend__call_gen__Code_18 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
#line 726 "call_gen.m"
                *ll_backend__call_gen__STATE_VARIABLE_CI_37 = ll_backend__call_gen__STATE_VARIABLE_CI_0_36;
#line 726 "call_gen.m"
              }
#line 186 "call_gen.m"
          }
#line 200 "call_gen.m"
        else
#line 201 "call_gen.m"
          {
#line 201 "call_gen.m"
            {
#line 201 "call_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_generic_call\'/10", (MR_String) "invalid type/inst cast call");
#line 201 "call_gen.m"
              return;
            }
#line 201 "call_gen.m"
          }
#line 200 "call_gen.m"
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
        MR_Word ll_backend__call_gen__ModuleInfo_63;
#line 181 "call_gen.m"
        MR_Word ll_backend__call_gen__EventSet_64;
#line 181 "call_gen.m"
        MR_Word ll_backend__call_gen__EventSpecMap_65;
#line 308 "call_gen.m"
        MR_String ll_backend__call_gen__V_78_78;
#line 318 "call_gen.m"
        MR_Word ll_backend__call_gen__Attributes_66;
#line 318 "call_gen.m"
        MR_Integer ll_backend__call_gen__EventNumber_67;

#line 306 "call_gen.m"
        {
#line 306 "call_gen.m"
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_36, &ll_backend__call_gen__ModuleInfo_63);
        }
#line 307 "call_gen.m"
        {
#line 307 "call_gen.m"
          hlds__hlds_module__module_info_get_event_set_2_p_0(ll_backend__call_gen__ModuleInfo_63, &ll_backend__call_gen__EventSet_64);
        }
#line 308 "call_gen.m"
        ll_backend__call_gen__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__EventSet_64, (MR_Integer) 0)));
#line 308 "call_gen.m"
        ll_backend__call_gen__EventSpecMap_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__EventSet_64, (MR_Integer) 1)));
#line 310 "call_gen.m"
        {
#line 310 "call_gen.m"
          ll_backend__call_gen__succeeded = parse_tree__prog_event__event_attributes_3_p_0(ll_backend__call_gen__EventSpecMap_65, ll_backend__call_gen__EventName_28, &ll_backend__call_gen__Attributes_66);
        }
#line 310 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 311 "call_gen.m"
          {
#line 311 "call_gen.m"
            ll_backend__call_gen__succeeded = parse_tree__prog_event__event_number_3_p_0(ll_backend__call_gen__EventSpecMap_65, ll_backend__call_gen__EventName_28, &ll_backend__call_gen__EventNumber_67);
          }
#line 318 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 314 "call_gen.m"
          {
#line 314 "call_gen.m"
            MR_Word ll_backend__call_gen__TypeCtorInfo_30_79;
#line 314 "call_gen.m"
            MR_Word ll_backend__call_gen__MaybeUserAttributes_68;
#line 314 "call_gen.m"
            MR_Word ll_backend__call_gen__AttrCodes_69;
#line 314 "call_gen.m"
            MR_Word ll_backend__call_gen__UserEventInfo_70;
#line 314 "call_gen.m"
            MR_Word ll_backend__call_gen__EventCode_71;
#line 314 "call_gen.m"
            MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_23_72;
#line 314 "call_gen.m"
            MR_Word ll_backend__call_gen__V_74_74;

#line 313 "call_gen.m"
            {
#line 313 "call_gen.m"
              ll_backend__call_gen__generate_event_attributes_6_p_0(ll_backend__call_gen__Attributes_66, ll_backend__call_gen__Args_13, &ll_backend__call_gen__MaybeUserAttributes_68, &ll_backend__call_gen__AttrCodes_69, ll_backend__call_gen__STATE_VARIABLE_CI_0_36, &ll_backend__call_gen__STATE_VARIABLE_CI_23_72);
            }
#line 315 "call_gen.m"
            {
#line 315 "call_gen.m"
              ll_backend__call_gen__UserEventInfo_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 315 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__UserEventInfo_70, 0) = ((MR_Box) (ll_backend__call_gen__EventNumber_67));
#line 315 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__UserEventInfo_70, 1) = ((MR_Box) (ll_backend__call_gen__MaybeUserAttributes_68));
#line 315 "call_gen.m"
            }
#line 316 "call_gen.m"
            {
#line 316 "call_gen.m"
              ll_backend__trace_gen__generate_user_event_code_5_p_0(ll_backend__call_gen__UserEventInfo_70, ll_backend__call_gen__GoalInfo_17, &ll_backend__call_gen__EventCode_71, ll_backend__call_gen__STATE_VARIABLE_CI_23_72, ll_backend__call_gen__STATE_VARIABLE_CI_37);
            }
#line 1521 "ll_backend.call_gen.c"
            ll_backend__call_gen__TypeCtorInfo_30_79 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 317 "call_gen.m"
            {
#line 317 "call_gen.m"
              ll_backend__call_gen__V_74_74 = mercury__cord__cord_list_to_cord_1_f_0(ll_backend__call_gen__TypeCtorInfo_30_79, ll_backend__call_gen__AttrCodes_69);
            }
#line 317 "call_gen.m"
            {
#line 317 "call_gen.m"
              *ll_backend__call_gen__Code_18 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_30_79, ll_backend__call_gen__V_74_74, ll_backend__call_gen__EventCode_71);
            }
#line 314 "call_gen.m"
          }
#line 318 "call_gen.m"
        else
#line 319 "call_gen.m"
          {
#line 319 "call_gen.m"
            {
#line 319 "call_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_event_call\'/6", (MR_String) "bad event name");
#line 319 "call_gen.m"
              return;
            }
#line 319 "call_gen.m"
          }
#line 181 "call_gen.m"
      }
#line 177 "call_gen.m"
    else
#line 178 "call_gen.m"
      {
#line 178 "call_gen.m"
        ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_10_p_0(ll_backend__call_gen__GenericCall_12, ll_backend__call_gen__Args_13, ll_backend__call_gen__Modes_14, ll_backend__call_gen__MaybeRegTypes_15, ll_backend__call_gen__Det_16, ll_backend__call_gen__GoalInfo_17, ll_backend__call_gen__Code_18, ll_backend__call_gen__STATE_VARIABLE_CI_0_36, ll_backend__call_gen__STATE_VARIABLE_CI_37);
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
#line 1605 "ll_backend.call_gen.c"
  {
#line 1607 "ll_backend.call_gen.c"
    MR_bool ll_backend__call_gen__succeeded = (ll_backend__call_gen__HeadVar__2_1 == ll_backend__call_gen__HeadVar__2_2);

#line 1610 "ll_backend.call_gen.c"
    return ll_backend__call_gen__succeeded;
#line 1612 "ll_backend.call_gen.c"
  }
#line 45 "call_gen.m"
}

#line 820 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(
#line 820 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 820 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__2_2,
#line 820 "call_gen.m"
  MR_Integer ll_backend__call_gen__HeadVar__3_3,
#line 820 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__4_4,
#line 820 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__5_5)
#line 820 "call_gen.m"
{
#line 824 "call_gen.m"
  {
#line 824 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 824 "call_gen.m"
    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 824 "call_gen.m"
      *ll_backend__call_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 824 "call_gen.m"
    else
#line 826 "call_gen.m"
      {
#line 826 "call_gen.m"
        MR_Word ll_backend__call_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 826 "call_gen.m"
        MR_Word ll_backend__call_gen__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 826 "call_gen.m"
        MR_Word ll_backend__call_gen__ArgInfo_14;
#line 826 "call_gen.m"
        MR_Word ll_backend__call_gen__ArgInfos_15;
#line 826 "call_gen.m"
        MR_Word ll_backend__call_gen__V_16_16;
#line 826 "call_gen.m"
        MR_Word ll_backend__call_gen__V_17_17;
#line 826 "call_gen.m"
        MR_Integer ll_backend__call_gen__V_18_18;

#line 827 "call_gen.m"
        {
#line 827 "call_gen.m"
          ll_backend__call_gen__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 827 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_17_17, 0) = ((MR_Box) (ll_backend__call_gen__HeadVar__2_2));
#line 827 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_17_17, 1) = ((MR_Box) (ll_backend__call_gen__HeadVar__3_3));
#line 827 "call_gen.m"
        }
#line 827 "call_gen.m"
        {
#line 827 "call_gen.m"
          ll_backend__call_gen__ArgInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 827 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__ArgInfo_14, 0) = ((MR_Box) (ll_backend__call_gen__V_17_17));
#line 827 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__ArgInfo_14, 1) = ((MR_Box) (ll_backend__call_gen__HeadVar__4_4));
#line 827 "call_gen.m"
        }
#line 826 "call_gen.m"
        {
#line 826 "call_gen.m"
          ll_backend__call_gen__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 826 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_16_16, 0) = ((MR_Box) (ll_backend__call_gen__Var_9));
#line 826 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_16_16, 1) = ((MR_Box) (ll_backend__call_gen__ArgInfo_14));
#line 826 "call_gen.m"
        }
#line 828 "call_gen.m"
        ll_backend__call_gen__V_18_18 = (ll_backend__call_gen__HeadVar__3_3 + (MR_Integer) 1);
#line 828 "call_gen.m"
        {
#line 828 "call_gen.m"
          ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__Vars_10, ll_backend__call_gen__HeadVar__2_2, ll_backend__call_gen__V_18_18, ll_backend__call_gen__HeadVar__4_4, &ll_backend__call_gen__ArgInfos_15);
        }
#line 826 "call_gen.m"
        {
#line 826 "call_gen.m"
          MR_Word base;
#line 826 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 826 "call_gen.m"
          *ll_backend__call_gen__HeadVar__5_5 = base;
#line 826 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_16_16));
#line 826 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__ArgInfos_15));
#line 826 "call_gen.m"
        }
#line 826 "call_gen.m"
      }
#line 824 "call_gen.m"
  }
#line 820 "call_gen.m"
}

#line 739 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_simple_test_5_p_0(
#line 739 "call_gen.m"
  MR_Word ll_backend__call_gen__TestExpr_6,
#line 739 "call_gen.m"
  MR_Word * ll_backend__call_gen__Rval_7,
#line 739 "call_gen.m"
  MR_Word * ll_backend__call_gen__ArgCode_8,
#line 739 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_20,
#line 739 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_21)
#line 739 "call_gen.m"
{
#line 744 "call_gen.m"
  {
#line 744 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 744 "call_gen.m"
    if (((((MR_tag((MR_Word) ll_backend__call_gen__TestExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 744 "call_gen.m"
      {
#line 744 "call_gen.m"
        MR_Word ll_backend__call_gen__BinOp_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_6, (MR_Integer) 1)));
#line 744 "call_gen.m"
        MR_Word ll_backend__call_gen__X0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_6, (MR_Integer) 2)));
#line 744 "call_gen.m"
        MR_Word ll_backend__call_gen__Y0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_6, (MR_Integer) 3)));
#line 744 "call_gen.m"
        MR_Word ll_backend__call_gen__X1_13;
#line 744 "call_gen.m"
        MR_Word ll_backend__call_gen__Y1_14;
#line 744 "call_gen.m"
        MR_Word ll_backend__call_gen__X_15;
#line 744 "call_gen.m"
        MR_Word ll_backend__call_gen__CodeX_16;
#line 744 "call_gen.m"
        MR_Word ll_backend__call_gen__Y_17;
#line 744 "call_gen.m"
        MR_Word ll_backend__call_gen__CodeY_18;
#line 744 "call_gen.m"
        MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_23_23;

#line 745 "call_gen.m"
        {
#line 745 "call_gen.m"
          ll_backend__call_gen__X1_13 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__X0_11);
        }
#line 746 "call_gen.m"
        {
#line 746 "call_gen.m"
          ll_backend__call_gen__Y1_14 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Y0_12);
        }
#line 763 "call_gen.m"
        if (((MR_tag((MR_Word) ll_backend__call_gen__X1_13)) == (MR_mktag((MR_Integer) 1))))
#line 763 "call_gen.m"
          {
#line 763 "call_gen.m"
            MR_Word ll_backend__call_gen__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__X1_13, (MR_Integer) 0)));

#line 764 "call_gen.m"
            {
#line 764 "call_gen.m"
              ll_backend__code_info__produce_variable_5_p_0(ll_backend__call_gen__Var_35, &ll_backend__call_gen__CodeX_16, &ll_backend__call_gen__X_15, ll_backend__call_gen__STATE_VARIABLE_CI_0_20, &ll_backend__call_gen__STATE_VARIABLE_CI_23_23);
            }
#line 763 "call_gen.m"
          }
#line 763 "call_gen.m"
        else
#line 773 "call_gen.m"
          {
#line 774 "call_gen.m"
            ll_backend__call_gen__X_15 = ll_backend__call_gen__X1_13;
#line 775 "call_gen.m"
            {
#line 775 "call_gen.m"
              ll_backend__call_gen__CodeX_16 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 773 "call_gen.m"
            ll_backend__call_gen__STATE_VARIABLE_CI_23_23 = ll_backend__call_gen__STATE_VARIABLE_CI_0_20;
#line 773 "call_gen.m"
          }
#line 763 "call_gen.m"
        if (((MR_tag((MR_Word) ll_backend__call_gen__Y1_14)) == (MR_mktag((MR_Integer) 1))))
#line 763 "call_gen.m"
          {
#line 763 "call_gen.m"
            MR_Word ll_backend__call_gen__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__Y1_14, (MR_Integer) 0)));

#line 764 "call_gen.m"
            {
#line 764 "call_gen.m"
              ll_backend__code_info__produce_variable_5_p_0(ll_backend__call_gen__Var_55, &ll_backend__call_gen__CodeY_18, &ll_backend__call_gen__Y_17, ll_backend__call_gen__STATE_VARIABLE_CI_23_23, ll_backend__call_gen__STATE_VARIABLE_CI_21);
            }
#line 763 "call_gen.m"
          }
#line 763 "call_gen.m"
        else
#line 773 "call_gen.m"
          {
#line 774 "call_gen.m"
            ll_backend__call_gen__Y_17 = ll_backend__call_gen__Y1_14;
#line 775 "call_gen.m"
            {
#line 775 "call_gen.m"
              ll_backend__call_gen__CodeY_18 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 773 "call_gen.m"
            *ll_backend__call_gen__STATE_VARIABLE_CI_21 = ll_backend__call_gen__STATE_VARIABLE_CI_23_23;
#line 773 "call_gen.m"
          }
#line 749 "call_gen.m"
        {
#line 749 "call_gen.m"
          MR_Word base;
#line 749 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 749 "call_gen.m"
          *ll_backend__call_gen__Rval_7 = base;
#line 749 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 749 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__call_gen__BinOp_10));
#line 749 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__call_gen__X_15));
#line 749 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__call_gen__Y_17));
#line 749 "call_gen.m"
        }
#line 750 "call_gen.m"
        {
#line 750 "call_gen.m"
          *ll_backend__call_gen__ArgCode_8 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__call_gen__CodeX_16, ll_backend__call_gen__CodeY_18);
        }
#line 744 "call_gen.m"
      }
#line 744 "call_gen.m"
    else
#line 752 "call_gen.m"
      {
#line 752 "call_gen.m"
        MR_Word ll_backend__call_gen__UnOp_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_6, (MR_Integer) 1)));
#line 752 "call_gen.m"
        MR_Word ll_backend__call_gen__X0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_6, (MR_Integer) 2)));
#line 752 "call_gen.m"
        MR_Word ll_backend__call_gen__X1_26;
#line 752 "call_gen.m"
        MR_Word ll_backend__call_gen__X_27;

#line 753 "call_gen.m"
        {
#line 753 "call_gen.m"
          ll_backend__call_gen__X1_26 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__X0_25);
        }
#line 763 "call_gen.m"
        if (((MR_tag((MR_Word) ll_backend__call_gen__X1_26)) == (MR_mktag((MR_Integer) 1))))
#line 763 "call_gen.m"
          {
#line 763 "call_gen.m"
            MR_Word ll_backend__call_gen__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__X1_26, (MR_Integer) 0)));

#line 764 "call_gen.m"
            {
#line 764 "call_gen.m"
              ll_backend__code_info__produce_variable_5_p_0(ll_backend__call_gen__Var_75, ll_backend__call_gen__ArgCode_8, &ll_backend__call_gen__X_27, ll_backend__call_gen__STATE_VARIABLE_CI_0_20, ll_backend__call_gen__STATE_VARIABLE_CI_21);
            }
#line 763 "call_gen.m"
          }
#line 763 "call_gen.m"
        else
#line 773 "call_gen.m"
          {
#line 774 "call_gen.m"
            ll_backend__call_gen__X_27 = ll_backend__call_gen__X1_26;
#line 775 "call_gen.m"
            {
#line 775 "call_gen.m"
              *ll_backend__call_gen__ArgCode_8 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 773 "call_gen.m"
            *ll_backend__call_gen__STATE_VARIABLE_CI_21 = ll_backend__call_gen__STATE_VARIABLE_CI_0_20;
#line 773 "call_gen.m"
          }
#line 755 "call_gen.m"
        {
#line 755 "call_gen.m"
          MR_Word base;
#line 755 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 755 "call_gen.m"
          *ll_backend__call_gen__Rval_7 = base;
#line 755 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 755 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__call_gen__UnOp_19));
#line 755 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__call_gen__X_27));
#line 755 "call_gen.m"
        }
#line 752 "call_gen.m"
      }
#line 744 "call_gen.m"
  }
#line 739 "call_gen.m"
}

#line 729 "call_gen.m"
static MR_Word MR_CALL 
ll_backend__call_gen__convert_simple_expr_1_f_0(
#line 729 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1)
#line 729 "call_gen.m"
{
#line 731 "call_gen.m"
  {
#line 731 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 731 "call_gen.m"
    MR_Word ll_backend__call_gen__HeadVar__2_2;

#line 731 "call_gen.m"
    if (((MR_tag((MR_Word) ll_backend__call_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 733 "call_gen.m"
      {
#line 733 "call_gen.m"
        MR_Float ll_backend__call_gen__Float_6 = MR_unbox_float((MR_hl_field(MR_mktag(2), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 733 "call_gen.m"
        MR_Word ll_backend__call_gen__V_7_7;

#line 733 "call_gen.m"
        {
#line 733 "call_gen.m"
          ll_backend__call_gen__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 733 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_7_7, 1) = MR_box_float(ll_backend__call_gen__Float_6);
#line 733 "call_gen.m"
        }
#line 733 "call_gen.m"
        {
#line 733 "call_gen.m"
          ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 733 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__call_gen__V_7_7));
#line 733 "call_gen.m"
        }
#line 733 "call_gen.m"
      }
#line 731 "call_gen.m"
    else
#line 731 "call_gen.m"
    if (((MR_tag((MR_Word) ll_backend__call_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 732 "call_gen.m"
      {
#line 732 "call_gen.m"
        MR_Integer ll_backend__call_gen__Int_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 732 "call_gen.m"
        MR_Word ll_backend__call_gen__V_5_5;

#line 732 "call_gen.m"
        {
#line 732 "call_gen.m"
          ll_backend__call_gen__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 732 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_5_5, 0) = ((MR_Box) (ll_backend__call_gen__Int_4));
#line 732 "call_gen.m"
        }
#line 732 "call_gen.m"
        {
#line 732 "call_gen.m"
          ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 732 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__call_gen__V_5_5));
#line 732 "call_gen.m"
        }
#line 732 "call_gen.m"
      }
#line 731 "call_gen.m"
    else
#line 731 "call_gen.m"
    if (((MR_tag((MR_Word) ll_backend__call_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 731 "call_gen.m"
      {
#line 731 "call_gen.m"
        MR_Word ll_backend__call_gen__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));

#line 731 "call_gen.m"
        {
#line 731 "call_gen.m"
          ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 731 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (ll_backend__call_gen__Var_3));
#line 731 "call_gen.m"
        }
#line 731 "call_gen.m"
      }
#line 731 "call_gen.m"
    else
#line 731 "call_gen.m"
    if (((((MR_tag((MR_Word) ll_backend__call_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 736 "call_gen.m"
      {
#line 736 "call_gen.m"
        MR_Word ll_backend__call_gen__BinOp_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 736 "call_gen.m"
        MR_Word ll_backend__call_gen__Expr1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 736 "call_gen.m"
        MR_Word ll_backend__call_gen__Expr2_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 736 "call_gen.m"
        MR_Word ll_backend__call_gen__V_14_14;
#line 736 "call_gen.m"
        MR_Word ll_backend__call_gen__V_15_15;

#line 737 "call_gen.m"
        {
#line 737 "call_gen.m"
          ll_backend__call_gen__V_14_14 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Expr1_12);
        }
#line 737 "call_gen.m"
        {
#line 737 "call_gen.m"
          ll_backend__call_gen__V_15_15 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Expr2_13);
        }
#line 737 "call_gen.m"
        {
#line 737 "call_gen.m"
          ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 737 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 737 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__call_gen__BinOp_11));
#line 737 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 2) = ((MR_Box) (ll_backend__call_gen__V_14_14));
#line 737 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 3) = ((MR_Box) (ll_backend__call_gen__V_15_15));
#line 737 "call_gen.m"
        }
#line 736 "call_gen.m"
      }
#line 731 "call_gen.m"
    else
#line 734 "call_gen.m"
      {
#line 734 "call_gen.m"
        MR_Word ll_backend__call_gen__UnOp_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 734 "call_gen.m"
        MR_Word ll_backend__call_gen__Expr_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 734 "call_gen.m"
        MR_Word ll_backend__call_gen__V_10_10;

#line 735 "call_gen.m"
        {
#line 735 "call_gen.m"
          ll_backend__call_gen__V_10_10 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Expr_9);
        }
#line 735 "call_gen.m"
        {
#line 735 "call_gen.m"
          ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 735 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 735 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__call_gen__UnOp_8));
#line 735 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 2) = ((MR_Box) (ll_backend__call_gen__V_10_10));
#line 735 "call_gen.m"
        }
#line 734 "call_gen.m"
      }
#line 731 "call_gen.m"
    return ll_backend__call_gen__HeadVar__2_2;
#line 731 "call_gen.m"
  }
#line 729 "call_gen.m"
}

#line 646 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__rebuild_registers_5_p_0(
#line 646 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 646 "call_gen.m"
  MR_Word ll_backend__call_gen__Liveness_2,
#line 646 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__3_3,
#line 646 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_4,
#line 646 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_5)
#line 646 "call_gen.m"
{
#line 650 "call_gen.m"
  {
#line 650 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 650 "call_gen.m"
    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 650 "call_gen.m"
      {
#line 650 "call_gen.m"
        *ll_backend__call_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 650 "call_gen.m"
        *ll_backend__call_gen__STATE_VARIABLE_CI_5 = ll_backend__call_gen__STATE_VARIABLE_CI_0_4;
#line 650 "call_gen.m"
      }
#line 650 "call_gen.m"
    else
#line 652 "call_gen.m"
      {
#line 652 "call_gen.m"
        MR_Word ll_backend__call_gen__Var_10;
#line 652 "call_gen.m"
        MR_Word ll_backend__call_gen__ArgLoc_11;
#line 652 "call_gen.m"
        MR_Word ll_backend__call_gen__Mode_12;
#line 652 "call_gen.m"
        MR_Word ll_backend__call_gen__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 652 "call_gen.m"
        MR_Word ll_backend__call_gen__OutputArgLocs1_17;
#line 652 "call_gen.m"
        MR_Word ll_backend__call_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 652 "call_gen.m"
        MR_Word ll_backend__call_gen__V_22_22;
#line 652 "call_gen.m"
        MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_23_23;
#line 655 "call_gen.m"
        MR_Word ll_backend__call_gen__TypeCtorInfo_26_26;

#line 651 "call_gen.m"
        ll_backend__call_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_21_21, (MR_Integer) 0)));
#line 651 "call_gen.m"
        ll_backend__call_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_21_21, (MR_Integer) 1)));
#line 651 "call_gen.m"
        ll_backend__call_gen__ArgLoc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_22_22, (MR_Integer) 0)));
#line 651 "call_gen.m"
        ll_backend__call_gen__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_22_22, (MR_Integer) 1)));
#line 653 "call_gen.m"
        {
#line 653 "call_gen.m"
          ll_backend__call_gen__rebuild_registers_5_p_0(ll_backend__call_gen__Args_13, ll_backend__call_gen__Liveness_2, &ll_backend__call_gen__OutputArgLocs1_17, ll_backend__call_gen__STATE_VARIABLE_CI_0_4, &ll_backend__call_gen__STATE_VARIABLE_CI_23_23);
        }
#line 655 "call_gen.m"
        ll_backend__call_gen__succeeded = (ll_backend__call_gen__Mode_12 == (MR_Integer) 1);
#line 655 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 655 "call_gen.m"
          {
#line 2173 "ll_backend.call_gen.c"
            ll_backend__call_gen__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 656 "call_gen.m"
            {
#line 656 "call_gen.m"
              ll_backend__call_gen__succeeded = parse_tree__set_of_var__member_2_p_0(ll_backend__call_gen__TypeCtorInfo_26_26, ll_backend__call_gen__Liveness_2, ll_backend__call_gen__Var_10);
            }
#line 655 "call_gen.m"
          }
#line 661 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 658 "call_gen.m"
          {
#line 658 "call_gen.m"
            MR_Word ll_backend__call_gen__Register_18;
#line 658 "call_gen.m"
            MR_Word ll_backend__call_gen__V_25_25;

#line 658 "call_gen.m"
            {
#line 658 "call_gen.m"
              ll_backend__code_util__arg_loc_to_register_2_p_0(ll_backend__call_gen__ArgLoc_11, &ll_backend__call_gen__Register_18);
            }
#line 659 "call_gen.m"
            {
#line 659 "call_gen.m"
              ll_backend__code_info__set_var_location_4_p_0(ll_backend__call_gen__Var_10, ll_backend__call_gen__Register_18, ll_backend__call_gen__STATE_VARIABLE_CI_23_23, ll_backend__call_gen__STATE_VARIABLE_CI_5);
            }
#line 660 "call_gen.m"
            {
#line 660 "call_gen.m"
              ll_backend__call_gen__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 660 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_25_25, 0) = ((MR_Box) (ll_backend__call_gen__Var_10));
#line 660 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_25_25, 1) = ((MR_Box) (ll_backend__call_gen__ArgLoc_11));
#line 660 "call_gen.m"
            }
#line 660 "call_gen.m"
            {
#line 660 "call_gen.m"
              MR_Word base;
#line 660 "call_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "call_gen.m"
              *ll_backend__call_gen__HeadVar__3_3 = base;
#line 660 "call_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_25_25));
#line 660 "call_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__OutputArgLocs1_17));
#line 660 "call_gen.m"
            }
#line 658 "call_gen.m"
          }
#line 661 "call_gen.m"
        else
#line 662 "call_gen.m"
          {
#line 662 "call_gen.m"
            *ll_backend__call_gen__HeadVar__3_3 = ll_backend__call_gen__OutputArgLocs1_17;
#line 662 "call_gen.m"
            *ll_backend__call_gen__STATE_VARIABLE_CI_5 = ll_backend__call_gen__STATE_VARIABLE_CI_23_23;
#line 662 "call_gen.m"
          }
#line 652 "call_gen.m"
      }
#line 650 "call_gen.m"
  }
#line 646 "call_gen.m"
}

#line 626 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__find_nonlive_outputs_4_p_0(
#line 626 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 626 "call_gen.m"
  MR_Word ll_backend__call_gen__Liveness_2,
#line 626 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3,
#line 626 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_4)
#line 626 "call_gen.m"
{
#line 629 "call_gen.m"
  while (MR_TRUE)
#line 629 "call_gen.m"
    {
#line 629 "call_gen.m"
      /* tailcall optimized into a loop */
#line 629 "call_gen.m"
      {
#line 629 "call_gen.m"
        MR_bool ll_backend__call_gen__succeeded;

#line 629 "call_gen.m"
        if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 629 "call_gen.m"
          *ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_4 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3;
#line 629 "call_gen.m"
        else
#line 631 "call_gen.m"
          {
#line 631 "call_gen.m"
            MR_Word ll_backend__call_gen__Var_9;
#line 631 "call_gen.m"
            MR_Word ll_backend__call_gen__Mode_11;
#line 631 "call_gen.m"
            MR_Word ll_backend__call_gen__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 631 "call_gen.m"
            MR_Word ll_backend__call_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 631 "call_gen.m"
            MR_Word ll_backend__call_gen__V_18_18;
#line 631 "call_gen.m"
            MR_Word ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19;
#line 630 "call_gen.m"
            MR_Word ll_backend__call_gen___ArgLoc_10;

#line 630 "call_gen.m"
            ll_backend__call_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_17_17, (MR_Integer) 0)));
#line 630 "call_gen.m"
            ll_backend__call_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_17_17, (MR_Integer) 1)));
#line 630 "call_gen.m"
            ll_backend__call_gen___ArgLoc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_18_18, (MR_Integer) 0)));
#line 630 "call_gen.m"
            ll_backend__call_gen__Mode_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_18_18, (MR_Integer) 1)));
#line 639 "call_gen.m"
            if ((ll_backend__call_gen__Mode_11 == (MR_Integer) 0))
#line 640 "call_gen.m"
              ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3;
#line 639 "call_gen.m"
            else
#line 639 "call_gen.m"
            if ((ll_backend__call_gen__Mode_11 == (MR_Integer) 1))
#line 636 "call_gen.m"
              {
#line 634 "call_gen.m"
                {
#line 634 "call_gen.m"
                  ll_backend__call_gen__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__call_gen__Liveness_2, ll_backend__call_gen__Var_9);
                }
#line 636 "call_gen.m"
                if (ll_backend__call_gen__succeeded)
#line 636 "call_gen.m"
                  ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3;
#line 636 "call_gen.m"
                else
#line 637 "call_gen.m"
                  {
#line 637 "call_gen.m"
                    {
#line 637 "call_gen.m"
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__call_gen__Var_9, ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3, &ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19);
                    }
#line 637 "call_gen.m"
                  }
#line 636 "call_gen.m"
              }
#line 639 "call_gen.m"
            else
#line 641 "call_gen.m"
              ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3;
#line 644 "call_gen.m"
            /* direct tailcall eliminated */
#line 644 "call_gen.m"
            {
#line 644 "call_gen.m"
              MR_Word ll_backend__call_gen__HeadVar__1__tmp_copy_1 = ll_backend__call_gen__Args_12;
#line 644 "call_gen.m"
              MR_Word ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0__tmp_copy_3 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19;

#line 644 "call_gen.m"
              ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0__tmp_copy_3;
#line 644 "call_gen.m"
              ll_backend__call_gen__HeadVar__1_1 = ll_backend__call_gen__HeadVar__1__tmp_copy_1;
#line 644 "call_gen.m"
            }
#line 644 "call_gen.m"
            continue;
#line 631 "call_gen.m"
          }
#line 629 "call_gen.m"
      }
#line 629 "call_gen.m"
      break;
#line 629 "call_gen.m"
    }
#line 626 "call_gen.m"
}

#line 597 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__kill_dead_input_vars_5_p_0(
#line 597 "call_gen.m"
  MR_Word ll_backend__call_gen__ArgsInfos_6,
#line 597 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_7,
#line 597 "call_gen.m"
  MR_Word * ll_backend__call_gen__NonLiveOutputs_8,
#line 597 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_13,
#line 597 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_14)
#line 597 "call_gen.m"
{
#line 601 "call_gen.m"
  {
#line 601 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 601 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeCtorInfo_17_17;
#line 601 "call_gen.m"
    MR_Word ll_backend__call_gen__Liveness_10;
#line 601 "call_gen.m"
    MR_Word ll_backend__call_gen__PostDeaths_11;
#line 601 "call_gen.m"
    MR_Word ll_backend__call_gen__ImmediatePostDeaths_12;
#line 601 "call_gen.m"
    MR_Word ll_backend__call_gen__V_15_15;

#line 602 "call_gen.m"
    {
#line 602 "call_gen.m"
      ll_backend__code_info__get_forward_live_vars_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_13, &ll_backend__call_gen__Liveness_10);
    }
#line 2398 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 603 "call_gen.m"
    {
#line 603 "call_gen.m"
      ll_backend__call_gen__V_15_15 = parse_tree__set_of_var__init_0_f_0(ll_backend__call_gen__TypeCtorInfo_17_17);
    }
#line 603 "call_gen.m"
    {
#line 603 "call_gen.m"
      ll_backend__call_gen__find_nonlive_outputs_4_p_0(ll_backend__call_gen__ArgsInfos_6, ll_backend__call_gen__Liveness_10, ll_backend__call_gen__V_15_15, ll_backend__call_gen__NonLiveOutputs_8);
    }
#line 604 "call_gen.m"
    {
#line 604 "call_gen.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__call_gen__GoalInfo_7, &ll_backend__call_gen__PostDeaths_11);
    }
#line 605 "call_gen.m"
    {
#line 605 "call_gen.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__call_gen__TypeCtorInfo_17_17, ll_backend__call_gen__PostDeaths_11, *ll_backend__call_gen__NonLiveOutputs_8, &ll_backend__call_gen__ImmediatePostDeaths_12);
    }
#line 606 "call_gen.m"
    {
#line 606 "call_gen.m"
      ll_backend__code_info__make_vars_forward_dead_3_p_0(ll_backend__call_gen__ImmediatePostDeaths_12, ll_backend__call_gen__STATE_VARIABLE_CI_0_13, ll_backend__call_gen__STATE_VARIABLE_CI_14);
#line 606 "call_gen.m"
      return;
    }
#line 601 "call_gen.m"
  }
#line 597 "call_gen.m"
}

#line 550 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__call_comment_4_p_0(
#line 550 "call_gen.m"
  MR_Word ll_backend__call_gen__CI_5,
#line 550 "call_gen.m"
  MR_Word ll_backend__call_gen__PredId_6,
#line 550 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_7,
#line 550 "call_gen.m"
  MR_String * ll_backend__call_gen__Msg_8)
#line 550 "call_gen.m"
{
#line 553 "call_gen.m"
  {
#line 553 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 553 "call_gen.m"
    MR_String ll_backend__call_gen__BaseMsg_9;
#line 553 "call_gen.m"
    MR_Word ll_backend__call_gen__AutoComments_10;

#line 557 "call_gen.m"
    if ((ll_backend__call_gen__CodeModel_7 == (MR_Integer) 0))
#line 556 "call_gen.m"
      ll_backend__call_gen__BaseMsg_9 = (MR_String) "branch to det procedure";
#line 557 "call_gen.m"
    else
#line 557 "call_gen.m"
    if ((ll_backend__call_gen__CodeModel_7 == (MR_Integer) 2))
#line 562 "call_gen.m"
      ll_backend__call_gen__BaseMsg_9 = (MR_String) "branch to nondet procedure";
#line 557 "call_gen.m"
    else
#line 559 "call_gen.m"
      ll_backend__call_gen__BaseMsg_9 = (MR_String) "branch to semidet procedure";
#line 564 "call_gen.m"
    {
#line 564 "call_gen.m"
      ll_backend__code_info__get_auto_comments_2_p_0(ll_backend__call_gen__CI_5, &ll_backend__call_gen__AutoComments_10);
    }
#line 571 "call_gen.m"
    if ((ll_backend__call_gen__AutoComments_10 == (MR_Integer) 0))
#line 573 "call_gen.m"
      *ll_backend__call_gen__Msg_8 = ll_backend__call_gen__BaseMsg_9;
#line 571 "call_gen.m"
    else
#line 566 "call_gen.m"
      {
#line 566 "call_gen.m"
        MR_Word ll_backend__call_gen__ModuleInfo_11;
#line 566 "call_gen.m"
        MR_Word ll_backend__call_gen__PredInfo_12;
#line 566 "call_gen.m"
        MR_String ll_backend__call_gen__PredName_13;
#line 566 "call_gen.m"
        MR_String ll_backend__call_gen__V_14_14;

#line 567 "call_gen.m"
        {
#line 567 "call_gen.m"
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__CI_5, &ll_backend__call_gen__ModuleInfo_11);
        }
#line 568 "call_gen.m"
        {
#line 568 "call_gen.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__call_gen__ModuleInfo_11, ll_backend__call_gen__PredId_6, &ll_backend__call_gen__PredInfo_12);
        }
#line 569 "call_gen.m"
        {
#line 569 "call_gen.m"
          ll_backend__call_gen__PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__call_gen__PredInfo_12);
        }
#line 570 "call_gen.m"
        {
#line 570 "call_gen.m"
          ll_backend__call_gen__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__call_gen__PredName_13);
        }
#line 570 "call_gen.m"
        {
#line 570 "call_gen.m"
          *ll_backend__call_gen__Msg_8 = mercury__string__f_43_43_2_f_0(ll_backend__call_gen__BaseMsg_9, ll_backend__call_gen__V_14_14);
        }
#line 566 "call_gen.m"
      }
#line 553 "call_gen.m"
  }
#line 550 "call_gen.m"
}

#line 522 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__handle_call_failure_5_p_0(
#line 522 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_6,
#line 522 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_7,
#line 522 "call_gen.m"
  MR_Word * ll_backend__call_gen__FailHandlingCode_8,
#line 522 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_15,
#line 522 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_16)
#line 522 "call_gen.m"
{
#line 527 "call_gen.m"
  {
#line 527 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 527 "call_gen.m"
    if ((ll_backend__call_gen__CodeModel_6 == (MR_Integer) 1))
#line 527 "call_gen.m"
      {
#line 527 "call_gen.m"
        MR_Word ll_backend__call_gen__Detism_10;

#line 528 "call_gen.m"
        {
#line 528 "call_gen.m"
          ll_backend__call_gen__Detism_10 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__call_gen__GoalInfo_7);
        }
#line 529 "call_gen.m"
        ll_backend__call_gen__succeeded = (ll_backend__call_gen__Detism_10 == (MR_Integer) 7);
#line 531 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 530 "call_gen.m"
          {
#line 530 "call_gen.m"
            ll_backend__code_info__generate_failure_3_p_0(ll_backend__call_gen__FailHandlingCode_8, ll_backend__call_gen__STATE_VARIABLE_CI_0_15, ll_backend__call_gen__STATE_VARIABLE_CI_16);
#line 530 "call_gen.m"
            return;
          }
#line 531 "call_gen.m"
        else
#line 532 "call_gen.m"
          {
#line 532 "call_gen.m"
            MR_Word ll_backend__call_gen__TypeCtorInfo_32_32;
#line 532 "call_gen.m"
            MR_Word ll_backend__call_gen__ContLab_11;
#line 532 "call_gen.m"
            MR_Word ll_backend__call_gen__FailTestCode_12;
#line 532 "call_gen.m"
            MR_Word ll_backend__call_gen__FailCode_13;
#line 532 "call_gen.m"
            MR_Word ll_backend__call_gen__ContLabelCode_14;
#line 532 "call_gen.m"
            MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_18_18;
#line 532 "call_gen.m"
            MR_Word ll_backend__call_gen__V_19_19;
#line 532 "call_gen.m"
            MR_Word ll_backend__call_gen__V_20_20;
#line 532 "call_gen.m"
            MR_Word ll_backend__call_gen__V_25_25;
#line 532 "call_gen.m"
            MR_Word ll_backend__call_gen__V_28_28;
#line 532 "call_gen.m"
            MR_Word ll_backend__call_gen__V_29_29;
#line 532 "call_gen.m"
            MR_Word ll_backend__call_gen__V_31_31;

#line 532 "call_gen.m"
            {
#line 532 "call_gen.m"
              ll_backend__code_info__get_next_label_3_p_0(&ll_backend__call_gen__ContLab_11, ll_backend__call_gen__STATE_VARIABLE_CI_0_15, &ll_backend__call_gen__STATE_VARIABLE_CI_18_18);
            }
#line 2599 "ll_backend.call_gen.c"
            ll_backend__call_gen__TypeCtorInfo_32_32 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 534 "call_gen.m"
            {
#line 534 "call_gen.m"
              ll_backend__call_gen__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 534 "call_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_25_25, 0) = ((MR_Box) (ll_backend__call_gen__ContLab_11));
#line 534 "call_gen.m"
            }
#line 534 "call_gen.m"
            {
#line 534 "call_gen.m"
              ll_backend__call_gen__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 534 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 534 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_20_20, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_4[0]));
#line 534 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_20_20, 2) = ((MR_Box) (ll_backend__call_gen__V_25_25));
#line 534 "call_gen.m"
            }
#line 534 "call_gen.m"
            {
#line 534 "call_gen.m"
              ll_backend__call_gen__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 534 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_19_19, 0) = ((MR_Box) (ll_backend__call_gen__V_20_20));
#line 534 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_19_19, 1) = ((MR_Box) ((MR_String) "test for success"));
#line 534 "call_gen.m"
            }
#line 533 "call_gen.m"
            {
#line 533 "call_gen.m"
              ll_backend__call_gen__FailTestCode_12 = mercury__cord__singleton_1_f_0(ll_backend__call_gen__TypeCtorInfo_32_32, ((MR_Box) (ll_backend__call_gen__V_19_19)));
            }
#line 537 "call_gen.m"
            {
#line 537 "call_gen.m"
              ll_backend__code_info__generate_failure_3_p_0(&ll_backend__call_gen__FailCode_13, ll_backend__call_gen__STATE_VARIABLE_CI_18_18, ll_backend__call_gen__STATE_VARIABLE_CI_16);
            }
#line 539 "call_gen.m"
            {
#line 539 "call_gen.m"
              ll_backend__call_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 539 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_29_29, 1) = ((MR_Box) (ll_backend__call_gen__ContLab_11));
#line 539 "call_gen.m"
            }
#line 539 "call_gen.m"
            {
#line 539 "call_gen.m"
              ll_backend__call_gen__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 539 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_28_28, 0) = ((MR_Box) (ll_backend__call_gen__V_29_29));
#line 539 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_28_28, 1) = ((MR_Box) ((MR_String) ""));
#line 539 "call_gen.m"
            }
#line 538 "call_gen.m"
            {
#line 538 "call_gen.m"
              ll_backend__call_gen__ContLabelCode_14 = mercury__cord__singleton_1_f_0(ll_backend__call_gen__TypeCtorInfo_32_32, ((MR_Box) (ll_backend__call_gen__V_28_28)));
            }
#line 541 "call_gen.m"
            {
#line 541 "call_gen.m"
              ll_backend__call_gen__V_31_31 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_32_32, ll_backend__call_gen__FailCode_13, ll_backend__call_gen__ContLabelCode_14);
            }
#line 541 "call_gen.m"
            {
#line 541 "call_gen.m"
              *ll_backend__call_gen__FailHandlingCode_8 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_32_32, ll_backend__call_gen__FailTestCode_12, ll_backend__call_gen__V_31_31);
            }
#line 532 "call_gen.m"
          }
#line 527 "call_gen.m"
      }
#line 527 "call_gen.m"
    else
#line 546 "call_gen.m"
      {
#line 547 "call_gen.m"
        {
#line 547 "call_gen.m"
          *ll_backend__call_gen__FailHandlingCode_8 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 546 "call_gen.m"
        *ll_backend__call_gen__STATE_VARIABLE_CI_16 = ll_backend__call_gen__STATE_VARIABLE_CI_0_15;
#line 546 "call_gen.m"
      }
#line 527 "call_gen.m"
  }
#line 522 "call_gen.m"
}

#line 498 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__prepare_for_call_6_p_0(
#line 498 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_7,
#line 498 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_8,
#line 498 "call_gen.m"
  MR_Word * ll_backend__call_gen__CallModel_9,
#line 498 "call_gen.m"
  MR_Word * ll_backend__call_gen__TraceCode_10,
#line 498 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_14,
#line 498 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_15)
#line 498 "call_gen.m"
{
#line 501 "call_gen.m"
  {
#line 501 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 501 "call_gen.m"
    MR_Word ll_backend__call_gen__AllowLCO_12;
#line 501 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_16_16;

#line 502 "call_gen.m"
    {
#line 502 "call_gen.m"
      ll_backend__code_info__succip_is_used_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_14, &ll_backend__call_gen__STATE_VARIABLE_CI_16_16);
    }
#line 503 "call_gen.m"
    {
#line 503 "call_gen.m"
      ll_backend__call_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__call_gen__GoalInfo_8, (MR_Integer) 22);
    }
#line 505 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 504 "call_gen.m"
      ll_backend__call_gen__AllowLCO_12 = (MR_Integer) 0;
#line 505 "call_gen.m"
    else
#line 506 "call_gen.m"
      ll_backend__call_gen__AllowLCO_12 = (MR_Integer) 1;
#line 511 "call_gen.m"
    if ((ll_backend__call_gen__CodeModel_7 == (MR_Integer) 0))
#line 509 "call_gen.m"
      {
#line 510 "call_gen.m"
        {
#line 510 "call_gen.m"
          MR_Word base;
#line 510 "call_gen.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 510 "call_gen.m"
          *ll_backend__call_gen__CallModel_9 = base;
#line 510 "call_gen.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__call_gen__AllowLCO_12));
#line 510 "call_gen.m"
        }
#line 509 "call_gen.m"
        *ll_backend__call_gen__STATE_VARIABLE_CI_15 = ll_backend__call_gen__STATE_VARIABLE_CI_16_16;
#line 509 "call_gen.m"
      }
#line 511 "call_gen.m"
    else
#line 511 "call_gen.m"
    if ((ll_backend__call_gen__CodeModel_7 == (MR_Integer) 2))
#line 515 "call_gen.m"
      {
#line 515 "call_gen.m"
        MR_Word ll_backend__call_gen__TailCallStatus_13;

#line 516 "call_gen.m"
        {
#line 516 "call_gen.m"
          ll_backend__code_info__may_use_nondet_tailcall_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_16_16, &ll_backend__call_gen__TailCallStatus_13);
        }
#line 517 "call_gen.m"
        {
#line 517 "call_gen.m"
          MR_Word base;
#line 517 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 517 "call_gen.m"
          *ll_backend__call_gen__CallModel_9 = base;
#line 517 "call_gen.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__call_gen__TailCallStatus_13));
#line 517 "call_gen.m"
        }
#line 518 "call_gen.m"
        {
#line 518 "call_gen.m"
          ll_backend__code_info__set_resume_point_and_frame_to_unknown_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_16_16, ll_backend__call_gen__STATE_VARIABLE_CI_15);
        }
#line 515 "call_gen.m"
      }
#line 511 "call_gen.m"
    else
#line 512 "call_gen.m"
      {
#line 513 "call_gen.m"
        {
#line 513 "call_gen.m"
          MR_Word base;
#line 513 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 513 "call_gen.m"
          *ll_backend__call_gen__CallModel_9 = base;
#line 513 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__AllowLCO_12));
#line 513 "call_gen.m"
        }
#line 512 "call_gen.m"
        *ll_backend__call_gen__STATE_VARIABLE_CI_15 = ll_backend__call_gen__STATE_VARIABLE_CI_16_16;
#line 512 "call_gen.m"
      }
#line 520 "call_gen.m"
    {
#line 520 "call_gen.m"
      ll_backend__trace_gen__trace_prepare_for_call_2_p_0(*ll_backend__call_gen__STATE_VARIABLE_CI_15, ll_backend__call_gen__TraceCode_10);
#line 520 "call_gen.m"
      return;
    }
#line 501 "call_gen.m"
  }
#line 498 "call_gen.m"
}

#line 442 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generic_call_nonvar_setup_7_p_0(
#line 442 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 442 "call_gen.m"
  MR_Word ll_backend__call_gen__HoCallVariant_2,
#line 442 "call_gen.m"
  MR_Word ll_backend__call_gen__InVarsR_3,
#line 442 "call_gen.m"
  MR_Word ll_backend__call_gen__InVarsF_4,
#line 442 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_5,
#line 442 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_6,
#line 442 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_7)
#line 442 "call_gen.m"
{
#line 447 "call_gen.m"
  {
#line 447 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 447 "call_gen.m"
    if (((MR_tag((MR_Word) ll_backend__call_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 493 "call_gen.m"
      {
#line 494 "call_gen.m"
        {
#line 494 "call_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/7", (MR_String) "cast");
#line 494 "call_gen.m"
          return;
        }
#line 493 "call_gen.m"
      }
#line 447 "call_gen.m"
    else
#line 447 "call_gen.m"
    if (((MR_tag((MR_Word) ll_backend__call_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 463 "call_gen.m"
      {
#line 463 "call_gen.m"
        MR_Integer ll_backend__call_gen__Method_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 462 "call_gen.m"
        MR_Word ll_backend__call_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 462 "call_gen.m"
        MR_Word ll_backend__call_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 462 "call_gen.m"
        MR_Word ll_backend__call_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 3)));

#line 466 "call_gen.m"
        if ((ll_backend__call_gen__InVarsF_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 465 "call_gen.m"
          {
#line 465 "call_gen.m"
          }
#line 466 "call_gen.m"
        else
#line 467 "call_gen.m"
          {
#line 468 "call_gen.m"
            {
#line 468 "call_gen.m"
              mercury__require__sorry_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/7", (MR_String) "float input reg");
#line 468 "call_gen.m"
              return;
            }
#line 467 "call_gen.m"
          }
#line 477 "call_gen.m"
        if ((ll_backend__call_gen__HoCallVariant_2 == (MR_Integer) 0))
#line 471 "call_gen.m"
          {
#line 471 "call_gen.m"
            MR_Word ll_backend__call_gen__V_90_90;
#line 471 "call_gen.m"
            MR_Word ll_backend__call_gen__V_91_91;
#line 471 "call_gen.m"
            MR_Word ll_backend__call_gen__V_95_95;
#line 471 "call_gen.m"
            MR_Word ll_backend__call_gen__V_96_96;

#line 472 "call_gen.m"
            {
#line 472 "call_gen.m"
              ll_backend__code_info__clobber_regs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[2]), ll_backend__call_gen__STATE_VARIABLE_CI_0_6, ll_backend__call_gen__STATE_VARIABLE_CI_7);
            }
#line 474 "call_gen.m"
            {
#line 474 "call_gen.m"
              ll_backend__call_gen__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 474 "call_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_96_96, 0) = ((MR_Box) (ll_backend__call_gen__Method_37));
#line 474 "call_gen.m"
            }
#line 474 "call_gen.m"
            {
#line 474 "call_gen.m"
              ll_backend__call_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 474 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_95_95, 1) = ((MR_Box) (ll_backend__call_gen__V_96_96));
#line 474 "call_gen.m"
            }
#line 474 "call_gen.m"
            {
#line 474 "call_gen.m"
              ll_backend__call_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 474 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 474 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[1])));
#line 474 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_91_91, 2) = ((MR_Box) (ll_backend__call_gen__V_95_95));
#line 474 "call_gen.m"
            }
#line 474 "call_gen.m"
            {
#line 474 "call_gen.m"
              ll_backend__call_gen__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 474 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_90_90, 0) = ((MR_Box) (ll_backend__call_gen__V_91_91));
#line 474 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_90_90, 1) = ((MR_Box) ((MR_String) "Index of class method in typeclass info"));
#line 474 "call_gen.m"
            }
#line 473 "call_gen.m"
            {
#line 473 "call_gen.m"
              *ll_backend__call_gen__Code_5 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__call_gen__V_90_90)));
            }
#line 471 "call_gen.m"
          }
#line 477 "call_gen.m"
        else
#line 478 "call_gen.m"
          {
#line 478 "call_gen.m"
            MR_Integer ll_backend__call_gen__NumInVarsR_47;
#line 478 "call_gen.m"
            MR_Integer ll_backend__call_gen__NumInVars_49;
#line 478 "call_gen.m"
            MR_Word ll_backend__call_gen__V_65_65;
#line 478 "call_gen.m"
            MR_Word ll_backend__call_gen__V_66_66;
#line 478 "call_gen.m"
            MR_Word ll_backend__call_gen__V_67_67;
#line 478 "call_gen.m"
            MR_Word ll_backend__call_gen__V_71_71;
#line 478 "call_gen.m"
            MR_Word ll_backend__call_gen__V_72_72;
#line 478 "call_gen.m"
            MR_Word ll_backend__call_gen__V_74_74;
#line 478 "call_gen.m"
            MR_Word ll_backend__call_gen__V_75_75;
#line 478 "call_gen.m"
            MR_Word ll_backend__call_gen__V_76_76;
#line 478 "call_gen.m"
            MR_Word ll_backend__call_gen__V_80_80;
#line 478 "call_gen.m"
            MR_Word ll_backend__call_gen__V_81_81;

#line 479 "call_gen.m"
            {
#line 479 "call_gen.m"
              ll_backend__code_info__clobber_regs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[5]), ll_backend__call_gen__STATE_VARIABLE_CI_0_6, ll_backend__call_gen__STATE_VARIABLE_CI_7);
            }
#line 480 "call_gen.m"
            {
#line 480 "call_gen.m"
              mercury__list__length_2_p_0((MR_Word) &ll_backend__call_gen_scalar_common_1[0], ll_backend__call_gen__InVarsR_3, &ll_backend__call_gen__NumInVarsR_47);
            }
#line 483 "call_gen.m"
            {
#line 483 "call_gen.m"
              ll_backend__call_gen__NumInVars_49 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(ll_backend__call_gen__NumInVarsR_47, (MR_Integer) 0);
            }
#line 485 "call_gen.m"
            {
#line 485 "call_gen.m"
              ll_backend__call_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 485 "call_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_72_72, 0) = ((MR_Box) (ll_backend__call_gen__Method_37));
#line 485 "call_gen.m"
            }
#line 485 "call_gen.m"
            {
#line 485 "call_gen.m"
              ll_backend__call_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 485 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_71_71, 1) = ((MR_Box) (ll_backend__call_gen__V_72_72));
#line 485 "call_gen.m"
            }
#line 485 "call_gen.m"
            {
#line 485 "call_gen.m"
              ll_backend__call_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 485 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 485 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[1])));
#line 485 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_67_67, 2) = ((MR_Box) (ll_backend__call_gen__V_71_71));
#line 485 "call_gen.m"
            }
#line 485 "call_gen.m"
            {
#line 485 "call_gen.m"
              ll_backend__call_gen__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 485 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_66_66, 0) = ((MR_Box) (ll_backend__call_gen__V_67_67));
#line 485 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_66_66, 1) = ((MR_Box) ((MR_String) "Index of class method in typeclass info"));
#line 485 "call_gen.m"
            }
#line 487 "call_gen.m"
            {
#line 487 "call_gen.m"
              ll_backend__call_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 487 "call_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_81_81, 0) = ((MR_Box) (ll_backend__call_gen__NumInVars_49));
#line 487 "call_gen.m"
            }
#line 487 "call_gen.m"
            {
#line 487 "call_gen.m"
              ll_backend__call_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 487 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_80_80, 1) = ((MR_Box) (ll_backend__call_gen__V_81_81));
#line 487 "call_gen.m"
            }
#line 487 "call_gen.m"
            {
#line 487 "call_gen.m"
              ll_backend__call_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 487 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 487 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[3])));
#line 487 "call_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_76_76, 2) = ((MR_Box) (ll_backend__call_gen__V_80_80));
#line 487 "call_gen.m"
            }
#line 487 "call_gen.m"
            {
#line 487 "call_gen.m"
              ll_backend__call_gen__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 487 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_75_75, 0) = ((MR_Box) (ll_backend__call_gen__V_76_76));
#line 487 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_75_75, 1) = ((MR_Box) ((MR_String) "Assign number of immediate regular input arguments"));
#line 487 "call_gen.m"
            }
#line 489 "call_gen.m"
            {
#line 489 "call_gen.m"
              ll_backend__call_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "call_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_74_74, 0) = ((MR_Box) (ll_backend__call_gen__V_75_75));
#line 489 "call_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 489 "call_gen.m"
            }
#line 486 "call_gen.m"
            {
#line 486 "call_gen.m"
              ll_backend__call_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "call_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_65_65, 0) = ((MR_Box) (ll_backend__call_gen__V_66_66));
#line 486 "call_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_65_65, 1) = ((MR_Box) (ll_backend__call_gen__V_74_74));
#line 486 "call_gen.m"
            }
#line 484 "call_gen.m"
            {
#line 484 "call_gen.m"
              *ll_backend__call_gen__Code_5 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__call_gen__V_65_65);
            }
#line 478 "call_gen.m"
          }
#line 463 "call_gen.m"
      }
#line 447 "call_gen.m"
    else
#line 447 "call_gen.m"
    if (((MR_tag((MR_Word) ll_backend__call_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 491 "call_gen.m"
      {
#line 492 "call_gen.m"
        {
#line 492 "call_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/7", (MR_String) "event_call");
#line 492 "call_gen.m"
          return;
        }
#line 491 "call_gen.m"
      }
#line 447 "call_gen.m"
    else
#line 451 "call_gen.m"
    if ((ll_backend__call_gen__HoCallVariant_2 == (MR_Integer) 0))
#line 449 "call_gen.m"
      {
#line 450 "call_gen.m"
        {
#line 450 "call_gen.m"
          *ll_backend__call_gen__Code_5 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 449 "call_gen.m"
        *ll_backend__call_gen__STATE_VARIABLE_CI_7 = ll_backend__call_gen__STATE_VARIABLE_CI_0_6;
#line 449 "call_gen.m"
      }
#line 451 "call_gen.m"
    else
#line 452 "call_gen.m"
      {
#line 452 "call_gen.m"
        MR_Word ll_backend__call_gen__TypeInfo_121_121;
#line 452 "call_gen.m"
        MR_Integer ll_backend__call_gen__NumInVarsR_17;
#line 452 "call_gen.m"
        MR_Integer ll_backend__call_gen__NumInVarsF_18;
#line 452 "call_gen.m"
        MR_Integer ll_backend__call_gen__NumInVars_19;
#line 452 "call_gen.m"
        MR_Word ll_backend__call_gen__V_28_28;
#line 452 "call_gen.m"
        MR_Word ll_backend__call_gen__V_29_29;
#line 452 "call_gen.m"
        MR_Word ll_backend__call_gen__V_33_33;
#line 452 "call_gen.m"
        MR_Word ll_backend__call_gen__V_34_34;

#line 453 "call_gen.m"
        {
#line 453 "call_gen.m"
          ll_backend__code_info__clobber_regs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[2]), ll_backend__call_gen__STATE_VARIABLE_CI_0_6, ll_backend__call_gen__STATE_VARIABLE_CI_7);
        }
#line 3172 "ll_backend.call_gen.c"
        ll_backend__call_gen__TypeInfo_121_121 = (MR_Word) &ll_backend__call_gen_scalar_common_1[0];
#line 454 "call_gen.m"
        {
#line 454 "call_gen.m"
          mercury__list__length_2_p_0(ll_backend__call_gen__TypeInfo_121_121, ll_backend__call_gen__InVarsR_3, &ll_backend__call_gen__NumInVarsR_17);
        }
#line 455 "call_gen.m"
        {
#line 455 "call_gen.m"
          mercury__list__length_2_p_0(ll_backend__call_gen__TypeInfo_121_121, ll_backend__call_gen__InVarsF_4, &ll_backend__call_gen__NumInVarsF_18);
        }
#line 456 "call_gen.m"
        {
#line 456 "call_gen.m"
          ll_backend__call_gen__NumInVars_19 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(ll_backend__call_gen__NumInVarsR_17, ll_backend__call_gen__NumInVarsF_18);
        }
#line 458 "call_gen.m"
        {
#line 458 "call_gen.m"
          ll_backend__call_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 458 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_34_34, 0) = ((MR_Box) (ll_backend__call_gen__NumInVars_19));
#line 458 "call_gen.m"
        }
#line 458 "call_gen.m"
        {
#line 458 "call_gen.m"
          ll_backend__call_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 458 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 458 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_33_33, 1) = ((MR_Box) (ll_backend__call_gen__V_34_34));
#line 458 "call_gen.m"
        }
#line 458 "call_gen.m"
        {
#line 458 "call_gen.m"
          ll_backend__call_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 458 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 458 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[1])));
#line 458 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_29_29, 2) = ((MR_Box) (ll_backend__call_gen__V_33_33));
#line 458 "call_gen.m"
        }
#line 458 "call_gen.m"
        {
#line 458 "call_gen.m"
          ll_backend__call_gen__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 458 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_28_28, 0) = ((MR_Box) (ll_backend__call_gen__V_29_29));
#line 458 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_28_28, 1) = ((MR_Box) ((MR_String) "Assign number of immediate input arguments"));
#line 458 "call_gen.m"
        }
#line 457 "call_gen.m"
        {
#line 457 "call_gen.m"
          *ll_backend__call_gen__Code_5 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__call_gen__V_28_28)));
        }
#line 452 "call_gen.m"
      }
#line 447 "call_gen.m"
  }
#line 442 "call_gen.m"
}

#line 363 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__extra_livevals_from_3_p_0(
#line 363 "call_gen.m"
  MR_Integer ll_backend__call_gen__Reg_4,
#line 363 "call_gen.m"
  MR_Integer ll_backend__call_gen__FirstInput_5,
#line 363 "call_gen.m"
  MR_Word * ll_backend__call_gen__ExtraLiveVals_6)
#line 363 "call_gen.m"
{
#line 370 "call_gen.m"
  {
#line 370 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded = (ll_backend__call_gen__Reg_4 < ll_backend__call_gen__FirstInput_5);

#line 370 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 367 "call_gen.m"
      {
#line 367 "call_gen.m"
        MR_Word ll_backend__call_gen__ExtraLiveVals1_7;
#line 367 "call_gen.m"
        MR_Integer ll_backend__call_gen__NextReg_8;
#line 367 "call_gen.m"
        MR_Word ll_backend__call_gen__V_9_9;

#line 367 "call_gen.m"
        {
#line 367 "call_gen.m"
          ll_backend__call_gen__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_9_9, 0) = ((MR_Box) ((MR_Integer) 0));
#line 367 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_9_9, 1) = ((MR_Box) (ll_backend__call_gen__Reg_4));
#line 367 "call_gen.m"
        }
#line 368 "call_gen.m"
        ll_backend__call_gen__NextReg_8 = (ll_backend__call_gen__Reg_4 + (MR_Integer) 1);
#line 369 "call_gen.m"
        {
#line 369 "call_gen.m"
          ll_backend__call_gen__extra_livevals_from_3_p_0(ll_backend__call_gen__NextReg_8, ll_backend__call_gen__FirstInput_5, &ll_backend__call_gen__ExtraLiveVals1_7);
        }
#line 367 "call_gen.m"
        {
#line 367 "call_gen.m"
          MR_Word base;
#line 367 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "call_gen.m"
          *ll_backend__call_gen__ExtraLiveVals_6 = base;
#line 367 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_9_9));
#line 367 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__ExtraLiveVals1_7));
#line 367 "call_gen.m"
        }
#line 367 "call_gen.m"
      }
#line 370 "call_gen.m"
    else
#line 371 "call_gen.m"
      *ll_backend__call_gen__ExtraLiveVals_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 370 "call_gen.m"
  }
#line 363 "call_gen.m"
}

#line 358 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__extra_livevals_2_p_0(
#line 358 "call_gen.m"
  MR_Integer ll_backend__call_gen__FirstInput_3,
#line 358 "call_gen.m"
  MR_Word * ll_backend__call_gen__ExtraLiveVals_4)
#line 358 "call_gen.m"
{
#line 360 "call_gen.m"
  {
#line 360 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 361 "call_gen.m"
    {
#line 361 "call_gen.m"
      ll_backend__call_gen__extra_livevals_from_3_p_0((MR_Integer) 1, ll_backend__call_gen__FirstInput_3, ll_backend__call_gen__ExtraLiveVals_4);
#line 361 "call_gen.m"
      return;
    }
#line 360 "call_gen.m"
  }
#line 358 "call_gen.m"
}

#line 322 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_event_attributes_6_p_0(
#line 322 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 322 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_Vars_0_2,
#line 322 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__3_3,
#line 322 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__4_4,
#line 322 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_5,
#line 322 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_6)
#line 322 "call_gen.m"
{
#line 326 "call_gen.m"
  {
#line 326 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 326 "call_gen.m"
    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 326 "call_gen.m"
      {
#line 326 "call_gen.m"
        *ll_backend__call_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 326 "call_gen.m"
        *ll_backend__call_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 330 "call_gen.m"
        if ((ll_backend__call_gen__STATE_VARIABLE_Vars_0_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "call_gen.m"
          {
#line 331 "call_gen.m"
          }
#line 330 "call_gen.m"
        else
#line 328 "call_gen.m"
          {
#line 329 "call_gen.m"
            {
#line 329 "call_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_event_attributes\'/6", (MR_String) "var");
#line 329 "call_gen.m"
              return;
            }
#line 328 "call_gen.m"
          }
#line 326 "call_gen.m"
        *ll_backend__call_gen__STATE_VARIABLE_CI_6 = ll_backend__call_gen__STATE_VARIABLE_CI_0_5;
#line 326 "call_gen.m"
      }
#line 326 "call_gen.m"
    else
#line 334 "call_gen.m"
      {
#line 334 "call_gen.m"
        MR_Word ll_backend__call_gen__Attribute_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 334 "call_gen.m"
        MR_Word ll_backend__call_gen__Attributes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 334 "call_gen.m"
        MR_Word ll_backend__call_gen__MaybeUserAttr_20;
#line 334 "call_gen.m"
        MR_Word ll_backend__call_gen__MaybeUserAttrs_21;
#line 334 "call_gen.m"
        MR_Word ll_backend__call_gen__Code_22;
#line 334 "call_gen.m"
        MR_Word ll_backend__call_gen__Codes_23;
#line 334 "call_gen.m"
        MR_Word ll_backend__call_gen__SynthCall_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_17, (MR_Integer) 4)));
#line 334 "call_gen.m"
        MR_Word ll_backend__call_gen__STATE_VARIABLE_Vars_36_36;
#line 334 "call_gen.m"
        MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_37_37;
#line 335 "call_gen.m"
        MR_Integer ll_backend__call_gen__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_17, (MR_Integer) 0)));
#line 335 "call_gen.m"
        MR_String ll_backend__call_gen__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_17, (MR_Integer) 1)));
#line 335 "call_gen.m"
        MR_Word ll_backend__call_gen__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_17, (MR_Integer) 2)));
#line 335 "call_gen.m"
        MR_Word ll_backend__call_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_17, (MR_Integer) 3)));

#line 347 "call_gen.m"
        if ((ll_backend__call_gen__SynthCall_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 343 "call_gen.m"
          if ((ll_backend__call_gen__STATE_VARIABLE_Vars_0_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 344 "call_gen.m"
            {
#line 345 "call_gen.m"
              {
#line 345 "call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_event_attributes\'/6", (MR_String) "no var");
#line 345 "call_gen.m"
                return;
              }
#line 344 "call_gen.m"
            }
#line 343 "call_gen.m"
          else
#line 339 "call_gen.m"
            {
#line 339 "call_gen.m"
              MR_Word ll_backend__call_gen__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__STATE_VARIABLE_Vars_0_2, (MR_Integer) 0)));
#line 339 "call_gen.m"
              MR_Word ll_backend__call_gen__Rval_27;
#line 339 "call_gen.m"
              MR_Word ll_backend__call_gen__UserAttr_28;

#line 339 "call_gen.m"
              ll_backend__call_gen__STATE_VARIABLE_Vars_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__STATE_VARIABLE_Vars_0_2, (MR_Integer) 1)));
#line 340 "call_gen.m"
              {
#line 340 "call_gen.m"
                ll_backend__code_info__produce_variable_5_p_0(ll_backend__call_gen__Var_26, &ll_backend__call_gen__Code_22, &ll_backend__call_gen__Rval_27, ll_backend__call_gen__STATE_VARIABLE_CI_0_5, &ll_backend__call_gen__STATE_VARIABLE_CI_37_37);
              }
#line 341 "call_gen.m"
              {
#line 341 "call_gen.m"
                ll_backend__call_gen__UserAttr_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 341 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__UserAttr_28, 0) = ((MR_Box) (ll_backend__call_gen__Rval_27));
#line 341 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__UserAttr_28, 1) = ((MR_Box) (ll_backend__call_gen__Var_26));
#line 341 "call_gen.m"
              }
#line 342 "call_gen.m"
              {
#line 342 "call_gen.m"
                ll_backend__call_gen__MaybeUserAttr_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 342 "call_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeUserAttr_20, 0) = ((MR_Box) (ll_backend__call_gen__UserAttr_28));
#line 342 "call_gen.m"
              }
#line 339 "call_gen.m"
            }
#line 347 "call_gen.m"
        else
#line 348 "call_gen.m"
          {
#line 349 "call_gen.m"
            ll_backend__call_gen__MaybeUserAttr_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 350 "call_gen.m"
            {
#line 350 "call_gen.m"
              ll_backend__call_gen__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 348 "call_gen.m"
            ll_backend__call_gen__STATE_VARIABLE_Vars_36_36 = ll_backend__call_gen__STATE_VARIABLE_Vars_0_2;
#line 348 "call_gen.m"
            ll_backend__call_gen__STATE_VARIABLE_CI_37_37 = ll_backend__call_gen__STATE_VARIABLE_CI_0_5;
#line 348 "call_gen.m"
          }
#line 352 "call_gen.m"
        {
#line 352 "call_gen.m"
          ll_backend__call_gen__generate_event_attributes_6_p_0(ll_backend__call_gen__Attributes_18, ll_backend__call_gen__STATE_VARIABLE_Vars_36_36, &ll_backend__call_gen__MaybeUserAttrs_21, &ll_backend__call_gen__Codes_23, ll_backend__call_gen__STATE_VARIABLE_CI_37_37, ll_backend__call_gen__STATE_VARIABLE_CI_6);
        }
#line 334 "call_gen.m"
        {
#line 334 "call_gen.m"
          MR_Word base;
#line 334 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "call_gen.m"
          *ll_backend__call_gen__HeadVar__3_3 = base;
#line 334 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__MaybeUserAttr_20));
#line 334 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__MaybeUserAttrs_21));
#line 334 "call_gen.m"
        }
#line 334 "call_gen.m"
        {
#line 334 "call_gen.m"
          MR_Word base;
#line 334 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "call_gen.m"
          *ll_backend__call_gen__HeadVar__4_4 = base;
#line 334 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__Code_22));
#line 334 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__Codes_23));
#line 334 "call_gen.m"
        }
#line 334 "call_gen.m"
      }
#line 326 "call_gen.m"
  }
#line 322 "call_gen.m"
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
#line 794 "call_gen.m"
  {
#line 794 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 794 "call_gen.m"
    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 794 "call_gen.m"
      *ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 794 "call_gen.m"
    else
#line 795 "call_gen.m"
      {
#line 795 "call_gen.m"
        MR_Word ll_backend__call_gen__Var_3;
#line 795 "call_gen.m"
        MR_Word ll_backend__call_gen__Loc_4;
#line 795 "call_gen.m"
        MR_Word ll_backend__call_gen__Mode_5;
#line 795 "call_gen.m"
        MR_Word ll_backend__call_gen__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 795 "call_gen.m"
        MR_Word ll_backend__call_gen__Vs0_8;
#line 795 "call_gen.m"
        MR_Word ll_backend__call_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 795 "call_gen.m"
        MR_Word ll_backend__call_gen__V_10_10;

#line 795 "call_gen.m"
        ll_backend__call_gen__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_9_9, (MR_Integer) 0)));
#line 795 "call_gen.m"
        ll_backend__call_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_9_9, (MR_Integer) 1)));
#line 795 "call_gen.m"
        ll_backend__call_gen__Loc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_10_10, (MR_Integer) 0)));
#line 795 "call_gen.m"
        ll_backend__call_gen__Mode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_10_10, (MR_Integer) 1)));
#line 796 "call_gen.m"
        {
#line 796 "call_gen.m"
          ll_backend__call_gen__output_arg_locs_2_p_0(ll_backend__call_gen__Args_6, &ll_backend__call_gen__Vs0_8);
        }
#line 800 "call_gen.m"
        if ((ll_backend__call_gen__Mode_5 == (MR_Integer) 1))
#line 798 "call_gen.m"
          {
#line 798 "call_gen.m"
            MR_Word ll_backend__call_gen__V_11_11;

#line 799 "call_gen.m"
            {
#line 799 "call_gen.m"
              ll_backend__call_gen__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 799 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_11_11, 0) = ((MR_Box) (ll_backend__call_gen__Var_3));
#line 799 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_11_11, 1) = ((MR_Box) (ll_backend__call_gen__Loc_4));
#line 799 "call_gen.m"
            }
#line 799 "call_gen.m"
            {
#line 799 "call_gen.m"
              MR_Word base;
#line 799 "call_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "call_gen.m"
              *ll_backend__call_gen__HeadVar__2_2 = base;
#line 799 "call_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_11_11));
#line 799 "call_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__Vs0_8));
#line 799 "call_gen.m"
            }
#line 798 "call_gen.m"
          }
#line 800 "call_gen.m"
        else
#line 804 "call_gen.m"
          *ll_backend__call_gen__HeadVar__2_2 = ll_backend__call_gen__Vs0_8;
#line 795 "call_gen.m"
      }
#line 794 "call_gen.m"
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
#line 781 "call_gen.m"
  {
#line 781 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 781 "call_gen.m"
    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 781 "call_gen.m"
      *ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 781 "call_gen.m"
    else
#line 782 "call_gen.m"
      {
#line 782 "call_gen.m"
        MR_Word ll_backend__call_gen__Var_3;
#line 782 "call_gen.m"
        MR_Word ll_backend__call_gen__Loc_4;
#line 782 "call_gen.m"
        MR_Word ll_backend__call_gen__Mode_5;
#line 782 "call_gen.m"
        MR_Word ll_backend__call_gen__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 782 "call_gen.m"
        MR_Word ll_backend__call_gen__Vs0_8;
#line 782 "call_gen.m"
        MR_Word ll_backend__call_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 782 "call_gen.m"
        MR_Word ll_backend__call_gen__V_10_10;

#line 782 "call_gen.m"
        ll_backend__call_gen__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_9_9, (MR_Integer) 0)));
#line 782 "call_gen.m"
        ll_backend__call_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_9_9, (MR_Integer) 1)));
#line 782 "call_gen.m"
        ll_backend__call_gen__Loc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_10_10, (MR_Integer) 0)));
#line 782 "call_gen.m"
        ll_backend__call_gen__Mode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_10_10, (MR_Integer) 1)));
#line 783 "call_gen.m"
        {
#line 783 "call_gen.m"
          ll_backend__call_gen__input_arg_locs_2_p_0(ll_backend__call_gen__Args_6, &ll_backend__call_gen__Vs0_8);
        }
#line 787 "call_gen.m"
        if ((ll_backend__call_gen__Mode_5 == (MR_Integer) 0))
#line 785 "call_gen.m"
          {
#line 785 "call_gen.m"
            MR_Word ll_backend__call_gen__V_11_11;

#line 786 "call_gen.m"
            {
#line 786 "call_gen.m"
              ll_backend__call_gen__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 786 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_11_11, 0) = ((MR_Box) (ll_backend__call_gen__Var_3));
#line 786 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_11_11, 1) = ((MR_Box) (ll_backend__call_gen__Loc_4));
#line 786 "call_gen.m"
            }
#line 786 "call_gen.m"
            {
#line 786 "call_gen.m"
              MR_Word base;
#line 786 "call_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "call_gen.m"
              *ll_backend__call_gen__HeadVar__2_2 = base;
#line 786 "call_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_11_11));
#line 786 "call_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__Vs0_8));
#line 786 "call_gen.m"
            }
#line 785 "call_gen.m"
          }
#line 787 "call_gen.m"
        else
#line 791 "call_gen.m"
          *ll_backend__call_gen__HeadVar__2_2 = ll_backend__call_gen__Vs0_8;
#line 782 "call_gen.m"
      }
#line 781 "call_gen.m"
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
#line 377 "call_gen.m"
  {
#line 377 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 377 "call_gen.m"
    if (((MR_tag((MR_Word) ll_backend__call_gen__GenericCall_10)) == (MR_mktag((MR_Integer) 1))))
#line 396 "call_gen.m"
      {
#line 396 "call_gen.m"
        MR_Word ll_backend__call_gen__TCVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__GenericCall_10, (MR_Integer) 0)));
#line 396 "call_gen.m"
        MR_Word ll_backend__call_gen__V_31_31;
#line 396 "call_gen.m"
        MR_Integer ll_backend__call_gen__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__GenericCall_10, (MR_Integer) 1)));
#line 396 "call_gen.m"
        MR_Word ll_backend__call_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__GenericCall_10, (MR_Integer) 2)));
#line 396 "call_gen.m"
        MR_Word ll_backend__call_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__GenericCall_10, (MR_Integer) 3)));

#line 398 "call_gen.m"
        {
#line 398 "call_gen.m"
          ll_backend__call_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_31_31, 0) = ((MR_Box) (ll_backend__call_gen__TCVar_23));
#line 398 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_31_31, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_1[7]));
#line 398 "call_gen.m"
        }
#line 398 "call_gen.m"
        {
#line 398 "call_gen.m"
          MR_Word base;
#line 398 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "call_gen.m"
          *ll_backend__call_gen__SpecifierArgInfos_14 = base;
#line 398 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_31_31));
#line 398 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 398 "call_gen.m"
        }
#line 400 "call_gen.m"
        ll_backend__call_gen__succeeded = (ll_backend__call_gen__NumInputArgsF_12 == (MR_Integer) 0);
#line 416 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 402 "call_gen.m"
          {
#line 402 "call_gen.m"
            MR_Integer ll_backend__call_gen__MaxSpec_52;

#line 401 "call_gen.m"
            {
#line 401 "call_gen.m"
              libs__globals__lookup_int_option_3_p_0(ll_backend__call_gen__Globals_9, (MR_Integer) 317, &ll_backend__call_gen__MaxSpec_52);
            }
#line 404 "call_gen.m"
            ll_backend__call_gen__succeeded = (ll_backend__call_gen__MaxSpec_52 >= (MR_Integer) 0);
#line 404 "call_gen.m"
            if (ll_backend__call_gen__succeeded)
#line 405 "call_gen.m"
              ll_backend__call_gen__succeeded = (ll_backend__call_gen__NumInputArgsR_11 <= ll_backend__call_gen__MaxSpec_52);
#line 411 "call_gen.m"
            if (ll_backend__call_gen__succeeded)
#line 408 "call_gen.m"
              {
#line 408 "call_gen.m"
                MR_Word ll_backend__call_gen__V_37_37;

#line 408 "call_gen.m"
                {
#line 408 "call_gen.m"
                  ll_backend__call_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 408 "call_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_37_37, 0) = ((MR_Box) (ll_backend__call_gen__NumInputArgsR_11));
#line 408 "call_gen.m"
                }
#line 407 "call_gen.m"
                {
#line 407 "call_gen.m"
                  MR_Word base;
#line 407 "call_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "call_gen.m"
                  *ll_backend__call_gen__CodeAddr_13 = base;
#line 407 "call_gen.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 407 "call_gen.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__call_gen__V_37_37));
#line 407 "call_gen.m"
                }
#line 409 "call_gen.m"
                *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 0;
#line 410 "call_gen.m"
                *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 3;
#line 408 "call_gen.m"
              }
#line 411 "call_gen.m"
            else
#line 412 "call_gen.m"
              {
#line 412 "call_gen.m"
                *ll_backend__call_gen__CodeAddr_13 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__call_gen_scalar_common_1[8]);
#line 413 "call_gen.m"
                *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 1;
#line 414 "call_gen.m"
                *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 4;
#line 412 "call_gen.m"
              }
#line 402 "call_gen.m"
          }
#line 416 "call_gen.m"
        else
#line 417 "call_gen.m"
          {
#line 417 "call_gen.m"
            {
#line 417 "call_gen.m"
              mercury__require__sorry_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generic_call_info\'/8", (MR_String) "float reg inputs");
#line 417 "call_gen.m"
              return;
            }
#line 417 "call_gen.m"
          }
#line 396 "call_gen.m"
      }
#line 377 "call_gen.m"
    else
#line 377 "call_gen.m"
    if (((MR_tag((MR_Word) ll_backend__call_gen__GenericCall_10)) == (MR_mktag((MR_Integer) 0))))
#line 377 "call_gen.m"
      {
#line 377 "call_gen.m"
        MR_Word ll_backend__call_gen__PredVar_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__GenericCall_10, (MR_Integer) 0)));
#line 377 "call_gen.m"
        MR_Integer ll_backend__call_gen__MaxSpec_22;
#line 377 "call_gen.m"
        MR_Word ll_backend__call_gen__V_44_44;
#line 377 "call_gen.m"
        MR_Word ll_backend__call_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__GenericCall_10, (MR_Integer) 1)));
#line 377 "call_gen.m"
        MR_Word ll_backend__call_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__GenericCall_10, (MR_Integer) 2)));
#line 377 "call_gen.m"
        MR_Integer ll_backend__call_gen__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__GenericCall_10, (MR_Integer) 3)));

#line 379 "call_gen.m"
        {
#line 379 "call_gen.m"
          ll_backend__call_gen__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 379 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_44_44, 0) = ((MR_Box) (ll_backend__call_gen__PredVar_17));
#line 379 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_44_44, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_1[7]));
#line 379 "call_gen.m"
        }
#line 379 "call_gen.m"
        {
#line 379 "call_gen.m"
          MR_Word base;
#line 379 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 379 "call_gen.m"
          *ll_backend__call_gen__SpecifierArgInfos_14 = base;
#line 379 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_44_44));
#line 379 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "call_gen.m"
        }
#line 380 "call_gen.m"
        {
#line 380 "call_gen.m"
          libs__globals__lookup_int_option_3_p_0(ll_backend__call_gen__Globals_9, (MR_Integer) 316, &ll_backend__call_gen__MaxSpec_22);
        }
#line 383 "call_gen.m"
        ll_backend__call_gen__succeeded = (ll_backend__call_gen__MaxSpec_22 >= (MR_Integer) 0);
#line 383 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 383 "call_gen.m"
          {
#line 384 "call_gen.m"
            ll_backend__call_gen__succeeded = (ll_backend__call_gen__NumInputArgsR_11 <= ll_backend__call_gen__MaxSpec_22);
#line 383 "call_gen.m"
            if (ll_backend__call_gen__succeeded)
#line 385 "call_gen.m"
              ll_backend__call_gen__succeeded = (ll_backend__call_gen__NumInputArgsF_12 == (MR_Integer) 0);
#line 383 "call_gen.m"
          }
#line 390 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 387 "call_gen.m"
          {
#line 387 "call_gen.m"
            MR_Word ll_backend__call_gen__V_50_50;

#line 387 "call_gen.m"
            {
#line 387 "call_gen.m"
              ll_backend__call_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 387 "call_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_50_50, 0) = ((MR_Box) (ll_backend__call_gen__NumInputArgsR_11));
#line 387 "call_gen.m"
            }
#line 387 "call_gen.m"
            {
#line 387 "call_gen.m"
              MR_Word base;
#line 387 "call_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "call_gen.m"
              *ll_backend__call_gen__CodeAddr_13 = base;
#line 387 "call_gen.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 387 "call_gen.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__call_gen__V_50_50));
#line 387 "call_gen.m"
            }
#line 388 "call_gen.m"
            *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 0;
#line 389 "call_gen.m"
            *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 2;
#line 387 "call_gen.m"
          }
#line 390 "call_gen.m"
        else
#line 391 "call_gen.m"
          {
#line 391 "call_gen.m"
            *ll_backend__call_gen__CodeAddr_13 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__call_gen_scalar_common_1[9]);
#line 392 "call_gen.m"
            *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 1;
#line 393 "call_gen.m"
            *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 3;
#line 391 "call_gen.m"
          }
#line 377 "call_gen.m"
      }
#line 377 "call_gen.m"
    else
#line 423 "call_gen.m"
      {
#line 424 "call_gen.m"
        *ll_backend__call_gen__CodeAddr_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 425 "call_gen.m"
        *ll_backend__call_gen__SpecifierArgInfos_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 426 "call_gen.m"
        *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 1;
#line 427 "call_gen.m"
        *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 1;
#line 423 "call_gen.m"
      }
#line 377 "call_gen.m"
  }
#line 53 "call_gen.m"
}

#line 690 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_builtin_7_p_0_1(
#line 690 "call_gen.m"
  MR_Box ll_backend__call_gen__closure_arg,
#line 690 "call_gen.m"
  MR_Box ll_backend__call_gen__wrapper_arg_1,
#line 690 "call_gen.m"
  MR_Box ll_backend__call_gen__wrapper_arg_2,
#line 690 "call_gen.m"
  MR_Box * ll_backend__call_gen__wrapper_arg_3)
#line 690 "call_gen.m"
{
#line 690 "call_gen.m"
  {
#line 690 "call_gen.m"
    MR_Box ll_backend__call_gen__closure = ll_backend__call_gen__closure_arg;
#line 690 "call_gen.m"
    MR_Word ll_backend__call_gen__conv0_HeadVar__3_3;

#line 690 "call_gen.m"
    {
#line 690 "call_gen.m"
      ll_backend__code_info__magically_put_var_in_unused_reg_3_p_0(((MR_Word) ll_backend__call_gen__wrapper_arg_1), ((MR_Word) ll_backend__call_gen__wrapper_arg_2), &ll_backend__call_gen__conv0_HeadVar__3_3);
    }
#line 690 "call_gen.m"
    *ll_backend__call_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__call_gen__conv0_HeadVar__3_3));
#line 690 "call_gen.m"
  }
#line 690 "call_gen.m"
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
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_39,
#line 42 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_40)
#line 42 "call_gen.m"
{
#line 667 "call_gen.m"
  {
#line 667 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 667 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeInfo_67_67;
#line 667 "call_gen.m"
    MR_Word ll_backend__call_gen__ModuleInfo_14;
#line 667 "call_gen.m"
    MR_Word ll_backend__call_gen__ModuleName_15;
#line 667 "call_gen.m"
    MR_String ll_backend__call_gen__PredName_16;
#line 667 "call_gen.m"
    MR_Word ll_backend__call_gen__SimpleCode_17;

#line 668 "call_gen.m"
    {
#line 668 "call_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_39, &ll_backend__call_gen__ModuleInfo_14);
    }
#line 669 "call_gen.m"
    {
#line 669 "call_gen.m"
      ll_backend__call_gen__ModuleName_15 = hlds__hlds_module__predicate_module_2_f_0(ll_backend__call_gen__ModuleInfo_14, ll_backend__call_gen__PredId_9);
    }
#line 670 "call_gen.m"
    {
#line 670 "call_gen.m"
      ll_backend__call_gen__PredName_16 = hlds__hlds_module__predicate_name_2_f_0(ll_backend__call_gen__ModuleInfo_14, ll_backend__call_gen__PredId_9);
    }
#line 4078 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeInfo_67_67 = (MR_Word) &ll_backend__call_gen_scalar_common_1[0];
#line 671 "call_gen.m"
    {
#line 671 "call_gen.m"
      backend_libs__builtin_ops__translate_builtin_5_p_0(ll_backend__call_gen__TypeInfo_67_67, ll_backend__call_gen__ModuleName_15, ll_backend__call_gen__PredName_16, ll_backend__call_gen__ProcId_10, ll_backend__call_gen__Args_11, &ll_backend__call_gen__SimpleCode_17);
    }
#line 693 "call_gen.m"
    if ((ll_backend__call_gen__CodeModel_8 == (MR_Integer) 0))
#line 678 "call_gen.m"
      if (((MR_tag((MR_Word) ll_backend__call_gen__SimpleCode_17)) == (MR_mktag((MR_Integer) 0))))
#line 676 "call_gen.m"
        {
#line 676 "call_gen.m"
          MR_Word ll_backend__call_gen__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__SimpleCode_17, (MR_Integer) 0)));
#line 676 "call_gen.m"
          MR_Word ll_backend__call_gen__AssignExpr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__SimpleCode_17, (MR_Integer) 1)));

#line 722 "call_gen.m"
          {
#line 722 "call_gen.m"
            ll_backend__call_gen__succeeded = ll_backend__code_info__variable_is_forward_live_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_39, ll_backend__call_gen__Var_18);
          }
#line 725 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 723 "call_gen.m"
            {
#line 723 "call_gen.m"
              MR_Word ll_backend__call_gen__Rval_81;

#line 723 "call_gen.m"
              {
#line 723 "call_gen.m"
                ll_backend__call_gen__Rval_81 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__AssignExpr_19);
              }
#line 724 "call_gen.m"
              {
#line 724 "call_gen.m"
                ll_backend__code_info__assign_expr_to_var_5_p_0(ll_backend__call_gen__Var_18, ll_backend__call_gen__Rval_81, ll_backend__call_gen__Code_12, ll_backend__call_gen__STATE_VARIABLE_CI_0_39, ll_backend__call_gen__STATE_VARIABLE_CI_40);
#line 724 "call_gen.m"
                return;
              }
#line 723 "call_gen.m"
            }
#line 725 "call_gen.m"
          else
#line 726 "call_gen.m"
            {
#line 726 "call_gen.m"
              {
#line 726 "call_gen.m"
                *ll_backend__call_gen__Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 726 "call_gen.m"
              *ll_backend__call_gen__STATE_VARIABLE_CI_40 = ll_backend__call_gen__STATE_VARIABLE_CI_0_39;
#line 726 "call_gen.m"
            }
#line 676 "call_gen.m"
        }
#line 678 "call_gen.m"
      else
#line 678 "call_gen.m"
      if (((MR_tag((MR_Word) ll_backend__call_gen__SimpleCode_17)) == (MR_mktag((MR_Integer) 3))))
#line 689 "call_gen.m"
        {
#line 689 "call_gen.m"
          MR_Word ll_backend__call_gen__DefinedVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__SimpleCode_17, (MR_Integer) 0)));
#line 690 "call_gen.m"
          MR_Box ll_backend__call_gen__conv1_STATE_VARIABLE_CI_40;

#line 690 "call_gen.m"
          {
#line 690 "call_gen.m"
            mercury__list__foldl_4_p_0(ll_backend__call_gen__TypeInfo_67_67, (MR_Word) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0, (MR_Word) &ll_backend__call_gen_scalar_common_2[1], ll_backend__call_gen__DefinedVars_29, ((MR_Box) (ll_backend__call_gen__STATE_VARIABLE_CI_0_39)), &ll_backend__call_gen__conv1_STATE_VARIABLE_CI_40);
          }
#line 690 "call_gen.m"
          *ll_backend__call_gen__STATE_VARIABLE_CI_40 = ((MR_Word) ll_backend__call_gen__conv1_STATE_VARIABLE_CI_40);
#line 691 "call_gen.m"
          {
#line 691 "call_gen.m"
            *ll_backend__call_gen__Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
#line 689 "call_gen.m"
        }
#line 678 "call_gen.m"
      else
#line 678 "call_gen.m"
      if (((MR_tag((MR_Word) ll_backend__call_gen__SimpleCode_17)) == (MR_mktag((MR_Integer) 1))))
#line 679 "call_gen.m"
        {
#line 679 "call_gen.m"
          MR_Word ll_backend__call_gen__TypeCtorInfo_68_68;
#line 679 "call_gen.m"
          MR_Word ll_backend__call_gen__AddrVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__SimpleCode_17, (MR_Integer) 0)));
#line 679 "call_gen.m"
          MR_Word ll_backend__call_gen__ValueVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__SimpleCode_17, (MR_Integer) 1)));
#line 679 "call_gen.m"
          MR_Word ll_backend__call_gen__AddrVarCode_22;
#line 679 "call_gen.m"
          MR_Word ll_backend__call_gen__AddrRval_23;
#line 679 "call_gen.m"
          MR_Word ll_backend__call_gen__ValueVarCode_24;
#line 679 "call_gen.m"
          MR_Word ll_backend__call_gen__ValueRval_25;
#line 679 "call_gen.m"
          MR_Word ll_backend__call_gen__StoreInstr_26;
#line 679 "call_gen.m"
          MR_Word ll_backend__call_gen__StoreCode_27;
#line 679 "call_gen.m"
          MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_60_60;
#line 679 "call_gen.m"
          MR_Word ll_backend__call_gen__V_62_62;
#line 679 "call_gen.m"
          MR_Word ll_backend__call_gen__V_63_63;
#line 679 "call_gen.m"
          MR_Word ll_backend__call_gen__V_65_65;

#line 680 "call_gen.m"
          {
#line 680 "call_gen.m"
            ll_backend__code_info__produce_variable_5_p_0(ll_backend__call_gen__AddrVar_20, &ll_backend__call_gen__AddrVarCode_22, &ll_backend__call_gen__AddrRval_23, ll_backend__call_gen__STATE_VARIABLE_CI_0_39, &ll_backend__call_gen__STATE_VARIABLE_CI_60_60);
          }
#line 681 "call_gen.m"
          {
#line 681 "call_gen.m"
            ll_backend__code_info__produce_variable_5_p_0(ll_backend__call_gen__ValueVar_21, &ll_backend__call_gen__ValueVarCode_24, &ll_backend__call_gen__ValueRval_25, ll_backend__call_gen__STATE_VARIABLE_CI_60_60, ll_backend__call_gen__STATE_VARIABLE_CI_40);
          }
#line 682 "call_gen.m"
          {
#line 682 "call_gen.m"
            ll_backend__call_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "call_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 682 "call_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_63_63, 1) = ((MR_Box) (ll_backend__call_gen__AddrRval_23));
#line 682 "call_gen.m"
          }
#line 682 "call_gen.m"
          {
#line 682 "call_gen.m"
            ll_backend__call_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 682 "call_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 682 "call_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_62_62, 1) = ((MR_Box) (ll_backend__call_gen__V_63_63));
#line 682 "call_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_62_62, 2) = ((MR_Box) (ll_backend__call_gen__ValueRval_25));
#line 682 "call_gen.m"
          }
#line 682 "call_gen.m"
          {
#line 682 "call_gen.m"
            ll_backend__call_gen__StoreInstr_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 682 "call_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__call_gen__StoreInstr_26, 0) = ((MR_Box) (ll_backend__call_gen__V_62_62));
#line 682 "call_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__call_gen__StoreInstr_26, 1) = ((MR_Box) ((MR_String) ""));
#line 682 "call_gen.m"
          }
#line 4237 "ll_backend.call_gen.c"
          ll_backend__call_gen__TypeCtorInfo_68_68 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 683 "call_gen.m"
          {
#line 683 "call_gen.m"
            ll_backend__call_gen__StoreCode_27 = mercury__cord__singleton_1_f_0(ll_backend__call_gen__TypeCtorInfo_68_68, ((MR_Box) (ll_backend__call_gen__StoreInstr_26)));
          }
#line 684 "call_gen.m"
          {
#line 684 "call_gen.m"
            ll_backend__call_gen__V_65_65 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_68_68, ll_backend__call_gen__ValueVarCode_24, ll_backend__call_gen__StoreCode_27);
          }
#line 684 "call_gen.m"
          {
#line 684 "call_gen.m"
            *ll_backend__call_gen__Code_12 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_68_68, ll_backend__call_gen__AddrVarCode_22, ll_backend__call_gen__V_65_65);
          }
#line 679 "call_gen.m"
        }
#line 678 "call_gen.m"
      else
#line 686 "call_gen.m"
        {
#line 687 "call_gen.m"
          {
#line 687 "call_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/7", (MR_String) "malformed model_det builtin predicate");
#line 687 "call_gen.m"
            return;
          }
#line 686 "call_gen.m"
        }
#line 693 "call_gen.m"
    else
#line 693 "call_gen.m"
    if ((ll_backend__call_gen__CodeModel_8 == (MR_Integer) 2))
#line 714 "call_gen.m"
      {
#line 715 "call_gen.m"
        {
#line 715 "call_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/7", (MR_String) "model_non builtin predicate");
#line 715 "call_gen.m"
          return;
        }
#line 714 "call_gen.m"
      }
#line 693 "call_gen.m"
    else
#line 700 "call_gen.m"
    if (((MR_tag((MR_Word) ll_backend__call_gen__SimpleCode_17)) == (MR_mktag((MR_Integer) 0))))
#line 701 "call_gen.m"
      {
#line 702 "call_gen.m"
        {
#line 702 "call_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/7", (MR_String) "malformed model_semi builtin predicate");
#line 702 "call_gen.m"
          return;
        }
#line 701 "call_gen.m"
      }
#line 700 "call_gen.m"
    else
#line 700 "call_gen.m"
    if (((MR_tag((MR_Word) ll_backend__call_gen__SimpleCode_17)) == (MR_mktag((MR_Integer) 3))))
#line 709 "call_gen.m"
      {
#line 710 "call_gen.m"
        {
#line 710 "call_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/7", (MR_String) "malformed model_semi builtin predicate");
#line 710 "call_gen.m"
          return;
        }
#line 709 "call_gen.m"
      }
#line 700 "call_gen.m"
    else
#line 700 "call_gen.m"
    if (((MR_tag((MR_Word) ll_backend__call_gen__SimpleCode_17)) == (MR_mktag((MR_Integer) 1))))
#line 705 "call_gen.m"
      {
#line 706 "call_gen.m"
        {
#line 706 "call_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/7", (MR_String) "malformed model_semi builtin predicate");
#line 706 "call_gen.m"
          return;
        }
#line 705 "call_gen.m"
      }
#line 700 "call_gen.m"
    else
#line 696 "call_gen.m"
      {
#line 696 "call_gen.m"
        MR_Word ll_backend__call_gen__TestExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__call_gen__SimpleCode_17, (MR_Integer) 0)));
#line 696 "call_gen.m"
        MR_Word ll_backend__call_gen__Rval_31;
#line 696 "call_gen.m"
        MR_Word ll_backend__call_gen__ArgCode_32;
#line 696 "call_gen.m"
        MR_Word ll_backend__call_gen__TestCode_33;
#line 696 "call_gen.m"
        MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_53_53;

#line 697 "call_gen.m"
        {
#line 697 "call_gen.m"
          ll_backend__call_gen__generate_simple_test_5_p_0(ll_backend__call_gen__TestExpr_30, &ll_backend__call_gen__Rval_31, &ll_backend__call_gen__ArgCode_32, ll_backend__call_gen__STATE_VARIABLE_CI_0_39, &ll_backend__call_gen__STATE_VARIABLE_CI_53_53);
        }
#line 698 "call_gen.m"
        {
#line 698 "call_gen.m"
          ll_backend__code_info__fail_if_rval_is_false_4_p_0(ll_backend__call_gen__Rval_31, &ll_backend__call_gen__TestCode_33, ll_backend__call_gen__STATE_VARIABLE_CI_53_53, ll_backend__call_gen__STATE_VARIABLE_CI_40);
        }
#line 699 "call_gen.m"
        {
#line 699 "call_gen.m"
          *ll_backend__call_gen__Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__call_gen__ArgCode_32, ll_backend__call_gen__TestCode_33);
        }
#line 696 "call_gen.m"
      }
#line 667 "call_gen.m"
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
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_36,
#line 37 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_37)
#line 37 "call_gen.m"
{
#line 177 "call_gen.m"
  {
#line 177 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 177 "call_gen.m"
    {
#line 177 "call_gen.m"
      ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_10_p_0(ll_backend__call_gen__GenericCall_12, ll_backend__call_gen__Args_13, ll_backend__call_gen__Modes_14, ll_backend__call_gen__MaybeRegTypes_15, ll_backend__call_gen__Det_16, ll_backend__call_gen__GoalInfo_17, ll_backend__call_gen__Code_18, ll_backend__call_gen__STATE_VARIABLE_CI_0_36, ll_backend__call_gen__STATE_VARIABLE_CI_37);
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
#line 145 "call_gen.m"
    MR_Word ll_backend__call_gen__MaybeTraceInfo_39;

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
#line 602 "call_gen.m"
    {
#line 602 "call_gen.m"
      ll_backend__code_info__get_forward_live_vars_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_46_46, &ll_backend__call_gen__Liveness_90);
    }
#line 4544 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeCtorInfo_17_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 603 "call_gen.m"
    {
#line 603 "call_gen.m"
      ll_backend__call_gen__V_93_93 = parse_tree__set_of_var__init_0_f_0(ll_backend__call_gen__TypeCtorInfo_17_95);
    }
#line 603 "call_gen.m"
    {
#line 603 "call_gen.m"
      ll_backend__call_gen__find_nonlive_outputs_4_p_0(ll_backend__call_gen__ArgsInfos_17, ll_backend__call_gen__Liveness_90, ll_backend__call_gen__V_93_93, &ll_backend__call_gen__NonLiveOutputs_20);
    }
#line 604 "call_gen.m"
    {
#line 604 "call_gen.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__call_gen__GoalInfo_13, &ll_backend__call_gen__PostDeaths_91);
    }
#line 605 "call_gen.m"
    {
#line 605 "call_gen.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__call_gen__TypeCtorInfo_17_95, ll_backend__call_gen__PostDeaths_91, ll_backend__call_gen__NonLiveOutputs_20, &ll_backend__call_gen__ImmediatePostDeaths_92);
    }
#line 606 "call_gen.m"
    {
#line 606 "call_gen.m"
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
#line 4639 "ll_backend.call_gen.c"
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
#line 128 "call_gen.m"
    {
#line 128 "call_gen.m"
      ll_backend__call_gen__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 128 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_60_60, 0) = ((MR_Box) (ll_backend__call_gen__V_61_61));
#line 128 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_60_60, 1) = ((MR_Box) ((MR_String) "continuation label"));
#line 128 "call_gen.m"
    }
#line 129 "call_gen.m"
    {
#line 129 "call_gen.m"
      ll_backend__call_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 129 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_59_59, 0) = ((MR_Box) (ll_backend__call_gen__V_60_60));
#line 129 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 129 "call_gen.m"
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
#line 126 "call_gen.m"
    {
#line 126 "call_gen.m"
      ll_backend__call_gen__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 126 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_56_56, 0) = ((MR_Box) (ll_backend__call_gen__V_57_57));
#line 126 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_56_56, 1) = ((MR_Box) (ll_backend__call_gen__CallComment_26));
#line 126 "call_gen.m"
    }
#line 127 "call_gen.m"
    {
#line 127 "call_gen.m"
      ll_backend__call_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 127 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_55_55, 0) = ((MR_Box) (ll_backend__call_gen__V_56_56));
#line 127 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_55_55, 1) = ((MR_Box) (ll_backend__call_gen__V_59_59));
#line 127 "call_gen.m"
    }
#line 125 "call_gen.m"
    {
#line 125 "call_gen.m"
      ll_backend__call_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 125 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_51_51, 0) = ((MR_Box) (ll_backend__call_gen__V_52_52));
#line 125 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_51_51, 1) = ((MR_Box) (ll_backend__call_gen__V_55_55));
#line 125 "call_gen.m"
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
#line 145 "call_gen.m"
    {
#line 145 "call_gen.m"
      ll_backend__call_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__call_gen__GoalInfo_13, (MR_Integer) 10);
    }
#line 145 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 145 "call_gen.m"
      {
#line 146 "call_gen.m"
        {
#line 146 "call_gen.m"
          ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_65_65, &ll_backend__call_gen__MaybeTraceInfo_39);
        }
#line 147 "call_gen.m"
        ll_backend__call_gen__succeeded = ((MR_tag((MR_Word) ll_backend__call_gen__MaybeTraceInfo_39)) == (MR_mktag((MR_Integer) 1)));
#line 147 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 147 "call_gen.m"
          ll_backend__call_gen__TraceInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeTraceInfo_39, (MR_Integer) 0)));
#line 145 "call_gen.m"
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
#line 153 "call_gen.m"
        {
#line 153 "call_gen.m"
          ll_backend__call_gen__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 153 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_73_73, 0) = ((MR_Box) (ll_backend__call_gen__V_74_74));
#line 153 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_73_73, 1) = ((MR_Box) ((MR_String) "tail recursive jump"));
#line 153 "call_gen.m"
        }
#line 155 "call_gen.m"
        {
#line 155 "call_gen.m"
          ll_backend__call_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_72_72, 0) = ((MR_Box) (ll_backend__call_gen__V_73_73));
#line 155 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 155 "call_gen.m"
        }
#line 152 "call_gen.m"
        {
#line 152 "call_gen.m"
          ll_backend__call_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_68_68, 0) = ((MR_Box) (ll_backend__call_gen__V_52_52));
#line 152 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_68_68, 1) = ((MR_Box) (ll_backend__call_gen__V_72_72));
#line 152 "call_gen.m"
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
